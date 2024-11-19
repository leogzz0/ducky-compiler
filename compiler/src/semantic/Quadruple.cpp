// src/semantic/Quadruple.cpp
#include "../../include/semantic/Quadruple.h"
#include <iostream>
#include <stdexcept>

QuadrupleGenerator::QuadrupleGenerator(VariableTable& vt, SemanticCube& sc)
    : varTable(vt), semanticCube(sc), tempCount(1) {}

void QuadrupleGenerator::generateQuadruple(QuadOperation op, const std::string& arg1, const std::string& arg2, const std::string& result) {
    quads.emplace_back(op, arg1, arg2, result);
}

void QuadrupleGenerator::pushOperand(const std::string& operand, VarType type) {
    operands.push(operand);
    types.push(type);
}

void QuadrupleGenerator::pushOperator(QuadOperation op) {
    operators.push(op);
}

std::string QuadrupleGenerator::getTopOperand() {
    if (operands.empty()) return "-1";
    return operands.top();
}

std::string QuadrupleGenerator::popOperand() {
    if (operands.empty()) return "-1";
    std::string top = operands.top();
    operands.pop();
    if (!types.empty()) types.pop();
    return top;
}

QuadOperation QuadrupleGenerator::popOperator() {
    if (operators.empty()) return QuadOperation::ASSIGN;
    QuadOperation op = operators.top();
    operators.pop();
    return op;
}

VarType QuadrupleGenerator::getTopType() {
    if (types.empty()) return VarType::INT;
    return types.top();
}

std::string QuadrupleGenerator::generateTemp(VarType type) {
    std::string temp = "t" + std::to_string(tempCount++);
    varTable.addVariable(temp, type, 0);  // Add to current scope
    return temp;
}

void QuadrupleGenerator::pushJump(int jumpLocation) {
    jumps.push(jumpLocation);
}

int QuadrupleGenerator::popJump() {
    if (jumps.empty()) return -1;
    int jump = jumps.top();
    jumps.pop();
    return jump;
}

bool QuadrupleGenerator::hasJumps() const {
    return !jumps.empty();
}

void QuadrupleGenerator::backpatch(int quadIndex, const std::string& jump) {
    if (quadIndex >= 0 && quadIndex < quads.size()) {
        quads[quadIndex].result = jump;
    }
}

void QuadrupleGenerator::printQuads() const {
    std::cout << "\nQuadruples:\n";
    for (size_t i = 0; i < quads.size(); i++) {
        const Quadruple& q = quads[i];
        std::cout << i << ". {" 
                << operationToString(q.operation) << ", "
                << q.arg1 << ", "
                << q.arg2 << ", "
                << q.result << "}"
                << std::endl;
    }
}

std::string QuadrupleGenerator::operationToString(QuadOperation op) const {
    switch (op) {
        case QuadOperation::PLUS: return "PLUS";
        case QuadOperation::MINUS: return "MINUS";
        case QuadOperation::MULT: return "MULT";
        case QuadOperation::DIV: return "DIV";
        case QuadOperation::ASSIGN: return "ASSIGN";
        case QuadOperation::GOTO: return "GOTO";
        case QuadOperation::GOTOF: return "GOTOF";
        case QuadOperation::GOTOT: return "GOTOT";
        case QuadOperation::ERA: return "ERA";
        case QuadOperation::GOSUB: return "GOSUB";
        case QuadOperation::PARAM: return "PARAM";
        case QuadOperation::RETURN: return "RETURN";
        case QuadOperation::ENDPROC: return "ENDPROC";
        case QuadOperation::PRINT: return "PRINT";
        case QuadOperation::GREATER_THAN: return "GREATER_THAN";
        case QuadOperation::LESS_THAN: return "LESS_THAN";
        case QuadOperation::EQUAL: return "EQUAL";
        case QuadOperation::NOT_EQUAL: return "NOT_EQUAL";
        default: return "UNKNOWN";
    }
}