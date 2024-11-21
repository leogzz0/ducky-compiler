#ifndef VIRTUAL_MEMORY_H
#define VIRTUAL_MEMORY_H

#include <unordered_map>
#include <string>
#include "../semantic/Types.h"

class VirtualMemory {
private:
    // Global memory
    int globalIntBase = 5000, globalIntPointer = 5000;
    int globalFloatBase = 6000, globalFloatPointer = 6000;
    int globalBoolBase = 7000, globalBoolPointer = 7000;

    // Local memory  
    int localIntBase = 9000, localIntPointer = 9000;
    int localFloatBase = 10000, localFloatPointer = 10000;
    int localBoolBase = 11000, localBoolPointer = 11000;

    // Temporary memory
    int tempIntBase = 43000, tempIntPointer = 43000;
    int tempFloatBase = 44000, tempFloatPointer = 44000;
    int tempBoolBase = 45000, tempBoolPointer = 45000;

    // Constant memory
    int constIntBase = 20000, constIntPointer = 20000;
    int constFloatBase = 21000, constFloatPointer = 21000;
    int constStringBase = 22000, constStringPointer = 22000;
    int constBoolBase = 23000, constBoolPointer = 23000;

    // Maps for constants
    std::unordered_map<int, int> intConstants;
    std::unordered_map<float, int> floatConstants; 
    std::unordered_map<std::string, int> stringConstants;
    std::unordered_map<bool, int> boolConstants;

public:
    int allocateGlobalInt();
    int allocateGlobalFloat();
    int allocateGlobalBool();

    int allocateLocalInt();
    int allocateLocalFloat();
    int allocateLocalBool();

    int allocateTempInt();
    int allocateTempFloat();
    int allocateTempBool();

    int findConstant(Type type, std::string value);
    int getOrCreateConstant(Type type, std::string value);

    void resetLocals();
    void resetTemporaries();
    void printMemory() const;

    // Accessors for constant maps
    std::unordered_map<int, int> getIntConstants();
    std::unordered_map<float, int> getFloatConstants();
    std::unordered_map<std::string, int> getStringConstants();
};

#endif