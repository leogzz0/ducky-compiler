// DuckyCustomListener.cpp

#include "../../include/listener/DuckyCustomListener.h"
#include <stdexcept>
#include <iostream>

DuckyCustomListener::DuckyCustomListener(bool printTraversal)
    : printTraversal(printTraversal), currentScope("global"), tempVarCounter(0), labelCounter(0) {}

// Helper to add a quadruple
void DuckyCustomListener::addQuadruple(const std::string& op, int arg1, int arg2, int result) {
    Quadruple quad = {op, arg1, arg2, result};
    quadruples.push_back(quad);
}

// Helper to create a temporary variable
int DuckyCustomListener::createTempVar() {
    return memoryManager.getTempAddress("int"); // Assume int type for now
}

// Listener methods
void DuckyCustomListener::enterProgram(duckyParser::ProgramContext* ctx) {
    // Initialize program with a GOTO quadruple
    addQuadruple("GOTO", -1, -1, -1);
    jumpStack.push(quadruples.size() - 1);
}

void DuckyCustomListener::exitProgram(duckyParser::ProgramContext* ctx) {
    // Patch GOTO quadruple to point to the main block
    int mainStartIndex = quadruples.size();
    int gotoIndex = jumpStack.top();
    jumpStack.pop();
    quadruples[gotoIndex].result = mainStartIndex;

    // Add HALT quadruple to end the program
    addQuadruple("HALT", -1, -1, -1);
}

void DuckyCustomListener::exitVar_decl(duckyParser::Var_declContext* ctx) {
    // Parse variable declarations
    Type varType = semanticCube.getTypeFromString(ctx->data_type()->getText());

    for (auto id : ctx->var_list()->ID()) {
        std::string varName = id->getText();
        int address = memoryManager.getAddress(varType, currentScope == "global" ? "global" : "local");

        if (address < 0) {
            throw std::runtime_error("Memory allocation failed for variable: " + varName);
        }

        variableTable.addVariable(currentScope, varName, ctx->data_type()->getText(), address);
    }
}

void DuckyCustomListener::exitAssignment(duckyParser::AssignmentContext* ctx) {
    // Get the variable and expression
    std::string varName = ctx->ID()->getText();
    int varAddress = variableTable.getVariableAddress(currentScope, varName);

    int exprResult = operandStack.top();
    operandStack.pop();

    // Generate assignment quadruple
    addQuadruple("=", exprResult, -1, varAddress);
}

void DuckyCustomListener::exitPrint(duckyParser::PrintContext* ctx) {
    // Handle print statements
    for (auto item : ctx->print_list()->print_item()) {
        if (item->expression()) {
            int value = operandStack.top();
            operandStack.pop();
            addQuadruple("PRINT", value, -1, -1);
        }
    }
}

void DuckyCustomListener::enterCondition(duckyParser::ConditionContext* ctx) {
    // Handle condition start
    int condition = operandStack.top();
    operandStack.pop();

    addQuadruple("GOTOF", condition, -1, -1);
    jumpStack.push(quadruples.size() - 1);
}

void DuckyCustomListener::exitCondition(duckyParser::ConditionContext* ctx) {
    // Patch false jump
    int falseJump = jumpStack.top();
    jumpStack.pop();

    quadruples[falseJump].result = quadruples.size();
}
