// SemanticCube.cpp

#include "../../include/semantic/SemanticCube.h"

SemanticCube::SemanticCube() {
    initializeCube();
}

void SemanticCube::initializeCube() {
    // arithmetic operations
    cube["0+0"] = INT;   cube["0+1"] = FLOAT;
    cube["1+0"] = FLOAT; cube["1+1"] = FLOAT;

    cube["0-0"] = INT;   cube["0-1"] = FLOAT;
    cube["1-0"] = FLOAT; cube["1-1"] = FLOAT;

    cube["0*0"] = INT;   cube["0*1"] = FLOAT;
    cube["1*0"] = FLOAT; cube["1*1"] = FLOAT;

    cube["0/0"] = FLOAT; cube["0/1"] = FLOAT;
    cube["1/0"] = FLOAT; cube["1/1"] = FLOAT;

    // comparison operations (all return INT as a Boolean representation)
    cube["0<0"] = INT;   cube["0<1"] = INT;
    cube["1<0"] = INT;   cube["1<1"] = INT;

    cube["0>0"] = INT;   cube["0>1"] = INT;
    cube["1>0"] = INT;   cube["1>1"] = INT;

    cube["0==0"] = INT;  cube["0==1"] = INT;
    cube["1==0"] = INT;  cube["1==1"] = INT;

    cube["0!=0"] = INT;  cube["0!=1"] = INT;
    cube["1!=0"] = INT;  cube["1!=1"] = INT;

    // assignment operations
    cube["0=0"] = INT;   cube["0=1"] = ERROR;
    cube["1=0"] = ERROR; cube["1=1"] = FLOAT;
}

Type SemanticCube::getResultType(Type type1, Type type2, const std::string &op) {
    std::string key = std::to_string(type1) + op + std::to_string(type2);
    if (cube.count(key)) {
        return cube[key];
    }

    // return ERROR if the operation is not supported
    return ERROR;
}

Type SemanticCube::getTypeFromString(const std::string &type) {
    if (type == "int") return INT;
    if (type == "float") return FLOAT;
    if (type == "function") return FUNCTION;
    return ERROR; // invalid type
}

std::string SemanticCube::getStringFromType(const Type &type) {
    switch (type) {
        case INT: return "int";
        case FLOAT: return "float";
        case FUNCTION: return "function";
        case BOOL: return "bool";
        case STRING: return "string";
        default: return "error";
    }
}

Type SemanticCube::getTypeFromConstant(const std::string &constant) {
    if (constant.find('.') != std::string::npos) {
        return FLOAT;
    }
    return INT;
}
