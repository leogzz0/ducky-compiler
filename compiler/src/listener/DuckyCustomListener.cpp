#include "../../include/listener/DuckyCustomListener.h"
#include "../../include/utils/Utils.h"

DuckyCustomListener::DuckyCustomListener(VariableTable& variableTable, ErrorHandler& errorHandler, FunctionDirectory& functionDirectory, SemanticCube& semanticCube)
    : variableTable(variableTable), errorHandler(errorHandler), functionDirectory(functionDirectory), semanticCube(semanticCube) {}


//************************************** PROGRAM **************************************//
// program entry and exit - scope management
void DuckyCustomListener::enterProgram(duckyParser::ProgramContext *ctx) {
    variableTable.enterScope();
    std::cout << "Entering program: " << ctx->ID()->getText() << std::endl;
}

void DuckyCustomListener::exitProgram(duckyParser::ProgramContext *ctx) {
    variableTable.exitScope();
}

//************************************** VARIABLES **************************************//
// variable declaration - add variables to scope
void DuckyCustomListener::exitVar_decl(duckyParser::Var_declContext *ctx) {
    std::string dataType = ctx->data_type()->getText();
    for (auto id : ctx->var_list()->ID()) {
        std::string varName = id->getText();
        if (variableTable.exists(varName)) {
            errorHandler.reportError("Variable '" + varName + "' is already declared in this scope.");
        } else {
            variableTable.addVariable(varName, dataType);
            std::cout << "Variable declaration: " << varName << " : " << dataType << std::endl;
        }
    }
}

//************************************** FUNCTIONS **************************************//
// funciton declaration entry and exit
void DuckyCustomListener::enterFunc_decl(duckyParser::Func_declContext *ctx) {
    std::string functionName = ctx->ID()->getText();
    std::vector<std::string> paramTypes;
    for (auto param : ctx->param_list()->param()) {
        std::string paramType = param->data_type()->getText();
        paramTypes.push_back(paramType);
    }
    functionDirectory.addFunction(functionName, paramTypes);  // add the function without parameters initially
    variableTable.enterScope();  // enter function scope for parameters
}

void DuckyCustomListener::exitFunc_decl(duckyParser::Func_declContext *ctx) {
    variableTable.exitScope();  // exit function scope
}

void DuckyCustomListener::exitFunction_call(duckyParser::Function_callContext *ctx) {
    std::string functionName = ctx->ID()->getText();

    if (!functionDirectory.exists(functionName)) {
        errorHandler.reportError("Function '" + functionName + "' is not declared.");
    } else {
        auto paramTypes = functionDirectory.getParamTypes(functionName);
        size_t expectedCount = paramTypes.size();
        size_t argCount = ctx->arg_list()->expression().size();

        if (argCount != expectedCount) {
            errorHandler.reportError("Argument count mismatch for function '" + functionName + "'. Expected " + std::to_string(expectedCount) + ", but got " + std::to_string(argCount));
        } else {
            for (size_t i = 0; i < argCount; ++i) {
                std::string argType = getType(ctx->arg_list()->expression(i));
                if (argType != paramTypes[i]) {
                    errorHandler.reportError("Argument type mismatch for parameter " + std::to_string(i + 1) + " in function '" + functionName + "'. Expected: " + paramTypes[i] + ", but got: " + argType);
                }
            }
        }
    }
}

//************************************** BLOCKS **************************************//
// block entry and exit - scope management
void DuckyCustomListener::enterBlock(duckyParser::BlockContext *ctx) {
    variableTable.enterScope();  // enter new scope for the block
}

void DuckyCustomListener::exitBlock(duckyParser::BlockContext *ctx) {
    variableTable.exitScope();  // exit the block scope
}


//************************************** ASSIGNMENT **************************************//
// assignment statement
void DuckyCustomListener::enterAssignment(duckyParser::AssignmentContext *ctx) {
    // prep actions can be added if needed before assignment
}

void DuckyCustomListener::exitAssignment(duckyParser::AssignmentContext *ctx) {
    std::string varName = ctx->ID()->getText();

    if (!variableTable.exists(varName)) {
        errorHandler.reportError("Variable '" + varName + "' is not declared.");
    } else {
        std::string exprType = getType(ctx->expression());
        std::string varType = variableTable.getType(varName);

        std::string resultType = semanticCube.getResultType(varType, exprType, "=");

        if (varType == "int" && exprType == "float") {
            errorHandler.reportError("Warning: Implicit conversion from 'float' to 'int' may lose precision.");
            variableTable.setInitialized(varName);
        } else if (resultType == "error") {
            errorHandler.reportError("Type mismatch in assignment to variable '" + varName + "'. Expected: " + varType + ", Found: " + exprType);
        } else {
            variableTable.setInitialized(varName);
        }
    }
}

//************************************** PRINT **************************************//
// print statement entry and exit
void DuckyCustomListener::enterPrint(duckyParser::PrintContext *ctx) {
    std::cout << "Processing a print statement" << std::endl;
}

void DuckyCustomListener::exitPrint(duckyParser::PrintContext *ctx) {
    std::cout << "Print: ";
    bool firstItem = true;
    for (auto item : ctx->print_list()->print_item()) {
        if (!firstItem) {
            std::cout << " ";
        }
        if (item->STRING_LITERAL()) {
            std::string text = item->STRING_LITERAL()->getText();
            text = text.substr(1, text.length() - 2);
            std::cout << text;
        } else {
            std::cout << item->expression()->getText();
        }
        firstItem = false;
    }
    std::cout << std::endl;
}

//************************************** LOOP **************************************//
// loop entry and exit - checks for condition type
void DuckyCustomListener::enterLoop(duckyParser::LoopContext *ctx) {
    // prep actions before evaluating loop condition
}

void DuckyCustomListener::exitLoop(duckyParser::LoopContext *ctx) {
    std::string exprType = getType(ctx->expression());
    if (exprType != "bool" && exprType != "int") {
        errorHandler.reportError("Loop condition type mismatch. Expected 'bool' or 'int', but got '" + exprType + "'.");
    }
}

//************************************** CONDITIONS **************************************//
// if condition entry and exit - checks for condition type
void DuckyCustomListener::enterCondition(duckyParser::ConditionContext *ctx) {
    // prep actions before evaluating condition
}

void DuckyCustomListener::exitCondition(duckyParser::ConditionContext *ctx) {
    std::string exprType = getType(ctx->expression());
    if (exprType != "bool" && exprType != "int") {
        errorHandler.reportError("Condition expression must be boolean or integer.");
    }
}

//************************************** TYPE CHECKER **************************************//
std::string DuckyCustomListener::getType(duckyParser::ExpContext *ctx) {
    if (ctx->term().size() > 1) {
        std::string leftType = getType(ctx->term(0));
        std::string rightType = getType(ctx->term(1));
        std::string op;

        if (!ctx->PLUS().empty()) {
            op = "+";
        } else if (!ctx->MINUS().empty()) {
            op = "-";
        } else {
            op = "*";
        }

        std::string resultType = semanticCube.getResultType(leftType, rightType, op);
        if (resultType == "error") {
            errorHandler.reportError("Incompatible types: " + leftType + " " + op + " " + rightType);
            return "error";
        }
        return resultType;
    }
    return getType(ctx->term(0));
}

std::string DuckyCustomListener::getType(duckyParser::TermContext *ctx) {
    if (ctx->factor().size() > 1) {
        std::string leftType = getType(ctx->factor(0));
        std::string rightType = getType(ctx->factor(1));
        std::string op;
        if (!ctx->MULT().empty()) {
            op = "*";
        } else if (!ctx->DIV().empty()) {
            op = "/";
        } else {
            op = "*";
        }
        std::string resultType = semanticCube.getResultType(leftType, rightType, op);
        if (resultType == "error") {
            errorHandler.reportError("Incompatible types: " + leftType + " " + op + " " + rightType);
            return "error";
        }
        return resultType;
    }

    return getType(ctx->factor(0));
}

std::string DuckyCustomListener::getType(duckyParser::FactorContext *ctx) {
    if (ctx->ID()) {
        std::string varName = ctx->ID()->getText();
        if (!variableTable.isInitialized(varName)) {
            errorHandler.reportError("Variable '" + varName + "' is used without being initialized.");
            variableTable.setInitialized(varName);
        }
        return variableTable.getType(varName);
    } else if (ctx->constant()) {
        return ctx->constant()->FLOAT_CONSTANT() ? "float" : "int";
    } else if (ctx->expression()) {
        return getType(ctx->expression());
    }
    return "error";
}

// helper function to determine the type of an expression
std::string DuckyCustomListener::getType(duckyParser::ExpressionContext *ctx) {
    if (ctx->exp().size() > 1) {
        std::string leftType = getType(ctx->exp(0));
        std::string rightType = getType(ctx->exp(1));
        std::string op = ctx->comparison_operator()->getText();
        
        std::string resultType = semanticCube.getResultType(leftType, rightType, op);
        if (resultType == "error") {
            errorHandler.reportError("Incompatible types: " + leftType + " " + op + " " + rightType);
            return "error";
        }
        return resultType;
    }
    return getType(ctx->exp(0));
}
