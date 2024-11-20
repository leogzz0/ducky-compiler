// VariableTable.h
#ifndef VARIABLE_TABLE_H
#define VARIABLE_TABLE_H

#include <string>
#include <unordered_map>
#include <stdexcept>

struct VarInfo {
    std::string type;
    int address;
};

class VariableTable {
private:
    std::unordered_map<std::string, std::unordered_map<std::string, VarInfo>> variables;

public:
    VariableTable() {
        variables["global"] = {};
    }

    void setScope(const std::string& scope);
    void addVariable(const std::string& scope, const std::string& name, const std::string& varType, int address);
    std::string getVariableType(const std::string& scope, const std::string& name);
    int getVariableAddress(const std::string& scope, const std::string& name);
    void cleanVariables(const std::string& scope);
    std::string findScope(const std::string& name, const std::string& currentScope);
};

#endif