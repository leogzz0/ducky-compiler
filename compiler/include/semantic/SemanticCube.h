// include/SemanticCube.h
#pragma once
#include "VariableTable.h"  // For VarType
#include <map>
#include <tuple>

enum class Operation {
    PLUS,
    MINUS,
    MULT,
    DIV,
    GREATER_THAN,
    LESS_THAN,
    EQUAL,
    NOT_EQUAL,
    ASSIGN
};

class SemanticCube {
public:
    SemanticCube();
    
    // Get resulting type of operation between two types
    VarType getResultType(VarType left, VarType right, Operation op);
    
    // Check if operation is valid between types
    bool isValidOperation(VarType left, VarType right, Operation op);
    
    // Convert operation enum to string (for error messages and debugging)
    static std::string operationToString(Operation op);

private:
    // Map to store valid type combinations and their results
    std::map<std::tuple<VarType, VarType, Operation>, VarType> typeRules;
    
    // Initialize the semantic cube rules
    void initializeRules();
};