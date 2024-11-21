
// Generated from ducky.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "duckyVisitor.h"


/**
 * This class provides an empty implementation of duckyVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  duckyBaseVisitor : public duckyVisitor {
public:

  virtual std::any visitProgram(duckyParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_declarations(duckyParser::Var_declarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_decl(duckyParser::Var_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_list(duckyParser::Var_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitData_type(duckyParser::Data_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_declarations(duckyParser::Func_declarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_decl(duckyParser::Func_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam_list(duckyParser::Param_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam(duckyParser::ParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBody(duckyParser::BodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(duckyParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(duckyParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint(duckyParser::PrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint_list(duckyParser::Print_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint_item(duckyParser::Print_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoop(duckyParser::LoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondition(duckyParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_call(duckyParser::Function_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArg_list(duckyParser::Arg_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(duckyParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparison_operator(duckyParser::Comparison_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExp(duckyParser::ExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerm(duckyParser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactor(duckyParser::FactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstant(duckyParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }


};

