#include "../../include/listener/DuckyCustomListener.h"
#include <stdexcept>
#include <iostream>

DuckyCustomListener::DuckyCustomListener() 
    : quadGen(varTable, semanticCube), currentScope(0), isGlobalScope(true), parameterCount(0), mainQuad(-1) {}

// Program structure
void DuckyCustomListener::enterProgram(duckyParser::ProgramContext *ctx) {
    // Generate initial GOTO main (will be backpatched later)
    quadGen.generateQuadruple(QuadOperation::GOTO, "main", "-1", "-1");
    currentFunction = "";
    isGlobalScope = true;
}

void DuckyCustomListener::exitProgram(duckyParser::ProgramContext *ctx) {
    // Backpatch main location
    if (mainQuad != -1) {
        quadGen.backpatch(0, std::to_string(mainQuad));
    }
}

// Variable declarations
void DuckyCustomListener::enterVar_decl(duckyParser::Var_declContext *ctx) {
    VarType type = getTypeFromContext(ctx->data_type());
    
    for (auto id : ctx->var_list()->ID()) {
        std::string varName = id->getText();
        try {
            varTable.addVariable(varName, type, currentScope);
            std::cout << "Added variable: " << varName << " of type " << (type == VarType::INT ? "INT" : "FLOAT") << " in scope " << currentScope << std::endl;
        } catch (const std::runtime_error& e) {
            std::cerr << "Error at line " << ctx->getStart()->getLine() << ": " << e.what() << std::endl;
        }
    }
}

void DuckyCustomListener::exitVar_decl(duckyParser::Var_declContext *ctx) {}

// Function declarations
void DuckyCustomListener::enterFunc_decl(duckyParser::Func_declContext *ctx) {
    std::string funcName = ctx->ID()->getText();
    currentFunction = funcName;
    isGlobalScope = false;
    
    // Store the starting quad for the function
    int startQuad = quadGen.getCurrentQuad();
    funcDir.addFunction(funcName, VarType::VOID);
    funcDir.setStartQuad(funcName, startQuad);
    
    currentScope = funcDir.getFunctionId(funcName);
    std::cout << "Entering function: " << funcName << " with scope " << currentScope << std::endl;
}

void DuckyCustomListener::exitFunc_decl(duckyParser::Func_declContext *ctx) {
    quadGen.generateQuadruple(QuadOperation::ENDPROC, "-1", "-1", "-1");
    currentScope = 0;
    currentFunction = "";
    isGlobalScope = true;
}

void DuckyCustomListener::enterFunc_block(duckyParser::Func_blockContext *ctx) {
    std::cout << "Entering function block for scope: " << currentScope << std::endl;
}

void DuckyCustomListener::exitFunc_block(duckyParser::Func_blockContext *ctx) {}

void DuckyCustomListener::enterParam(duckyParser::ParamContext *ctx) {
    if (ctx->ID() && ctx->data_type()) {
        std::string paramName = ctx->ID()->getText();
        VarType type = getTypeFromContext(ctx->data_type());
        
        std::cout << "Adding parameter: " << paramName << " to function: " << currentFunction << std::endl;
        
        funcDir.addParameter(currentFunction, paramName, type);
        try {
            varTable.addVariable(paramName, type, currentScope, true);
        } catch (const std::runtime_error& e) {
            std::cerr << "Error adding parameter: " << e.what() << std::endl;
        }
    }
}

void DuckyCustomListener::exitParam(duckyParser::ParamContext *ctx) {}

void DuckyCustomListener::enterBlock(duckyParser::BlockContext *ctx) {
    // Check if we're at the main block by checking the parent context
    if (dynamic_cast<duckyParser::ProgramContext*>(ctx->parent)) {
        mainQuad = quadGen.getCurrentQuad();
        currentScope = 0;  // Reset to global scope for main
        std::cout << "Entering main block at quad: " << mainQuad << std::endl;
    }
}

void DuckyCustomListener::exitBlock(duckyParser::BlockContext *ctx) {
    // If we're leaving the main block
    if (dynamic_cast<duckyParser::ProgramContext*>(ctx->parent)) {
        quadGen.generateQuadruple(QuadOperation::ENDPROC, "-1", "-1", "-1");
    }
}

// Statements
void DuckyCustomListener::enterAssignment(duckyParser::AssignmentContext *ctx) {
    std::string id = ctx->ID()->getText();
    if (!varTable.variableExists(id, currentScope)) {
        throw std::runtime_error("Variable '" + id + "' not declared");
    }
}

void DuckyCustomListener::exitAssignment(duckyParser::AssignmentContext *ctx) {
    std::string id = ctx->ID()->getText();
    std::string value = quadGen.getTopOperand();
    quadGen.generateQuadruple(QuadOperation::ASSIGN, value, "-1", id);
    quadGen.popOperand();  // Clean up the operand stack
}

// Expressions
void DuckyCustomListener::enterExpression(duckyParser::ExpressionContext *ctx) {
    if (ctx->comparison_operator()) {
        std::string op = ctx->comparison_operator()->getText();
        quadGen.pushOperator(getOperationFromContext(op));
    }
}

void DuckyCustomListener::exitExpression(duckyParser::ExpressionContext *ctx) {
    if (ctx->comparison_operator()) {
        std::string right = quadGen.popOperand();
        std::string left = quadGen.popOperand();
        VarType resultType = quadGen.getTopType();
        std::string temp = quadGen.generateTemp(resultType);
        QuadOperation op = quadGen.popOperator();
        quadGen.generateQuadruple(op, left, right, temp);
        quadGen.pushOperand(temp, resultType);
    }
}

void DuckyCustomListener::enterExp(duckyParser::ExpContext *ctx) {}

void DuckyCustomListener::exitExp(duckyParser::ExpContext *ctx) {
    if (ctx->children.size() > 1) {
        for (size_t i = 1; i < ctx->children.size(); i += 2) {
            std::string right = quadGen.popOperand();
            std::string left = quadGen.popOperand();
            VarType resultType = quadGen.getTopType();
            std::string temp = quadGen.generateTemp(resultType);
            quadGen.generateQuadruple(QuadOperation::PLUS, left, right, temp);
            quadGen.pushOperand(temp, resultType);
        }
    }
}

void DuckyCustomListener::enterTerm(duckyParser::TermContext *ctx) {}

void DuckyCustomListener::exitTerm(duckyParser::TermContext *ctx) {
    if (ctx->children.size() > 1) {
        for (size_t i = 1; i < ctx->children.size(); i += 2) {
            std::string right = quadGen.popOperand();
            std::string left = quadGen.popOperand();
            VarType resultType = quadGen.getTopType();
            std::string temp = quadGen.generateTemp(resultType);
            std::string op = ctx->children[i]->getText();
            QuadOperation quadOp = op == "*" ? QuadOperation::MULT : QuadOperation::DIV;
            quadGen.generateQuadruple(quadOp, left, right, temp);
            quadGen.pushOperand(temp, resultType);
        }
    }
}

void DuckyCustomListener::enterFactor(duckyParser::FactorContext *ctx) {}

void DuckyCustomListener::exitFactor(duckyParser::FactorContext *ctx) {
    if (ctx->constant()) {
        std::string value = ctx->constant()->getText();
        VarType type = ctx->constant()->FLOAT_CONSTANT() ? VarType::FLOAT : VarType::INT;
        handleConstant(value, type);
    } else if (ctx->ID()) {
        std::string id = ctx->ID()->getText();
        Variable* var = varTable.getVariable(id, currentScope);
        if (var) {
            quadGen.pushOperand(id, var->type);
        } else {
            throw std::runtime_error("Undefined variable: " + id);
        }
    }
}

// Function calls
void DuckyCustomListener::enterFunction_call(duckyParser::Function_callContext *ctx) {
    std::string funcName = ctx->ID()->getText();
    validateFunctionCall(funcName);
    quadGen.generateQuadruple(QuadOperation::ERA, funcName, "-1", "-1");
    parameterCount = 0;
}

void DuckyCustomListener::exitFunction_call(duckyParser::Function_callContext *ctx) {
    std::string funcName = ctx->ID()->getText();
    Function* func = funcDir.getFunction(funcName);
    if (func) {
        quadGen.generateQuadruple(QuadOperation::GOSUB, funcName, "-1", 
                                std::to_string(func->startQuad));
    }
}

void DuckyCustomListener::enterArg_list(duckyParser::Arg_listContext *ctx) {}

void DuckyCustomListener::exitArg_list(duckyParser::Arg_listContext *ctx) {
    if (ctx->expression().size() > 0) {
        for (auto expr : ctx->expression()) {
            quadGen.generateQuadruple(QuadOperation::PARAM, quadGen.popOperand(), "-1", 
                                    "param" + std::to_string(parameterCount++));
        }
    }
}

// Print statements
void DuckyCustomListener::enterPrint(duckyParser::PrintContext *ctx) {}

void DuckyCustomListener::exitPrint(duckyParser::PrintContext *ctx) {
    quadGen.generateQuadruple(QuadOperation::PRINT, quadGen.popOperand(), "-1", "-1");
}

void DuckyCustomListener::enterPrint_list(duckyParser::Print_listContext *ctx) {}

void DuckyCustomListener::exitPrint_list(duckyParser::Print_listContext *ctx) {}

// Helper functions
void DuckyCustomListener::handleConstant(const std::string& value, VarType type) {
    quadGen.pushOperand(value, type);
}

VarType DuckyCustomListener::getTypeFromContext(duckyParser::Data_typeContext* ctx) {
    if (ctx->INTEGER_TYPE()) return VarType::INT;
    if (ctx->FLOAT_TYPE()) return VarType::FLOAT;
    return VarType::VOID;
}

// Add these methods at the end of your DuckyCustomListener.cpp file

QuadOperation DuckyCustomListener::getOperationFromContext(std::string op) {
    if (op == "+") return QuadOperation::PLUS;
    if (op == "-") return QuadOperation::MINUS;
    if (op == "*") return QuadOperation::MULT;
    if (op == "/") return QuadOperation::DIV;
    if (op == ">") return QuadOperation::GREATER_THAN;
    if (op == "<") return QuadOperation::LESS_THAN;
    if (op == "==") return QuadOperation::EQUAL;
    if (op == "!=") return QuadOperation::NOT_EQUAL;
    throw std::runtime_error("Unknown operation: " + op);
}

void DuckyCustomListener::validateFunctionCall(const std::string& funcName) {
    if (!funcDir.functionExists(funcName)) {
        throw std::runtime_error("Function '" + funcName + "' not declared");
    }
}

const std::vector<Quadruple>& DuckyCustomListener::getQuadruples() const {
    return quadGen.getQuadruples();
}

void DuckyCustomListener::printTables() const {
    std::cout << "\n=== Compilation Summary ===\n";
    varTable.printTable();
    funcDir.printDirectory();
    quadGen.printQuads();
}

void DuckyCustomListener::enterCondition(duckyParser::ConditionContext *ctx) {
    // Push the current quad to backpatch later
    conditionStartQuad = quadGen.getCurrentQuad();
}

void DuckyCustomListener::exitCondition(duckyParser::ConditionContext *ctx) {
    // Generate GOTOF, we'll backpatch this later
    std::string condition = quadGen.popOperand();
    quadGen.generateQuadruple(QuadOperation::GOTOF, condition, "-1", "-1");
    
    // Store the quad number of the GOTOF to backpatch later
    jumpStack.push(quadGen.getCurrentQuad() - 1);
}

void DuckyCustomListener::enterElse_block(duckyParser::Else_blockContext *ctx) {
    // Generate GOTO for the end of the if statement
    quadGen.generateQuadruple(QuadOperation::GOTO, "-1", "-1", "-1");
    
    // Get the quad number of the false jump and backpatch it
    int falseJump = jumpStack.top();
    jumpStack.pop();
    
    // Backpatch the false jump to the current quad
    quadGen.backpatch(falseJump, std::to_string(quadGen.getCurrentQuad()));
    
    // Store the GOTO quad number for backpatching at the end
    jumpStack.push(quadGen.getCurrentQuad() - 1);
}

void DuckyCustomListener::exitElse_block(duckyParser::Else_blockContext *ctx) {
    if (!jumpStack.empty()) {
        // Get the GOTO quad number and backpatch it to the next quad
        int gotoQuad = jumpStack.top();
        jumpStack.pop();
        quadGen.backpatch(gotoQuad, std::to_string(quadGen.getCurrentQuad()));
    }
}

// While loop handling
void DuckyCustomListener::enterLoop(duckyParser::LoopContext *ctx) {
    // Store the start of the loop for the condition check
    jumpStack.push(quadGen.getCurrentQuad());
}

void DuckyCustomListener::exitLoop(duckyParser::LoopContext *ctx) {
    // Get end and start quads
    int endQuad = quadGen.getCurrentQuad();
    int startQuad = jumpStack.top();
    jumpStack.pop();
    
    // Get condition result
    std::string condition = quadGen.popOperand();
    
    // Generate GOTOF for the condition
    quadGen.generateQuadruple(QuadOperation::GOTOF, condition, "-1", std::to_string(endQuad + 2));
    
    // Generate GOTO back to the start of the loop
    quadGen.generateQuadruple(QuadOperation::GOTO, "-1", "-1", std::to_string(startQuad));
}
