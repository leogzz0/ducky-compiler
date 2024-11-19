
// Generated from ducky.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "duckyParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by duckyParser.
 */
class  duckyListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(duckyParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(duckyParser::ProgramContext *ctx) = 0;

  virtual void enterVar_declarations(duckyParser::Var_declarationsContext *ctx) = 0;
  virtual void exitVar_declarations(duckyParser::Var_declarationsContext *ctx) = 0;

  virtual void enterVar_decl(duckyParser::Var_declContext *ctx) = 0;
  virtual void exitVar_decl(duckyParser::Var_declContext *ctx) = 0;

  virtual void enterVar_list(duckyParser::Var_listContext *ctx) = 0;
  virtual void exitVar_list(duckyParser::Var_listContext *ctx) = 0;

  virtual void enterData_type(duckyParser::Data_typeContext *ctx) = 0;
  virtual void exitData_type(duckyParser::Data_typeContext *ctx) = 0;

  virtual void enterFunc_declarations(duckyParser::Func_declarationsContext *ctx) = 0;
  virtual void exitFunc_declarations(duckyParser::Func_declarationsContext *ctx) = 0;

  virtual void enterFunc_decl(duckyParser::Func_declContext *ctx) = 0;
  virtual void exitFunc_decl(duckyParser::Func_declContext *ctx) = 0;

  virtual void enterFunc_block(duckyParser::Func_blockContext *ctx) = 0;
  virtual void exitFunc_block(duckyParser::Func_blockContext *ctx) = 0;

  virtual void enterParam_list(duckyParser::Param_listContext *ctx) = 0;
  virtual void exitParam_list(duckyParser::Param_listContext *ctx) = 0;

  virtual void enterParam(duckyParser::ParamContext *ctx) = 0;
  virtual void exitParam(duckyParser::ParamContext *ctx) = 0;

  virtual void enterBlock(duckyParser::BlockContext *ctx) = 0;
  virtual void exitBlock(duckyParser::BlockContext *ctx) = 0;

  virtual void enterStatements(duckyParser::StatementsContext *ctx) = 0;
  virtual void exitStatements(duckyParser::StatementsContext *ctx) = 0;

  virtual void enterStatement(duckyParser::StatementContext *ctx) = 0;
  virtual void exitStatement(duckyParser::StatementContext *ctx) = 0;

  virtual void enterAssignment(duckyParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(duckyParser::AssignmentContext *ctx) = 0;

  virtual void enterPrint(duckyParser::PrintContext *ctx) = 0;
  virtual void exitPrint(duckyParser::PrintContext *ctx) = 0;

  virtual void enterPrint_list(duckyParser::Print_listContext *ctx) = 0;
  virtual void exitPrint_list(duckyParser::Print_listContext *ctx) = 0;

  virtual void enterPrint_item(duckyParser::Print_itemContext *ctx) = 0;
  virtual void exitPrint_item(duckyParser::Print_itemContext *ctx) = 0;

  virtual void enterLoop(duckyParser::LoopContext *ctx) = 0;
  virtual void exitLoop(duckyParser::LoopContext *ctx) = 0;

  virtual void enterCondition(duckyParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(duckyParser::ConditionContext *ctx) = 0;

  virtual void enterElse_block(duckyParser::Else_blockContext *ctx) = 0;
  virtual void exitElse_block(duckyParser::Else_blockContext *ctx) = 0;

  virtual void enterFunction_call(duckyParser::Function_callContext *ctx) = 0;
  virtual void exitFunction_call(duckyParser::Function_callContext *ctx) = 0;

  virtual void enterArg_list(duckyParser::Arg_listContext *ctx) = 0;
  virtual void exitArg_list(duckyParser::Arg_listContext *ctx) = 0;

  virtual void enterExpression(duckyParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(duckyParser::ExpressionContext *ctx) = 0;

  virtual void enterComparison_operator(duckyParser::Comparison_operatorContext *ctx) = 0;
  virtual void exitComparison_operator(duckyParser::Comparison_operatorContext *ctx) = 0;

  virtual void enterExp(duckyParser::ExpContext *ctx) = 0;
  virtual void exitExp(duckyParser::ExpContext *ctx) = 0;

  virtual void enterTerm(duckyParser::TermContext *ctx) = 0;
  virtual void exitTerm(duckyParser::TermContext *ctx) = 0;

  virtual void enterFactor(duckyParser::FactorContext *ctx) = 0;
  virtual void exitFactor(duckyParser::FactorContext *ctx) = 0;

  virtual void enterConstant(duckyParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(duckyParser::ConstantContext *ctx) = 0;


};

