// VirtualMemory.h
#ifndef VIRTUAL_MEMORY_H
#define VIRTUAL_MEMORY_H

#include <unordered_map>
#include <string>
#include <variant>

struct MemorySegment {
    int current;
    std::unordered_map<int, std::variant<int, float, bool, std::string>> memory;
    explicit MemorySegment(int start) : current(start) {}
};

class VirtualMemory {
private:
    // Memory segments
    MemorySegment globalInt{1000};
    MemorySegment globalFloat{2000};
    MemorySegment globalBool{3000};
    
    MemorySegment localInt{4000};
    MemorySegment localFloat{5000};
    MemorySegment localBool{6000};
    
    MemorySegment tempInt{7000};
    MemorySegment tempFloat{8000};
    MemorySegment tempBool{9000};
    
    MemorySegment constantInt{10000};
    MemorySegment constantFloat{11000};
    MemorySegment constantString{12000};
    MemorySegment constantBool{13000};
    
    std::unordered_map<std::variant<int, float, bool, std::string>, int> constantsTable;
    void printVariant(const std::variant<int, float, bool, std::string>& val) const;

private:
    MemorySegment& getSegment(int address);

public:
    int getAddress(const std::string& varType, const std::string& scope);
    int getTempAddress(const std::string& varType);
    int getConstantAddress(const std::string& value, const std::string& type);
    void setValue(int address, const std::variant<int, float, bool, std::string>& value);
    std::variant<int, float, bool, std::string> getValue(int address);
    void printMemory() const;
};

#endif