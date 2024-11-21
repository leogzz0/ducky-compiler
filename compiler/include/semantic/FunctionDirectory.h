#ifndef FUNCTION_DIRECTORY_H
#define FUNCTION_DIRECTORY_H

#include <string>
#include <unordered_map>
#include <vector>
#include "VariableTable.h"
#include "Types.h"

struct FunctionInfo {
    std::string name;                          // function name
    Type returnType;                           // return type
    std::vector<VariableInfo> parametersTable; // parameter metadata
    VariableTable variableTable;               // local variable table
    int startAddress = -1;                     // start address of the function
    int numVars = 0;                           // number of local variables
    int numParams = 0;                         // number of parameters
};

class FunctionDirectory {
public:
    // Register a new function in the directory
    bool registerFunction(const std::string &name, Type returnType);

    // Fetch function information by name
    FunctionInfo *fetchFunctionInfo(const std::string &name);

    // Access the entire function directory
    std::unordered_map<std::string, FunctionInfo> *accessAllFunctions();

    // Get or set the current function context
    FunctionInfo *getActiveFunction();
    void setActiveFunction(FunctionInfo *function);

    // Main function management
    void assignMainFunction(FunctionInfo *function);
    FunctionInfo *retrieveMainFunction();

    // Modify the current function
    void assignStartAddressToActiveFunction(int startAddress);
    bool addParameterToActiveFunction(const std::string &name, Type type, int memoryAddress);
    bool addLocalVariableToActiveFunction(const std::string &name, Type type, int memoryAddress);

    // Variable scope management
    VariableInfo *lookupVariableInFunctionScope(const std::string &name);
    VariableInfo *lookupVariableInAnyScope(const std::string &name);

    // Check if the current scope is global
    bool checkIfGlobalScope();

private:
    FunctionInfo *mainFunction = nullptr;        // Pointer to the main function
    FunctionInfo *currentFunction = nullptr;     // Pointer to the currently active function
    std::unordered_map<std::string, FunctionInfo> directory; // Map of all functions
};

#endif // FUNCTION_DIRECTORY_H