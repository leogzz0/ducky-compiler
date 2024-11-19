#pragma once
#include "antlr4-runtime.h"
#include "duckyBaseListener.h"
#include "duckyParser.h"
#include "../semantic/VariableTable.h"
#include "../semantic/FunctionDirectory.h"
#include "../semantic/SemanticCube.h"
#include "../semantic/Quadruple.h"
#include <stack>

class DuckyCustomListener : public duckyBaseListener {
public:
    DuckyCustomListener();

    // Program structure
    void enterProgram(duckyParser::ProgramContext *ctx) override;
    void exitProgram(duckyParser::ProgramContext *ctx) override;

    // Variable declarations
    void enterVar_decl(duckyParser::Var_declContext *ctx) override;
    void exitVar_decl(duckyParser::Var_declContext *ctx) override;

    // Function declarations
    void enterFunc_decl(duckyParser::Func_declContext *ctx) override;
    void exitFunc_decl(duckyParser::Func_declContext *ctx) override;
    void enterFunc_block(duckyParser::Func_blockContext *ctx) override;
    void exitFunc_block(duckyParser::Func_blockContext *ctx) override;
    void enterParam(duckyParser::ParamContext *ctx) override;
    void exitParam(duckyParser::ParamContext *ctx) override;

    // Block handling
    void enterBlock(duckyParser::BlockContext *ctx) override;
    void exitBlock(duckyParser::BlockContext *ctx) override;

    // Statements
    void enterAssignment(duckyParser::AssignmentContext *ctx) override;
    void exitAssignment(duckyParser::AssignmentContext *ctx) override;
    
    // Expressions
    void enterExpression(duckyParser::ExpressionContext *ctx) override;
    void exitExpression(duckyParser::ExpressionContext *ctx) override;
    void enterExp(duckyParser::ExpContext *ctx) override;
    void exitExp(duckyParser::ExpContext *ctx) override;
    void enterTerm(duckyParser::TermContext *ctx) override;
    void exitTerm(duckyParser::TermContext *ctx) override;
    void enterFactor(duckyParser::FactorContext *ctx) override;
    void exitFactor(duckyParser::FactorContext *ctx) override;

    // Control structures
    void enterCondition(duckyParser::ConditionContext *ctx) override;
    void exitCondition(duckyParser::ConditionContext *ctx) override;
    void enterElse_block(duckyParser::Else_blockContext *ctx) override;
    void exitElse_block(duckyParser::Else_blockContext *ctx) override;
    void enterLoop(duckyParser::LoopContext *ctx) override;
    void exitLoop(duckyParser::LoopContext *ctx) override;

    // Function calls
    void enterFunction_call(duckyParser::Function_callContext *ctx) override;
    void exitFunction_call(duckyParser::Function_callContext *ctx) override;
    void enterArg_list(duckyParser::Arg_listContext *ctx) override;
    void exitArg_list(duckyParser::Arg_listContext *ctx) override;

    // Print statements
    void enterPrint(duckyParser::PrintContext *ctx) override;
    void exitPrint(duckyParser::PrintContext *ctx) override;
    void enterPrint_list(duckyParser::Print_listContext *ctx) override;
    void exitPrint_list(duckyParser::Print_listContext *ctx) override;

    // Utility functions
    const std::vector<Quadruple>& getQuadruples() const;
    void printTables() const;

private:
    // Core components
    VariableTable varTable;
    FunctionDirectory funcDir;
    SemanticCube semanticCube;
    QuadrupleGenerator quadGen;

    // Control flow and scope management
    int currentScope;
    std::string currentFunction;
    bool isGlobalScope;
    int parameterCount;
    int mainQuad;          // To store the location of main
    std::stack<int> jumpStack;        // For managing control flow jumps
    int conditionStartQuad;           // For tracking condition starts
    
    // Helper functions
    VarType getTypeFromContext(duckyParser::Data_typeContext* ctx);
    QuadOperation getOperationFromContext(std::string op);
    void handleConstant(const std::string& value, VarType type);
    void validateFunctionCall(const std::string& funcName);
};