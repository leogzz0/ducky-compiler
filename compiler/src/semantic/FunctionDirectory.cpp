// FunctionDirectory.cpp

#include "../../include/semantic/FunctionDirectory.h"
#include <iostream>

// register a new function in the directory
bool FunctionDirectory::registerFunction(const std::string &name, Type returnType) {
    if (directory.find(name) != directory.end()) {
        std::cerr << "Function " << name << " already declared.\n";
        return false;
    }
    directory[name] = {name, returnType};
    currentFunction = &directory[name];
    return true;
}

// fetch function information by name
FunctionInfo* FunctionDirectory::fetchFunctionInfo(const std::string &name) {
    return directory.count(name) ? &directory[name] : nullptr;
}

// access the entire function directory
std::unordered_map<std::string, FunctionInfo> *FunctionDirectory::accessAllFunctions() {
    return &directory;
}

// get the currently active function
FunctionInfo *FunctionDirectory::getActiveFunction() {
    return currentFunction;
}

// set the currently active function
void FunctionDirectory::setActiveFunction(FunctionInfo *function) {
    currentFunction = function;
}

// assign the main function
void FunctionDirectory::assignMainFunction(FunctionInfo *function) {
    mainFunction = function;
}

FunctionInfo *FunctionDirectory::retrieveMainFunction() {
    return mainFunction;
}

// assign the start address of the current function
void FunctionDirectory::assignStartAddressToActiveFunction(int startAddress) {
    if (!currentFunction) {
        std::cerr << "No current function to set start address.\n";
        return;
    }
    currentFunction->startAddress = startAddress;
}

// add a parameter to the current function
bool FunctionDirectory::addParameterToActiveFunction(const std::string &name, Type type, int memoryAddress) {
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
bool FunctionDirectory::addLocalVariableToActiveFunction(const std::string &name, Type type, int memoryAddress) {
    if (!currentFunction) {
        std::cerr << "No current function to add variable to.\n";
        return false;
    }

    for (const auto &param : currentFunction->parametersTable) {
        if (param.name == name) {
            std::cerr << "Variable " << name << " already declared as a parameter.\n";
            return false;
        }
    }

    if (currentFunction->variableTable.getVariableInfo(name)) {
        std::cerr << "Variable " << name << " already declared in function scope.\n";
        return false;
    }

    currentFunction->variableTable.addVariable(name, type, memoryAddress);
    currentFunction->numVars++;
    return true;
}

// lookup variable info in the current function's scope
VariableInfo* FunctionDirectory::lookupVariableInFunctionScope(const std::string &name) {
    if (currentFunction) {
        return currentFunction->variableTable.getVariableInfo(name);
    }
    return nullptr;
}

// lookup variable info in either function or global scope
VariableInfo* FunctionDirectory::lookupVariableInAnyScope(const std::string &name) {
    if (currentFunction) {
        if (auto var = currentFunction->variableTable.getVariableInfo(name)) {
            return var;
        }

        for (auto &param : currentFunction->parametersTable) {
            if (param.name == name) {
                return &param;
            }
        }
    }

    if (mainFunction) {
        return mainFunction->variableTable.getVariableInfo(name);
    }

    return nullptr;
}

// check if the current scope is global
bool FunctionDirectory::checkIfGlobalScope() {
    return currentFunction == mainFunction;
}
