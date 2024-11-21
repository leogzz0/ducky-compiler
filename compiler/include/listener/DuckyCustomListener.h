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
    // Semantic tools
    VariableTable variableTable;
    FunctionDirectory functionDirectory;
    SemanticCube semanticCube;
    VirtualMemory memoryManager;

    // Quadruples
    std::vector<Quadruple> quadruples;

    // Operation stacks
    std::stack<int> operandStack;
    std::stack<std::string> typeStack;
    std::stack<int> jumpStack;

    // State
    bool printTraversal;
    std::string currentScope;
    int tempVarCounter;
    int labelCounter;

public:
    // Constructor
    DuckyCustomListener(bool printTraversal = false);

    // Listener methods
    void enterProgram(duckyParser::ProgramContext* ctx) override;
    void exitProgram(duckyParser::ProgramContext* ctx) override;

    void exitVar_decl(duckyParser::Var_declContext* ctx) override;
    void exitAssignment(duckyParser::AssignmentContext* ctx) override;
    void exitPrint(duckyParser::PrintContext* ctx) override;
    void enterCondition(duckyParser::ConditionContext* ctx) override;
    void exitCondition(duckyParser::ConditionContext* ctx) override;

    // Accessors
    const std::vector<Quadruple>& getQuadruples() const { return quadruples; }
    const VirtualMemory& getMemoryManager() const { return memoryManager; }
    const FunctionDirectory& getFunctionDirectory() const { return functionDirectory; }

private:
    // Helper methods
    void addQuadruple(const std::string& op, int arg1, int arg2, int result);
    int createTempVar();
};

#endif // DUCKY_CUSTOM_LISTENER_H