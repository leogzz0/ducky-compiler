// SemanticCube.h

#ifndef SEMANTIC_CUBE_H
#define SEMANTIC_CUBE_H

#include <string>
#include <unordered_map>
#include <stdexcept>

struct OperationKey {
    std::string leftType;
    std::string rightType;
    std::string op;
    
    bool operator==(const OperationKey& other) const {
        return leftType == other.leftType && rightType == other.rightType && op == other.op;
    }
};

namespace std {
    template<>
    struct hash<OperationKey> {
        size_t operator()(const OperationKey& k) const {
            return hash<string>{}(k.leftType + k.rightType + k.op);
        }
    };
}

class SemanticCube {
private:
    std::unordered_map<OperationKey, std::string> cube;

public:
    SemanticCube();
    std::string getType(const std::string& leftType, const std::string& rightType, const std::string& op);
};

#endif