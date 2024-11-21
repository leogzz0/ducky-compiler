// FunctionDirectory.h

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
    // add a new function to the directory
    bool addFunction(const std::string &name, Type returnType);

    // get function information by name
    FunctionInfo *getFunctionInfo(const std::string &name);

    // access the entire function directory
    std::unordered_map<std::string, FunctionInfo> *getFunctionDirectory();

    // get or set the current function context
    FunctionInfo *getCurrentFunction();
    void setCurrentFunction(FunctionInfo *function);

    // main function management
    void setMainFunction(FunctionInfo *function);
    FunctionInfo *getMainFunction();

    // modify the current function
    void setStartAddressToCurFunc(int startAddress);
    bool addParameterToCurFunc(const std::string &name, Type type, int memoryAddress);
    bool addVariableToCurFunc(const std::string &name, Type type, int memoryAddress);

    // variable scope management
    VariableInfo *getVarInfoFuncScope(const std::string &name);
    VariableInfo *getVarInFuncOrGlobalScope(const std::string &name);

    // check if the current scope is global
    bool isGlobalScope();

private:
    FunctionInfo *mainFunction = nullptr;        // pointer to the main function
    FunctionInfo *currentFunction = nullptr;     // pointer to the currently active function
    std::unordered_map<std::string, FunctionInfo> directory; // map of all functions
};

#endif // FUNCTION_DIRECTORY_H