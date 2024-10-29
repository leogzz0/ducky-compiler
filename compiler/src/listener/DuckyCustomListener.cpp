#include "../../include/listener/DuckyCustomListener.h"
#include "../../include/utils/Utils.h"

DuckyCustomListener::DuckyCustomListener(VariableTable& variableTable, ErrorHandler& errorHandler, FunctionDirectory& functionDirectory, SemanticCube& semanticCube)
    : variableTable(variableTable), errorHandler(errorHandler), functionDirectory(functionDirectory), semanticCube(semanticCube) {}

// program entry and exit - scope management
void DuckyCustomListener::enterProgram(duckyParser::ProgramContext *ctx) {
    variableTable.enterScope();
    std::cout << "Entering program: " << ctx->ID()->getText() << std::endl;
}

void DuckyCustomListener::exitProgram(duckyParser::ProgramContext *ctx) {
    variableTable.exitScope();
}

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

// funciton declaration entry and exit
void DuckyCustomListener::enterFunc_decl(duckyParser::Func_declContext *ctx) {
    std::string functionName = ctx->ID()->getText();
    functionDirectory.addFunction(functionName, {});  // add the function without parameters initially
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
        auto argCount = ctx->arg_list()->expression().size();

        if (argCount != paramTypes.size()) {
            errorHandler.reportError("Argument count mismatch for function '" + functionName + "'.");
        }
    }
}

// block entry and exit - scope management
void DuckyCustomListener::enterBlock(duckyParser::BlockContext *ctx) {
    variableTable.enterScope();  // enter new scope for the block
}

void DuckyCustomListener::exitBlock(duckyParser::BlockContext *ctx) {
    variableTable.exitScope();  // exit the block scope
}

// assignment statement
void DuckyCustomListener::enterAssignment(duckyParser::AssignmentContext *ctx) {
    // prep actions can be added if needed before assignment
}

void DuckyCustomListener::exitAssignment(duckyParser::AssignmentContext *ctx) {
    std::string varName = ctx->ID()->getText();
    std::string exprType = getType(ctx->expression());

    if (!variableTable.exists(varName)) {
        errorHandler.reportError("Variable '" + varName + "' is not declared.");
    } else {
        std::string varType = variableTable.getType(varName); 
        std::string resultType = semanticCube.getResultType(varType, exprType, "=");
        if (resultType == "error") {
            errorHandler.reportError("Type mismatch in assignment to variable '" + varName + "'.");
        }
    }
}

// print statement entry and exit
void DuckyCustomListener::enterPrint(duckyParser::PrintContext *ctx) {
    std::cout << "Processing a print statement" << std::endl;
}

void DuckyCustomListener::exitPrint(duckyParser::PrintContext *ctx) {
    std::cout << "Print: ";
    for (auto item : ctx->print_list()->print_item()) {
        if (item->STRING_LITERAL()) {
            std::cout << Utils::escapeQuotes(item->STRING_LITERAL()->getText());
        } else {
            std::cout << item->expression()->getText();
        }
    }
    std::cout << std::endl;
}

// loop entry and exit - checks for condition type
void DuckyCustomListener::enterLoop(duckyParser::LoopContext *ctx) {
    // prep actions before evaluating loop condition
}

void DuckyCustomListener::exitLoop(duckyParser::LoopContext *ctx) {
    std::string exprType = getType(ctx->expression());
    if (exprType != "bool" && exprType != "int") {
        errorHandler.reportError("Loop condition must be boolean or integer.");
    }
}

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

std::string DuckyCustomListener::getType(duckyParser::ExpContext *ctx) {
    return ctx->getText().find('.') != std::string::npos ? "float" : "int";
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
