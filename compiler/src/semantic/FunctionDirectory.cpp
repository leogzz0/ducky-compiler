// FunctionDirectory.cpp

#include "../../include/semantic/FunctionDirectory.h"

#include <stdexcept>
#include <iostream>

FunctionDirectory::FunctionDirectory() : nextFunctionId(1) {}

bool FunctionDirectory::addFunction(const std::string& name, VarType returnType) {
    if (functionExists(name)) {
        throw std::runtime_error("Function '" + name + "' already declared");
        return false;
    }

    Function func;
    func.name = name;
    func.returnType = returnType;
    func.startQuad = -1;  // Will be set later
    func.functionId = nextFunctionId++;
    
    functions[name] = func;
    return true;
}

bool FunctionDirectory::functionExists(const std::string& name) const {
    return functions.find(name) != functions.end();
}

Function* FunctionDirectory::getFunction(const std::string& name) {
    auto it = functions.find(name);
    if (it != functions.end()) {
        return &(it->second);
    }
    return nullptr;
}

void FunctionDirectory::addParameter(const std::string& funcName, const std::string& paramName, VarType type) {
    auto func = getFunction(funcName);
    if (!func) {
        throw std::runtime_error("Function '" + funcName + "' not found");
        return;
    }

    // Add parameter to function's parameter list
    Parameter param{paramName, type};
    func->parameters.push_back(param);

    // Add parameter to function's local variable table
    func->localVars.addVariable(paramName, type, func->functionId, true);
}

bool FunctionDirectory::validateParameters(const std::string& funcName, 
                                        const std::vector<VarType>& paramTypes) {
    auto func = getFunction(funcName);
    if (!func) return false;

    if (func->parameters.size() != paramTypes.size()) return false;

    for (size_t i = 0; i < func->parameters.size(); i++) {
        if (func->parameters[i].type != paramTypes[i]) return false;
    }

    return true;
}

int FunctionDirectory::getParameterCount(const std::string& funcName) const {
    auto it = functions.find(funcName);
    if (it != functions.end()) {
        return it->second.parameters.size();
    }
    return -1;  // Function not found
}

void FunctionDirectory::setStartQuad(const std::string& funcName, int quad) {
    auto func = getFunction(funcName);
    if (func) {
        func->startQuad = quad;
    }
}

int FunctionDirectory::getFunctionId(const std::string& funcName) const {
    auto it = functions.find(funcName);
    if (it != functions.end()) {
        return it->second.functionId;
    }
    return -1;  // Function not found
}

void FunctionDirectory::printDirectory() const {
    std::cout << "\nFunction Directory:\n";
    std::cout << "Name\tReturn Type\tParams\tStart Quad\tFunction ID\n";
    std::cout << "------------------------------------------------\n";
    for (const auto& pair : functions) {
        const Function& func = pair.second;
        std::cout << func.name << "\t"
                 << (func.returnType == VarType::VOID ? "VOID" : 
                     (func.returnType == VarType::INT ? "INT" : "FLOAT")) << "\t\t"
                 << func.parameters.size() << "\t"
                 << func.startQuad << "\t\t"
                 << func.functionId << "\n";
        
        // Print parameters if any
        if (!func.parameters.empty()) {
            std::cout << "Parameters:\n";
            for (const auto& param : func.parameters) {
                std::cout << "  " << param.name << " : "
                         << (param.type == VarType::INT ? "INT" : "FLOAT") << "\n";
            }
        }
        std::cout << "\n";
    }
}