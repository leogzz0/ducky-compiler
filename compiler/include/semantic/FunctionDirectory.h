// FunctionDirectory.h

#ifndef FUNCTION_DIRECTORY_H
#define FUNCTION_DIRECTORY_H

#include <string>
#include <unordered_map>
#include <stdexcept>

struct FuncInfo {
    std::unordered_map<std::string, std::string> params;  // param_name -> param_type
    int quadCount;
};

class FunctionDirectory {
private:
    std::unordered_map<std::string, FuncInfo> functions;

public:
    FunctionDirectory() = default;
    
    void addFunction(const std::string& funcId);
    void addParam(const std::string& funcId, const std::string& paramName, const std::string& paramType);
    const FuncInfo* getFunction(const std::string& funcId) const;
    std::string getParamType(const std::string& funcId, const std::string& paramId) const;
    size_t getParamCount(const std::string& funcId) const;
    void clear();
};

#endif