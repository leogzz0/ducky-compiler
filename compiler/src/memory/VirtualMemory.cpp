// VirtualMemory.cpp

#include "../../include/memory/VirtualMemory.h"
#include <iostream>

// Allocate memory for global integers
int VirtualMemory::allocateGlobalInt() {
    if (globalIntPointer == globalFloatBase) {
        std::cerr << "Out of memory for global integers." << std::endl;
        return -1;
    }
    return globalIntPointer++;
}

// Allocate memory for global floats
int VirtualMemory::allocateGlobalFloat() {
    if (globalFloatPointer == localIntBase) {
        std::cerr << "Out of memory for global floats." << std::endl;
        return -1;
    }
    return globalFloatPointer++;
}

// Allocate memory for local integers
int VirtualMemory::allocateLocalInt() {
    if (localIntPointer == localFloatBase) {
        std::cerr << "Out of memory for local integers." << std::endl;
        return -2;
    }
    return localIntPointer++;
}

// Allocate memory for local floats
int VirtualMemory::allocateLocalFloat() {
    if (localFloatPointer == tempIntBase) {
        std::cerr << "Out of memory for local floats." << std::endl;
        return -2;
    }
    return localFloatPointer++;
}

// Allocate memory for temporary integers
int VirtualMemory::allocateTempInt() {
    if (tempIntPointer == tempFloatBase) {
        std::cerr << "Out of memory for temporary integers." << std::endl;
        return -1;
    }
    return tempIntPointer++;
}

// Allocate memory for temporary floats
int VirtualMemory::allocateTempFloat() {
    if (tempFloatPointer == constIntBase) {
        std::cerr << "Out of memory for temporary floats." << std::endl;
        return -1;
    }
    return tempFloatPointer++;
}

// Find constant integer, float or string address
int VirtualMemory::findConstant(Type type, std::string value) {
    if (type == INT) {
        int intValue = std::stoi(value);
        if (intConstants.find(intValue) != intConstants.end()) {
            return intConstants[intValue];
        }
    } else if (type == FLOAT) {
        float floatValue = std::stof(value);
        if (floatConstants.find(floatValue) != floatConstants.end()) {
            return floatConstants[floatValue];
        }
    } else if (type == STRING) {
        if (stringConstants.find(value) != stringConstants.end()) {
            return stringConstants[value];
        }
    }
    return -1;
}

// Get or create a constant integer, float or string address
int VirtualMemory::getOrCreateConstant(Type type, std::string value) {
    if (type == INT) {
        int intValue = std::stoi(value);
        if (intConstants.find(intValue) == intConstants.end()) {
            if (constIntPointer == constFloatBase) {
                return -3;
            }
            intConstants[intValue] = constIntPointer++;
        }
        return intConstants[intValue];
    } else if (type == FLOAT) {
        float floatValue = std::stof(value);
        if (floatConstants.find(floatValue) == floatConstants.end()) {
            if (constFloatPointer == constStringBase) {
                return -4;
            }
            floatConstants[floatValue] = constFloatPointer++;
        }
        return floatConstants[floatValue];
    } else if (type == STRING) {
        if (stringConstants.find(value) == stringConstants.end()) {
            if (constStringPointer == 10000) {
                return -5;
            }
            stringConstants[value] = constStringPointer++;
        }
        return stringConstants[value];
    }
    return -1;
}

// Reset locals for a new function scope
void VirtualMemory::resetLocals() {
    localIntPointer = localIntBase;
    localFloatPointer = localFloatBase;
}

// Reset temporaries for a new function or expression
void VirtualMemory::resetTemporaries() {
    tempIntPointer = tempIntBase;
    tempFloatPointer = tempFloatBase;
}

// Get the constants map
std::unordered_map<int, int> VirtualMemory::getIntConstants() {
    return intConstants;
}

std::unordered_map<float, int> VirtualMemory::getFloatConstants() {
    return floatConstants;
}

std::unordered_map<std::string, int> VirtualMemory::getStringConstants() {
    return stringConstants;
}