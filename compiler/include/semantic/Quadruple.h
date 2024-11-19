// include/Quadruple.h
#pragma once
#include <string>
#include <vector>
#include <stack>
#include <memory>
#include "VariableTable.h"
#include "SemanticCube.h"

// Enum for all possible quadruple operations
enum class QuadOperation {
    // Arithmetic
    PLUS,
    MINUS,
    MULT,
    DIV,
    
    // Assignment
    ASSIGN,
    
    // Control Flow
    GOTO,       // Unconditional jump
    GOTOF,      // Jump if false
    GOTOT,      // Jump if true
    
    // Function related
    ERA,        // Expand Runtime Area (function call preparation)
    GOSUB,      // Go to subroutine
    PARAM,      // Parameter
    RETURN,     // Function return
    ENDPROC,    // End of procedure
    
    // I/O
    PRINT,
    
    // Comparison
    GREATER_THAN,
    LESS_THAN,
    EQUAL,
    NOT_EQUAL
};

struct Quadruple {
    QuadOperation operation;
    std::string arg1;
    std::string arg2;
    std::string result;
    
    Quadruple(QuadOperation op, std::string a1 = "-1", std::string a2 = "-1", std::string res = "-1")
        : operation(op), arg1(a1), arg2(a2), result(res) {}
};

class QuadrupleGenerator {
public:
    QuadrupleGenerator(VariableTable& vt, SemanticCube& sc);
    
    // Core quadruple generation functions
    void generateQuadruple(QuadOperation op, const std::string& arg1, const std::string& arg2, const std::string& result);
    
    // Stack operations
    void pushOperand(const std::string& operand, VarType type);
    void pushOperator(QuadOperation op);
    std::string getTopOperand();
    std::string popOperand();
    QuadOperation popOperator();
    VarType getTopType();
    
    // Generate temporary with type
    std::string generateTemp(VarType type);
    
    // Jump operations
    void pushJump(int jumpLocation);
    int popJump();
    bool hasJumps() const;
    
    // Utility functions
    int getCurrentQuad() const { return quads.size(); }
    void backpatch(int quadIndex, const std::string& jump);
    const std::vector<Quadruple>& getQuadruples() const { return quads; }
    void printQuads() const;
    std::string operationToString(QuadOperation op) const;

private:
    std::vector<Quadruple> quads;
    std::stack<std::string> operands;
    std::stack<VarType> types;
    std::stack<QuadOperation> operators;
    std::stack<int> jumps;
    VariableTable& varTable;
    SemanticCube& semanticCube;
    int tempCount;
};