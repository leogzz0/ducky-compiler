
// Generated from duckyParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "duckyParserListener.h"


/**
 * This class provides an empty implementation of duckyParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  duckyParserBaseListener : public duckyParserListener {
public:

  virtual void enterProgram(duckyParserParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(duckyParserParser::ProgramContext * /*ctx*/) override { }

  virtual void enterVar_declarations(duckyParserParser::Var_declarationsContext * /*ctx*/) override { }
  virtual void exitVar_declarations(duckyParserParser::Var_declarationsContext * /*ctx*/) override { }

  virtual void enterVar_decl_list(duckyParserParser::Var_decl_listContext * /*ctx*/) override { }
  virtual void exitVar_decl_list(duckyParserParser::Var_decl_listContext * /*ctx*/) override { }

  virtual void enterVar_decl(duckyParserParser::Var_declContext * /*ctx*/) override { }
  virtual void exitVar_decl(duckyParserParser::Var_declContext * /*ctx*/) override { }

  virtual void enterVar_list(duckyParserParser::Var_listContext * /*ctx*/) override { }
  virtual void exitVar_list(duckyParserParser::Var_listContext * /*ctx*/) override { }

  virtual void enterData_type(duckyParserParser::Data_typeContext * /*ctx*/) override { }
  virtual void exitData_type(duckyParserParser::Data_typeContext * /*ctx*/) override { }

  virtual void enterFunc_declarations(duckyParserParser::Func_declarationsContext * /*ctx*/) override { }
  virtual void exitFunc_declarations(duckyParserParser::Func_declarationsContext * /*ctx*/) override { }

  virtual void enterFunc_decl(duckyParserParser::Func_declContext * /*ctx*/) override { }
  virtual void exitFunc_decl(duckyParserParser::Func_declContext * /*ctx*/) override { }

  virtual void enterParam_list(duckyParserParser::Param_listContext * /*ctx*/) override { }
  virtual void exitParam_list(duckyParserParser::Param_listContext * /*ctx*/) override { }

  virtual void enterParam(duckyParserParser::ParamContext * /*ctx*/) override { }
  virtual void exitParam(duckyParserParser::ParamContext * /*ctx*/) override { }

  virtual void enterBlock(duckyParserParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(duckyParserParser::BlockContext * /*ctx*/) override { }

  virtual void enterStatements(duckyParserParser::StatementsContext * /*ctx*/) override { }
  virtual void exitStatements(duckyParserParser::StatementsContext * /*ctx*/) override { }

  virtual void enterStatement(duckyParserParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(duckyParserParser::StatementContext * /*ctx*/) override { }

  virtual void enterAssignment(duckyParserParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(duckyParserParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterPrint(duckyParserParser::PrintContext * /*ctx*/) override { }
  virtual void exitPrint(duckyParserParser::PrintContext * /*ctx*/) override { }

  virtual void enterPrint_list(duckyParserParser::Print_listContext * /*ctx*/) override { }
  virtual void exitPrint_list(duckyParserParser::Print_listContext * /*ctx*/) override { }

  virtual void enterPrint_item(duckyParserParser::Print_itemContext * /*ctx*/) override { }
  virtual void exitPrint_item(duckyParserParser::Print_itemContext * /*ctx*/) override { }

  virtual void enterLoop(duckyParserParser::LoopContext * /*ctx*/) override { }
  virtual void exitLoop(duckyParserParser::LoopContext * /*ctx*/) override { }

  virtual void enterCondition(duckyParserParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(duckyParserParser::ConditionContext * /*ctx*/) override { }

  virtual void enterElse_block(duckyParserParser::Else_blockContext * /*ctx*/) override { }
  virtual void exitElse_block(duckyParserParser::Else_blockContext * /*ctx*/) override { }

  virtual void enterFunction_call(duckyParserParser::Function_callContext * /*ctx*/) override { }
  virtual void exitFunction_call(duckyParserParser::Function_callContext * /*ctx*/) override { }

  virtual void enterArg_list(duckyParserParser::Arg_listContext * /*ctx*/) override { }
  virtual void exitArg_list(duckyParserParser::Arg_listContext * /*ctx*/) override { }

  virtual void enterExpression(duckyParserParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(duckyParserParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterComparison_operator(duckyParserParser::Comparison_operatorContext * /*ctx*/) override { }
  virtual void exitComparison_operator(duckyParserParser::Comparison_operatorContext * /*ctx*/) override { }

  virtual void enterTerm(duckyParserParser::TermContext * /*ctx*/) override { }
  virtual void exitTerm(duckyParserParser::TermContext * /*ctx*/) override { }

  virtual void enterFactor(duckyParserParser::FactorContext * /*ctx*/) override { }
  virtual void exitFactor(duckyParserParser::FactorContext * /*ctx*/) override { }

  virtual void enterConstant(duckyParserParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(duckyParserParser::ConstantContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

