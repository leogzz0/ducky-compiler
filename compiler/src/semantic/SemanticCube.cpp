#include "../../include/semantic/SemanticCube.h"
#include <stdexcept>

SemanticCube::SemanticCube() {
    initializeRules();
}

void SemanticCube::initializeRules() {
    // Arithmetic operations: INT op INT = INT
    typeRules[std::make_tuple(VarType::INT, VarType::INT, Operation::PLUS)] = VarType::INT;
    typeRules[std::make_tuple(VarType::INT, VarType::INT, Operation::MINUS)] = VarType::INT;
    typeRules[std::make_tuple(VarType::INT, VarType::INT, Operation::MULT)] = VarType::INT;
    typeRules[std::make_tuple(VarType::INT, VarType::INT, Operation::DIV)] = VarType::FLOAT; // Division always returns float

    // INT op FLOAT = FLOAT
    typeRules[std::make_tuple(VarType::INT, VarType::FLOAT, Operation::PLUS)] = VarType::FLOAT;
    typeRules[std::make_tuple(VarType::INT, VarType::FLOAT, Operation::MINUS)] = VarType::FLOAT;
    typeRules[std::make_tuple(VarType::INT, VarType::FLOAT, Operation::MULT)] = VarType::FLOAT;
    typeRules[std::make_tuple(VarType::INT, VarType::FLOAT, Operation::DIV)] = VarType::FLOAT;

    // FLOAT op INT = FLOAT
    typeRules[std::make_tuple(VarType::FLOAT, VarType::INT, Operation::PLUS)] = VarType::FLOAT;
    typeRules[std::make_tuple(VarType::FLOAT, VarType::INT, Operation::MINUS)] = VarType::FLOAT;
    typeRules[std::make_tuple(VarType::FLOAT, VarType::INT, Operation::MULT)] = VarType::FLOAT;
    typeRules[std::make_tuple(VarType::FLOAT, VarType::INT, Operation::DIV)] = VarType::FLOAT;

    // FLOAT op FLOAT = FLOAT
    typeRules[std::make_tuple(VarType::FLOAT, VarType::FLOAT, Operation::PLUS)] = VarType::FLOAT;
    typeRules[std::make_tuple(VarType::FLOAT, VarType::FLOAT, Operation::MINUS)] = VarType::FLOAT;
    typeRules[std::make_tuple(VarType::FLOAT, VarType::FLOAT, Operation::MULT)] = VarType::FLOAT;
    typeRules[std::make_tuple(VarType::FLOAT, VarType::FLOAT, Operation::DIV)] = VarType::FLOAT;

    // Comparison operations always return INT (as boolean)
    for (VarType t1 : {VarType::INT, VarType::FLOAT}) {
        for (VarType t2 : {VarType::INT, VarType::FLOAT}) {
            typeRules[std::make_tuple(t1, t2, Operation::GREATER_THAN)] = VarType::INT;
            typeRules[std::make_tuple(t1, t2, Operation::LESS_THAN)] = VarType::INT;
            typeRules[std::make_tuple(t1, t2, Operation::EQUAL)] = VarType::INT;
            typeRules[std::make_tuple(t1, t2, Operation::NOT_EQUAL)] = VarType::INT;
        }
    }

    // Assignment rules
    typeRules[std::make_tuple(VarType::INT, VarType::INT, Operation::ASSIGN)] = VarType::INT;
    typeRules[std::make_tuple(VarType::FLOAT, VarType::FLOAT, Operation::ASSIGN)] = VarType::FLOAT;
    typeRules[std::make_tuple(VarType::FLOAT, VarType::INT, Operation::ASSIGN)] = VarType::FLOAT;
    // Note: INT = FLOAT is not allowed to prevent loss of precision
}

VarType SemanticCube::getResultType(VarType left, VarType right, Operation op) {
    auto key = std::make_tuple(left, right, op);
    auto it = typeRules.find(key);
    
    if (it == typeRules.end()) {
        throw std::runtime_error("Invalid operation between types: " + operationToString(op));
    }
    
    return it->second;
}

bool SemanticCube::isValidOperation(VarType left, VarType right, Operation op) {
    auto key = std::make_tuple(left, right, op);
    return typeRules.find(key) != typeRules.end();
}

std::string SemanticCube::operationToString(Operation op) {
    switch (op) {
        case Operation::PLUS: return "PLUS";
        case Operation::MINUS: return "MINUS";
        case Operation::MULT: return "MULTIPLY";
        case Operation::DIV: return "DIVIDE";
        case Operation::GREATER_THAN: return "GREATER THAN";
        case Operation::LESS_THAN: return "LESS THAN";
        case Operation::EQUAL: return "EQUAL";
        case Operation::NOT_EQUAL: return "NOT EQUAL";
        case Operation::ASSIGN: return "ASSIGN";
        default: return "UNKNOWN";
    }
}