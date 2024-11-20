// FunctionDirectory.cpp

#include "../../include/semantic/FunctionDirectory.h"

void FunctionDirectory::addFunction(const std::string& funcId) {
    if (functions.find(funcId) != functions.end()) {
        throw std::runtime_error("Function '" + funcId + "' already declared");
    }
    functions[funcId] = {std::unordered_map<std::string, std::string>{}, 0};
}

void FunctionDirectory::addParam(const std::string& funcId, const std::string& paramName, const std::string& paramType) {
    auto& func = functions.at(funcId);
    if (func.params.find(paramName) != func.params.end()) {
        throw std::runtime_error("Parameter '" + paramName + "' already declared in function '" + funcId + "'");
    }
    func.params[paramName] = paramType;
}

const FuncInfo* FunctionDirectory::getFunction(const std::string& funcId) const {
    auto it = functions.find(funcId);
    return it != functions.end() ? &it->second : nullptr;
}

std::string FunctionDirectory::getParamType(const std::string& funcId, const std::string& paramId) const {
    const auto& func = functions.at(funcId);
    auto it = func.params.find(paramId);
    if (it == func.params.end()) {
        throw std::runtime_error("Parameter '" + paramId + "' not found in function '" + funcId + "'");
    }
    return it->second;
}

size_t FunctionDirectory::getParamCount(const std::string& funcId) const {
    return functions.at(funcId).params.size();
}

void FunctionDirectory::clear() {
    functions.clear();
}