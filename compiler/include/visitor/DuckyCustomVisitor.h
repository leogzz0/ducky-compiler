// DuckyCustomVisitor.h
#ifndef DUCKY_CUSTOM_VISITOR_H
#define DUCKY_CUSTOM_VISITOR_H

#include <iostream>
#include <fstream>
#include <stack>
#include "antlr4-runtime.h"
#include "../antlr/duckyBaseVisitor.h"
#include "../antlr/duckyParser.h"
#include "../antlr/duckyLexer.h"
#include "../semantic/FunctionDirectory.h"
#include "../semantic/SemanticCube.h"
#include "../semantic/VariableTable.h"
#include "../memory/VirtualMemory.h"

struct QuadrupleValue {
    std::string name;
    int address;
};

struct Quadruple {
    QuadrupleValue op;
    QuadrupleValue arg1;
    QuadrupleValue arg2;
    QuadrupleValue result;
};

// Custom visitor to process parse tree nodes (override methods as needed)
class DuckyCustomVisitor : public duckyBaseVisitor {
public:
    SemanticCube semanticCube;
    FunctionDirectory functionDirectory;

    std::stack<std::string> operandStack;
    std::stack<Type> typeStack;
    std::stack<std::string> operatorStack;
    std::stack<int> jumpStack;
    std::vector<Quadruple> quadruples;
    int tempCounter = 0;
    int paramCounter = 0;
    
    VirtualMemory virtualMemory;

    std::string createTempVar();

    void generateQuadruple(const std::string &op, const std::string &arg1, const std::string &arg2, const std::string &result);
    int getAddress(const std::string &var, Type type = ERROR);
    int allocateMemory(Type type, bool isGlobal);
    void handleMemoryAllocationError(int address, antlr4::Token *startToken);
    void handleVarInfoError(std::string var, antlr4::Token *startToken);

    antlrcpp::Any visitProgram(duckyParser::ProgramContext *ctx) override;
    antlrcpp::Any visitVar_declarations(duckyParser::Var_declarationsContext *ctx) override;
    antlrcpp::Any visitVar_decl(duckyParser::Var_declContext *ctx) override;
    // antlrcpp::Any visitVar_list(duckyParser::Var_listContext *ctx) override;
    // antlrcpp::Any visitData_type(duckyParser::Data_typeContext *ctx) override;
    antlrcpp::Any visitFunc_declarations(duckyParser::Func_declarationsContext *ctx) override;
    antlrcpp::Any visitFunc_decl(duckyParser::Func_declContext *ctx) override;
    antlrcpp::Any visitParam_list(duckyParser::Param_listContext *ctx) override;
    antlrcpp::Any visitParam(duckyParser::ParamContext *ctx) override;
    antlrcpp::Any visitBody(duckyParser::BodyContext *ctx) override;
    antlrcpp::Any visitStatement(duckyParser::StatementContext *ctx) override;
    antlrcpp::Any visitAssignment(duckyParser::AssignmentContext *ctx) override;
    antlrcpp::Any visitPrint(duckyParser::PrintContext *ctx) override;
    // antlrcpp::Any visitPrint_list(duckyParser::Print_listContext *ctx) override;
    antlrcpp::Any visitPrint_item(duckyParser::Print_itemContext *ctx) override;
    antlrcpp::Any visitLoop(duckyParser::LoopContext *ctx) override;
    antlrcpp::Any visitCondition(duckyParser::ConditionContext *ctx) override;
    antlrcpp::Any visitFunction_call(duckyParser::Function_callContext *ctx) override;
    // antlrcpp::Any visitArg_list(duckyParser::Arg_listContext *ctx) override;
    antlrcpp::Any visitExpression(duckyParser::ExpressionContext *ctx) override;
    // antlrcpp::Any visitComparison_operator(duckyParser::Comparison_operatorContext *ctx) override;
    antlrcpp::Any visitExp(duckyParser::ExpContext *ctx) override;
    antlrcpp::Any visitTerm(duckyParser::TermContext *ctx) override;
    antlrcpp::Any visitFactor(duckyParser::FactorContext *ctx) override;
    // antlrcpp::Any visitConstant(duckyParser::ConstantContext *ctx) override;
};

#endif // CUSTOM_VISITOR_H