#include "../../include/semantic/SemanticCube.h"

// constructor to initialize the semantic cube with type compatibilities
SemanticCube::SemanticCube() {
    // int operations
    cube["int"]["int"]["+"] = "int";
    cube["int"]["int"]["-"] = "int";
    cube["int"]["int"]["*"] = "int";
    cube["int"]["int"]["/"] = "int";
    cube["int"]["int"]["=="] = "bool";
    cube["int"]["int"]["!="] = "bool";
    cube["int"]["int"]["<"] = "bool";
    cube["int"]["int"][">"] = "bool";

    // float operations
    cube["float"]["float"]["+"] = "float";
    cube["float"]["float"]["-"] = "float";
    cube["float"]["float"]["*"] = "float";
    cube["float"]["float"]["/"] = "float";
    cube["float"]["float"]["=="] = "bool";
    cube["float"]["float"]["!="] = "bool";
    cube["float"]["float"]["<"] = "bool";
    cube["float"]["float"][">"] = "bool";

    // mixed operations: `int` with `float`
    cube["int"]["float"]["+"] = "float";
    cube["int"]["float"]["-"] = "float";
    cube["int"]["float"]["*"] = "float";
    cube["int"]["float"]["/"] = "float";
    cube["float"]["int"]["+"] = "float";
    cube["float"]["int"]["-"] = "float";
    cube["float"]["int"]["*"] = "float";
    cube["float"]["int"]["/"] = "float";

    // mixed comparisons: `int` with `float`
    cube["int"]["float"]["=="] = "bool";
    cube["int"]["float"]["!="] = "bool";
    cube["int"]["float"]["<"] = "bool";
    cube["int"]["float"][">"] = "bool";
    cube["float"]["int"]["=="] = "bool";
    cube["float"]["int"]["!="] = "bool";
    cube["float"]["int"]["<"] = "bool";
    cube["float"]["int"][">"] = "bool";
}

// method to retrieve the result type for a given operation between two types
std::string SemanticCube::getResultType(const std::string &type1, const std::string &type2, const std::string &operation) const {
    if (cube.count(type1) && cube.at(type1).count(type2) && cube.at(type1).at(type2).count(operation)) {
        return cube.at(type1).at(type2).at(operation);
    }
    return "error";  // return "error" if no valid operation is found
}
