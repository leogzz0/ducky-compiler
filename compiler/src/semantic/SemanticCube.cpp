// SemanticCube.cpp

#include "../../include/semantic/SemanticCube.h"

SemanticCube::SemanticCube() {
    // Arithmetic operations for int
    cube[{"int", "int", "+"}] = "int";
    cube[{"int", "float", "+"}] = "float";
    cube[{"float", "int", "+"}] = "float";
    cube[{"float", "float", "+"}] = "float";

    cube[{"int", "int", "-"}] = "int";
    cube[{"int", "float", "-"}] = "float";
    cube[{"float", "int", "-"}] = "float";
    cube[{"float", "float", "-"}] = "float";

    cube[{"int", "int", "*"}] = "int";
    cube[{"int", "float", "*"}] = "float";
    cube[{"float", "int", "*"}] = "float";
    cube[{"float", "float", "*"}] = "float";

    cube[{"int", "int", "/"}] = "int";
    cube[{"int", "float", "/"}] = "float";
    cube[{"float", "int", "/"}] = "float";
    cube[{"float", "float", "/"}] = "float";

    // Comparison operations
    cube[{"int", "int", ">"}] = "bool";
    cube[{"int", "float", ">"}] = "bool";
    cube[{"float", "int", ">"}] = "bool";
    cube[{"float", "float", ">"}] = "bool";

    cube[{"int", "int", "<"}] = "bool";
    cube[{"int", "float", "<"}] = "bool";
    cube[{"float", "int", "<"}] = "bool";
    cube[{"float", "float", "<"}] = "bool";

    cube[{"int", "int", "!="}] = "bool";
    cube[{"int", "float", "!="}] = "bool";
    cube[{"float", "int", "!="}] = "bool";
    cube[{"float", "float", "!="}] = "bool";

    cube[{"int", "int", "=="}] = "bool";
    cube[{"int", "float", "=="}] = "bool";
    cube[{"float", "int", "=="}] = "bool";
    cube[{"float", "float", "=="}] = "bool";

    // Assignment operations
    cube[{"int", "int", "="}] = "int";
    cube[{"float", "float", "="}] = "float";
    cube[{"float", "int", "="}] = "float";
    cube[{"int", "float", "="}] = "error";
}

std::string SemanticCube::getType(const std::string& leftType, const std::string& rightType, const std::string& op) {
    auto it = cube.find({leftType, rightType, op});
    if (it == cube.end()) {
        throw std::runtime_error("Invalid operation: Cannot perform '" + op + "' between types '" + leftType + "' and '" + rightType + "'");
    }
    return it->second;
}