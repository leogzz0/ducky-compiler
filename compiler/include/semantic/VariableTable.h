// VariableTable.h

#ifndef VARIABLE_TABLE_H
#define VARIABLE_TABLE_H

#include <string>
#include <unordered_map>
#include <iostream>
#include "Types.h"

struct VariableInfo {
    std::string name;   // variable name
    Type type;          // variable type (using the Type enum)
    int memoryAddress;  // memory address of the variable

    VariableInfo(const std::string& name, Type type, int memoryAddress)
        : name(name), type(type), memoryAddress(memoryAddress) {}

    VariableInfo() = default;
};

class VariableTable {
public:
    // add a new variable to the table
    bool addVariable(const std::string &name, Type type, int memoryAddress);

    // get a pointer to VariableInfo for a specific variable name
    VariableInfo* getVariableInfo(const std::string &name);

    // get all variables in the table
    std::unordered_map<std::string, VariableInfo>* getVariables();

    // update the memory address of an existing variable
    bool setMemoryAddress(const std::string &name, int memoryAddress);

    // print all variables for debugging
    void printVariables() const;

private:
    // map of variable names to VariableInfo
    std::unordered_map<std::string, VariableInfo> variables;
};

#endif // VARIABLE_TABLE_H
