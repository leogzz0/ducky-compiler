// Quadruple.cpp

#include "../../include/semantic/Quadruple.h"
#include <stdexcept>

void Quadruple::push(const std::string& op, int op1, int op2, int result) {
    quadruples.emplace_back(op, op1, op2, result);
    quadCount++;
}

void Quadruple::updateJump(int quadIndex, int jumpAddr) {
    if (quadIndex >= quadruples.size()) {
        throw std::out_of_range("Quadruple index out of range");
    }
    std::get<3>(quadruples[quadIndex]) = jumpAddr;
}

const std::vector<std::tuple<std::string, int, int, int>>& Quadruple::getQuadruples() const {
    return quadruples;
}

std::vector<std::tuple<std::string, int, int, int>>& Quadruple::getQuadruples() {
    return quadruples;
}