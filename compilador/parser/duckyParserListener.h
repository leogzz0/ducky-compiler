
// Generated from parser/duckyParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "duckyParserParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by duckyParserParser.
 */
class  duckyParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(duckyParserParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(duckyParserParser::ProgramContext *ctx) = 0;

  virtual void enterVar_declarations(duckyParserParser::Var_declarationsContext *ctx) = 0;
  virtual void exitVar_declarations(duckyParserParser::Var_declarationsContext *ctx) = 0;

  virtual void enterVar_decl_list(duckyParserParser::Var_decl_listContext *ctx) = 0;
  virtual void exitVar_decl_list(duckyParserParser::Var_decl_listContext *ctx) = 0;

  virtual void enterVar_decl(duckyParserParser::Var_declContext *ctx) = 0;
  virtual void exitVar_decl(duckyParserParser::Var_declContext *ctx) = 0;

  virtual void enterVar_list(duckyParserParser::Var_listContext *ctx) = 0;
  virtual void exitVar_list(duckyParserParser::Var_listContext *ctx) = 0;

  virtual void enterData_type(duckyParserParser::Data_typeContext *ctx) = 0;
  virtual void exitData_type(duckyParserParser::Data_typeContext *ctx) = 0;

  virtual void enterFunc_declarations(duckyParserParser::Func_declarationsContext *ctx) = 0;
  virtual void exitFunc_declarations(duckyParserParser::Func_declarationsContext *ctx) = 0;

  virtual void enterFunc_decl(duckyParserParser::Func_declContext *ctx) = 0;
  virtual void exitFunc_decl(duckyParserParser::Func_declContext *ctx) = 0;

  virtual void enterParam_list(duckyParserParser::Param_listContext *ctx) = 0;
  virtual void exitParam_list(duckyParserParser::Param_listContext *ctx) = 0;

  virtual void enterParam(duckyParserParser::ParamContext *ctx) = 0;
  virtual void exitParam(duckyParserParser::ParamContext *ctx) = 0;

  virtual void enterBlock(duckyParserParser::BlockContext *ctx) = 0;
  virtual void exitBlock(duckyParserParser::BlockContext *ctx) = 0;

  virtual void enterStatements(duckyParserParser::StatementsContext *ctx) = 0;
  virtual void exitStatements(duckyParserParser::StatementsContext *ctx) = 0;

  virtual void enterStatement(duckyParserParser::StatementContext *ctx) = 0;
  virtual void exitStatement(duckyParserParser::StatementContext *ctx) = 0;

  virtual void enterAssignment(duckyParserParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(duckyParserParser::AssignmentContext *ctx) = 0;

  virtual void enterPrint(duckyParserParser::PrintContext *ctx) = 0;
  virtual void exitPrint(duckyParserParser::PrintContext *ctx) = 0;

  virtual void enterPrint_list(duckyParserParser::Print_listContext *ctx) = 0;
  virtual void exitPrint_list(duckyParserParser::Print_listContext *ctx) = 0;

  virtual void enterPrint_item(duckyParserParser::Print_itemContext *ctx) = 0;
  virtual void exitPrint_item(duckyParserParser::Print_itemContext *ctx) = 0;

  virtual void enterLoop(duckyParserParser::LoopContext *ctx) = 0;
  virtual void exitLoop(duckyParserParser::LoopContext *ctx) = 0;

  virtual void enterCondition(duckyParserParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(duckyParserParser::ConditionContext *ctx) = 0;

  virtual void enterElse_block(duckyParserParser::Else_blockContext *ctx) = 0;
  virtual void exitElse_block(duckyParserParser::Else_blockContext *ctx) = 0;

  virtual void enterFunction_call(duckyParserParser::Function_callContext *ctx) = 0;
  virtual void exitFunction_call(duckyParserParser::Function_callContext *ctx) = 0;

  virtual void enterArg_list(duckyParserParser::Arg_listContext *ctx) = 0;
  virtual void exitArg_list(duckyParserParser::Arg_listContext *ctx) = 0;

  virtual void enterExpression(duckyParserParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(duckyParserParser::ExpressionContext *ctx) = 0;

  virtual void enterComparison_operator(duckyParserParser::Comparison_operatorContext *ctx) = 0;
  virtual void exitComparison_operator(duckyParserParser::Comparison_operatorContext *ctx) = 0;

  virtual void enterTerm(duckyParserParser::TermContext *ctx) = 0;
  virtual void exitTerm(duckyParserParser::TermContext *ctx) = 0;

  virtual void enterFactor(duckyParserParser::FactorContext *ctx) = 0;
  virtual void exitFactor(duckyParserParser::FactorContext *ctx) = 0;

  virtual void enterConstant(duckyParserParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(duckyParserParser::ConstantContext *ctx) = 0;


};

