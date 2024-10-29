#ifndef VARIABLE_TABLE_H
#define VARIABLE_TABLE_H

#include <string>
#include <unordered_map>
#include <vector>

class VariableTable {
    public:
        void enterScope();
        void exitScope();
        bool exists(const std::string &varName) const;
        void addVariable(const std::string &varName, const std::string &varType);
        std::string getType(const std::string &varName) const;
        void setInitialized(const std::string &varName);
        bool isInitialized(const std::string &varName) const;

    private:
        struct VariableInfo {
            std::string type;
            bool initialized = false;
        };
        std::vector<std::unordered_map<std::string, VariableInfo>> scopes;
};

#endif // VARIABLE_TABLE_H
