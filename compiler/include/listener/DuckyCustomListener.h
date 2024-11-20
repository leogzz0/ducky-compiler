// DuckyCustomListener.h

#ifndef DUCKY_CUSTOM_LISTENER_H
#define DUCKY_CUSTOM_LISTENER_H

#include "antlr4-runtime.h"
#include "../../antlr/duckyBaseListener.h"
#include "../semantic/VariableTable.h"
#include "../semantic/FunctionDirectory.h"
#include "../semantic/SemanticCube.h"
#include "../semantic/Quadruple.h"
#include "../memory/VirtualMemory.h"
#include <stack>

class DuckyCustomListener : public duckyBaseListener {
private:
    bool printTraversal;
    std::string currentScope;
    
    // Semantic structures
    VariableTable variableTable;
    FunctionDirectory functionDirectory;
    SemanticCube semanticCube;
    Quadruple quadrupleManager;
    VirtualMemory memoryManager;
    
    // Operation stacks
    std::stack<int> operandStack;
    std::stack<std::string> typeStack;
    std::stack<int> jumpStack;
    
    int tempVarCounter;
    int labelCounter;

public:
    DuckyCustomListener(bool printTraversal = false);
    
    // Program
    void enterProgram(duckyParser::ProgramContext* ctx) override;
    void exitProgram(duckyParser::ProgramContext* ctx) override;
    
    // Variables
    void exitVar_decl(duckyParser::Var_declContext* ctx) override;
    
    // Functions
    void enterFunc_decl(duckyParser::Func_declContext* ctx) override;
    void exitFunc_decl(duckyParser::Func_declContext* ctx) override;
    
    // Statements
    void exitAssignment(duckyParser::AssignmentContext* ctx) override;
    void exitPrint(duckyParser::PrintContext* ctx) override;
    
    // Control Flow
    void enterCondition(duckyParser::ConditionContext* ctx) override;
    void exitCondition(duckyParser::ConditionContext* ctx) override;
    void enterLoop(duckyParser::LoopContext* ctx) override;
    void exitLoop(duckyParser::LoopContext* ctx) override;
    
    // Expression Handling
    void exitExpression(duckyParser::ExpressionContext* ctx) override;
    void exitExp(duckyParser::ExpContext* ctx) override;
    void exitTerm(duckyParser::TermContext* ctx) override;
    void exitFactor(duckyParser::FactorContext* ctx) override;

    // Getters
    const auto& getQuadruples() const { return quadrupleManager.getQuadruples(); }
    VirtualMemory& getMemoryManager() { return memoryManager; }

private:
    // Helper methods
    std::string getExpressionType(duckyParser::ExpressionContext* ctx);
    void createTempQuadruple(const std::string& leftType, 
                            const std::string& rightType, 
                            const std::string& op, 
                            const std::string& resultType);
};

#endif