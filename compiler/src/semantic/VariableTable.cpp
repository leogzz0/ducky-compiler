// VariableTable.cpp

#include "../../include/semantic/VariableTable.h"
#include <stdexcept>

VariableTable::VariableTable() : currentAddress(0) {}

bool VariableTable::addVariable(const std::string& name, VarType type, int scope, bool isParam) {
    std::string key = generateKey(name, scope);
    if (variables.find(key) != variables.end()) {
        throw std::runtime_error("Variable '" + name + "' already declared in this scope");
        return false;
    }

    Variable var;
    var.name = name;
    var.type = type;
    var.scope = scope;
    var.address = assignAddress(type);
    var.isParameter = isParam;
    var.isInitialized = false;

    variables[key] = var;
    return true;
}

// Make sure VariableTable::getVariable looks in both current and global scope:
Variable* VariableTable::getVariable(const std::string& name, int scope) {
    // First try current scope
    std::string localKey = generateKey(name, scope);
    auto localIt = variables.find(localKey);
    if (localIt != variables.end()) {
        return &(localIt->second);
    }

    // If not found and we're in a local scope, try global scope
    if (scope != 0) {
        std::string globalKey = generateKey(name, 0);
        auto globalIt = variables.find(globalKey);
        if (globalIt != variables.end()) {
            return &(globalIt->second);
        }
    }

    return nullptr;
}

bool VariableTable::variableExists(const std::string& name, int scope) {
    return getVariable(name, scope) != nullptr;
}

void VariableTable::setInitialized(const std::string& name, int scope) {
    Variable* var = getVariable(name, scope);
    if (var) {
        var->isInitialized = true;
    }
}

std::vector<Variable> VariableTable::getScopeVariables(int scope) {
    std::vector<Variable> scopeVars;
    for (const auto& pair : variables) {
        if (pair.second.scope == scope) {
            scopeVars.push_back(pair.second);
        }
    }
    return scopeVars;
}

void VariableTable::clearScope(int scope) {
    auto it = variables.begin();
    while (it != variables.end()) {
        if (it->second.scope == scope) {
            it = variables.erase(it);
        } else {
            ++it;
        }
    }
}

void VariableTable::printTable() const {
    std::cout << "\nVariable Table:\n";
    std::cout << "Name\tType\tScope\tAddress\tInitialized\tIsParam\n";
    std::cout << "---------------------------------------------\n";
    for (const auto& pair : variables) {
        const Variable& var = pair.second;
        std::cout << var.name << "\t" 
			<< (var.type == VarType::INT ? "INT" : "FLOAT") << "\t"
            << var.scope << "\t"
            << var.address << "\t"
            << (var.isInitialized ? "yes" : "no") << "\t\t"
            << (var.isParameter ? "yes" : "no") << "\n";
    }
}

std::string VariableTable::generateKey(const std::string& name, int scope) {
    return name + "_" + std::to_string(scope);
}

int VariableTable::assignAddress(VarType type) {
    int address = currentAddress;
    currentAddress += (type == VarType::INT) ? 4 : 8;
    return address;
}