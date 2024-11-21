// VariableTable.cpp

#include "../../include/semantic/VariableTable.h"

bool VariableTable::addVariable(const std::string &name, Type type, int memoryAddress) {
    // add the variable
    variables[name] = VariableInfo{name, type, memoryAddress};
    std::cout << "Added variable: " << name << ", Type: " << type << ", Address: " << memoryAddress << "\n";
    return true;
}

VariableInfo* VariableTable::getVariableInfo(const std::string &name) {
    // find the variable and return a pointer to its info
    auto it = variables.find(name);
    if (it != variables.end()) {
        return &it->second;
    }
    return nullptr;
}

std::unordered_map<std::string, VariableInfo>* VariableTable::getVariables() {
    // return a pointer to the entire map
    return &variables;
}

bool VariableTable::setMemoryAddress(const std::string &name, int memoryAddress) {
    // check if the variable exists
    auto it = variables.find(name);
    if (it == variables.end()) {
        std::cerr << "Error: Variable '" << name << "' not found in the table.\n";
        return false;
    }

    // update the memory address
    it->second.memoryAddress = memoryAddress;
    std::cout << "Updated memory address for variable '" << name << "' to " << memoryAddress << "\n";
    return true;
}

void VariableTable::printVariables() const {
    std::cout << "\n=== Variable Table ===\n";
    for (const auto& [name, info] : variables) {
        std::cout << "Variable Name: " << name << ", Type: " << info.type << ", Address: " << info.memoryAddress << "\n";
    }
    std::cout << "=======================\n";
}
