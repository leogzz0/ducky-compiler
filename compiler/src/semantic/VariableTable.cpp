// VariableTable.cpp

#include "../../include/semantic/VariableTable.h"

void VariableTable::addVariable(const std::string& scope, const std::string& name, const std::string& varType, int address) {
    if (variables[scope].find(name) != variables[scope].end()) {
        throw std::runtime_error("Variable '" + name + "' already declared in scope '" + scope + "'");
    }
    variables[scope][name] = {varType, address};
}

std::string VariableTable::getVariableType(const std::string& scope, const std::string& name) {
    auto scopeIt = variables.find(scope);
    if (scopeIt == variables.end() || scopeIt->second.find(name) == scopeIt->second.end()) {
        throw std::runtime_error("Variable '" + name + "' not found in scope '" + scope + "'");
    }
    return variables[scope][name].type;
}

int VariableTable::getVariableAddress(const std::string& scope, const std::string& name) {
    auto scopeIt = variables.find(scope);
    if (scopeIt == variables.end() || scopeIt->second.find(name) == scopeIt->second.end()) {
        throw std::runtime_error("Variable '" + name + "' not found in scope '" + scope + "'");
    }
    return variables[scope][name].address;
}

void VariableTable::cleanVariables(const std::string& scope) {
    auto scopeIt = variables.find(scope);
    if (scopeIt != variables.end()) {
        scopeIt->second.clear();
    }
}

void VariableTable::setScope(const std::string& scope) {
    if (variables.find(scope) == variables.end()) {
        variables[scope] = {};
    }
}

std::string VariableTable::findScope(const std::string& name, const std::string& currentScope) {
    if (variables[currentScope].find(name) != variables[currentScope].end()) {
        return currentScope;
    }
    if (variables["global"].find(name) != variables["global"].end()) {
        return "global";
    }
    return "";
}
