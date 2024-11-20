// VirtualMemory.cpp

#include "../../include/memory/VirtualMemory.h"
#include <iostream>
#include <sstream>

int VirtualMemory::getAddress(const std::string& varType, const std::string& scope) {
    MemorySegment* segment = nullptr;
    
    if (scope == "global") {
        if (varType == "int") segment = &globalInt;
        else if (varType == "float") segment = &globalFloat;
        else if (varType == "bool") segment = &globalBool;
    } else {
        if (varType == "int") segment = &localInt;
        else if (varType == "float") segment = &localFloat;
        else if (varType == "bool") segment = &localBool;
    }

    if (!segment) {
        throw std::runtime_error("Invalid type or scope in getAddress");
    }

    int address = segment->current++;
    segment->memory[address] = std::variant<int, float, bool, std::string>();
    return address;
}

int VirtualMemory::getTempAddress(const std::string& varType) {
    MemorySegment* segment = nullptr;
    
    if (varType == "int") segment = &tempInt;
    else if (varType == "float") segment = &tempFloat;
    else if (varType == "bool") segment = &tempBool;
    
    if (!segment) {
        throw std::runtime_error("Invalid type in getTempAddress");
    }

    int address = segment->current++;
    if (varType == "int") {
        segment->memory[address] = 0;
    } else if (varType == "float") {
        segment->memory[address] = 0.0f;
    } else if (varType == "bool") {
        segment->memory[address] = false;
    }
    return address;
}

int VirtualMemory::getConstantAddress(const std::string& value, const std::string& type) {
    std::variant<int, float, bool, std::string> constantValue;
    
    // Assign constantValue based on type
    if (type == "int") {
        constantValue = std::stoi(value);
    } else if (type == "float") {
        constantValue = std::stof(value);
    } else if (type == "string") {
        constantValue = value;
    } else if (type == "bool") {
        constantValue = (value == "true");
    } else {
        throw std::runtime_error("Invalid constant type");
    }

    // If the constant already exists, return its address
    if (constantsTable.find(constantValue) != constantsTable.end()) {
        return constantsTable[constantValue];
    }

    // Add the constant to the appropriate memory segment
    MemorySegment* segment = nullptr;
    if (type == "int") {
        segment = &constantInt;
    } else if (type == "float") {
        segment = &constantFloat;
    } else if (type == "string") {
        segment = &constantString;
    } else if (type == "bool") {
        segment = &constantBool;
    }

    if (!segment) {
        throw std::runtime_error("Invalid type in getConstantAddress");
    }

    // Add to memory and constants table
    int address = segment->current++;
    segment->memory[address] = constantValue;
    constantsTable[constantValue] = address;

    return address;
}

void VirtualMemory::setValue(int address, const std::variant<int, float, bool, std::string>& value) {
    auto& segment = getSegment(address);
    segment.memory[address] = value;
}

std::variant<int, float, bool, std::string> VirtualMemory::getValue(int address) {
    auto& segment = getSegment(address);
    auto it = segment.memory.find(address);
    if (it == segment.memory.end()) {
        throw std::runtime_error("Address not found: " + std::to_string(address));
    }
    
    auto value = it->second;
    if (std::holds_alternative<std::string>(value)) {
        std::string strVal = std::get<std::string>(value);
        // Try to convert string to number if possible
        try {
            if (strVal.find('.') != std::string::npos) {
                return std::stof(strVal);
            }
            return std::stoi(strVal);
        } catch (...) {
            return value;
        }
    }
    return value;
}

MemorySegment& VirtualMemory::getSegment(int address) {
    if (address >= 1000 && address < 2000) return globalInt;
    if (address >= 2000 && address < 3000) return globalFloat;
    if (address >= 3000 && address < 4000) return globalBool;
    if (address >= 4000 && address < 5000) return localInt;
    if (address >= 5000 && address < 6000) return localFloat;
    if (address >= 6000 && address < 7000) return localBool;
    if (address >= 7000 && address < 8000) return tempInt;
    if (address >= 8000 && address < 9000) return tempFloat;
    if (address >= 9000 && address < 10000) return tempBool;
    if (address >= 10000 && address < 11000) return constantInt;
    if (address >= 11000 && address < 12000) return constantFloat;
    if (address >= 12000 && address < 13000) return constantString;
    if (address >= 13000 && address < 14000) return constantBool;
    
    throw std::runtime_error("Invalid memory address: " + std::to_string(address));
}

void VirtualMemory::printMemory() const {
    std::cout << "\n===== Global Memory =====\n";
    for (const auto& [addr, val] : globalInt.memory) {
        std::cout << "Address " << addr << ": ";
        printVariant(val);
        std::cout << "\n";
    }
    
    std::cout << "\n===== Local Memory =====\n";
    for (const auto& [addr, val] : localInt.memory) {
        std::cout << "Address " << addr << ": ";
        printVariant(val);
        std::cout << "\n";
    }
    
    std::cout << "\n===== Temporary Memory =====\n";
    for (const auto& [addr, val] : tempInt.memory) {
        std::cout << "Address " << addr << ": ";
        printVariant(val);
        std::cout << "\n";
    }
    
    std::cout << "\n===== Constants Memory =====\n";
    for (const auto& [addr, val] : constantInt.memory) {
        std::cout << "Address " << addr << ": ";
        printVariant(val);
        std::cout << "\n";
    }
}

void VirtualMemory::printVariant(const std::variant<int, float, bool, std::string>& val) const {
    if (std::holds_alternative<int>(val)) {
        std::cout << std::get<int>(val);
    } else if (std::holds_alternative<float>(val)) {
        std::cout << std::get<float>(val);
    } else if (std::holds_alternative<bool>(val)) {
        std::cout << (std::get<bool>(val) ? "true" : "false");
    } else if (std::holds_alternative<std::string>(val)) {
        std::cout << std::get<std::string>(val);
    }
}