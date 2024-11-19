// include/FunctionDirectory.h
#pragma once
#include "VariableTable.h"
#include <string>
#include <map>
#include <vector>
#include <memory>

struct Parameter {
    std::string name;
    VarType type;
};

struct Function {
    std::string name;
    VarType returnType;
    std::vector<Parameter> parameters;
    int startQuad;          // Starting quadruple index
    VariableTable localVars;
    int functionId;         // Unique identifier for the function
};

class FunctionDirectory {
public:
    FunctionDirectory();
    
    // Core functions
    bool addFunction(const std::string& name, VarType returnType);
    bool functionExists(const std::string& name) const;
    Function* getFunction(const std::string& name);
    
    // Parameter handling
    void addParameter(const std::string& funcName, const std::string& paramName, VarType type);
    bool validateParameters(const std::string& funcName, const std::vector<VarType>& paramTypes);
    int getParameterCount(const std::string& funcName) const;
    
    // Utility functions
    void setStartQuad(const std::string& funcName, int quad);
    int getFunctionId(const std::string& funcName) const;
    void printDirectory() const;

private:
    std::map<std::string, Function> functions;
    int nextFunctionId;  // For generating unique function IDs
};