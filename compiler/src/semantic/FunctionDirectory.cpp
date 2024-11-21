// FunctionDirectory.cpp

#include "../../include/semantic/FunctionDirectory.h"
#include <iostream>

// add a new function to the directory
bool FunctionDirectory::addFunction(const std::string &name, Type returnType) {
    if (directory.find(name) != directory.end()) {
        std::cerr << "Function " << name << " already declared.\n";
        return false;
    }
    directory[name] = {name, returnType};
    currentFunction = &directory[name];
    return true;
}

// get function information by name
FunctionInfo* FunctionDirectory::getFunctionInfo(const std::string &name) {
    return directory.count(name) ? &directory[name] : nullptr;
}

// access the entire function directory
std::unordered_map<std::string, FunctionInfo> *FunctionDirectory::getFunctionDirectory() {
    return &directory;
}

// get the currently active function
FunctionInfo *FunctionDirectory::getCurrentFunction() {
    return currentFunction;
}

// set the currently active function
void FunctionDirectory::setCurrentFunction(FunctionInfo *function) {
    currentFunction = function;
}

// main function management
void FunctionDirectory::setMainFunction(FunctionInfo *function) {
    mainFunction = function;
}
FunctionInfo *FunctionDirectory::getMainFunction() {
    return mainFunction;
}

// set the start address of the current function
void FunctionDirectory::setStartAddressToCurFunc(int startAddress) {
    if (!currentFunction) {
        std::cerr << "No current function to set start address.\n";
        return;
    }
    currentFunction->startAddress = startAddress;
}

// add a parameter to the current function
bool FunctionDirectory::addParameterToCurFunc(const std::string &name, Type type, int memoryAddress) {
    if (!currentFunction) {
        std::cerr << "No current function to add parameter to.\n";
        return false;
    }

    for (const auto &param : currentFunction->parametersTable) {
        if (param.name == name) {
            std::cerr << "Parameter " << name << " already declared in function.\n";
            return false;
        }
    }

    currentFunction->parametersTable.push_back({name, type, memoryAddress});
    currentFunction->numParams++;
    return true;
}

// add a variable to the current function
bool FunctionDirectory::addVariableToCurFunc(const std::string &name, Type type, int memoryAddress) {
    if (!currentFunction) {
        std::cerr << "No current function to add variable to.\n";
        return false;
    }

    // check if variable already exists in parameters
    for (const auto &param : currentFunction->parametersTable) {
        if (param.name == name) {
            std::cerr << "Variable " << name << " already declared as a parameter.\n";
            return false;
        }
    }

    // check if variable already exists in current function's variable table
    if (currentFunction->variableTable.getVariableInfo(name)) {
        std::cerr << "Variable " << name << " already declared in function scope.\n";
        return false;
    }

    currentFunction->variableTable.addVariable(name, type, memoryAddress);
    currentFunction->numVars++;
    return true;
}

// get variable info from the current function's scope
VariableInfo* FunctionDirectory::getVarInfoFuncScope(const std::string &name) {
    if (currentFunction) {
        return currentFunction->variableTable.getVariableInfo(name);
    }
    return nullptr;
}

// get variable info from either function or global scope
VariableInfo* FunctionDirectory::getVarInFuncOrGlobalScope(const std::string &name) {
    if (currentFunction) {
        // check current function's local variables
        if (auto var = currentFunction->variableTable.getVariableInfo(name)) {
            return var;
        }

        // check current function's parameters
        for (auto &param : currentFunction->parametersTable) {
            if (param.name == name) {
                return &param;
            }
        }
    }

    // check global scope
    if (mainFunction) {
        return mainFunction->variableTable.getVariableInfo(name);
    }

    return nullptr;
}

// check if the current scope is global
bool FunctionDirectory::isGlobalScope() {
    return currentFunction == mainFunction;
}