
// Generated from duckyParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "duckyParserVisitor.h"


/**
 * This class provides an empty implementation of duckyParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  duckyParserBaseVisitor : public duckyParserVisitor {
public:

  virtual std::any visitProgram(duckyParserParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_declarations(duckyParserParser::Var_declarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_decl_list(duckyParserParser::Var_decl_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_decl(duckyParserParser::Var_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_list(duckyParserParser::Var_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitData_type(duckyParserParser::Data_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_declarations(duckyParserParser::Func_declarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_decl(duckyParserParser::Func_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam_list(duckyParserParser::Param_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam(duckyParserParser::ParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(duckyParserParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatements(duckyParserParser::StatementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(duckyParserParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(duckyParserParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint(duckyParserParser::PrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint_list(duckyParserParser::Print_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint_item(duckyParserParser::Print_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoop(duckyParserParser::LoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondition(duckyParserParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElse_block(duckyParserParser::Else_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_call(duckyParserParser::Function_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArg_list(duckyParserParser::Arg_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(duckyParserParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparison_operator(duckyParserParser::Comparison_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerm(duckyParserParser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactor(duckyParserParser::FactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstant(duckyParserParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }


};

