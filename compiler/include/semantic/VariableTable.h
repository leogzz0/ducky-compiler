// include/VariableTable.h
#pragma once
#include <string>
#include <map>
#include <vector>
#include <iostream>

enum class VarType {
    INT,
    FLOAT,
    VOID
};

struct Variable {
    std::string name;
    VarType type;
    int scope;          // 0 for global, function ID for local
    int address;        // Memory address for the variable
    bool isParameter;   // Flag to identify if it's a function parameter
    bool isInitialized; // Track if the variable has been initialized
};

class VariableTable {
public:
    VariableTable();
    
    // Core functions
    bool addVariable(const std::string& name, VarType type, int scope, bool isParam = false);
    Variable* getVariable(const std::string& name, int scope);
    bool variableExists(const std::string& name, int scope);
    
    // Utility functions
    void setInitialized(const std::string& name, int scope);
    std::vector<Variable> getScopeVariables(int scope);
    void clearScope(int scope);
    void printTable() const;

private:
    std::map<std::string, Variable> variables;
    int currentAddress;

    // Helper functions
    std::string generateKey(const std::string& name, int scope);
    int assignAddress(VarType type);
};