// FunctionDirectory.cpp

#include "../../include/semantic/FunctionDirectory.h"

// checks if a function exists in the directory
bool FunctionDirectory::exists(const std::string &funcName) const {
    return functions.find(funcName) != functions.end();
}

// adds a function with its parameter types
void FunctionDirectory::addFunction(const std::string &funcName, const std::vector<std::string> &paramTypes) {
    functions[funcName] = {paramTypes, ""};
}

// retrieves the parameter types for a given function
std::vector<std::string> FunctionDirectory::getParamTypes(const std::string &funcName) const {
    auto it = functions.find(funcName);
    if (it != functions.end()) {
        return it->second.paramTypes;
    }
    return {};
}

// retrieves the return type of a function if applicable
std::string FunctionDirectory::getReturnType(const std::string &funcName) const {
    auto it = functions.find(funcName);
    if (it != functions.end()) {
        return it->second.returnType;
    }
    return "";
}

// sets the return type for a function
void FunctionDirectory::setReturnType(const std::string &funcName, const std::string &returnType) {
    if (functions.find(funcName) != functions.end()) {
        functions[funcName].returnType = returnType;
    }
}

void FunctionDirectory::setCurrentFunction(const std::string &funcName) {
    currentFunction = funcName;
}