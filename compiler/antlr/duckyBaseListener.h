
// Generated from ducky.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "duckyListener.h"


/**
 * This class provides an empty implementation of duckyListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  duckyBaseListener : public duckyListener {
public:

  virtual void enterProgram(duckyParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(duckyParser::ProgramContext * /*ctx*/) override { }

  virtual void enterVar_declarations(duckyParser::Var_declarationsContext * /*ctx*/) override { }
  virtual void exitVar_declarations(duckyParser::Var_declarationsContext * /*ctx*/) override { }

  virtual void enterVar_decl(duckyParser::Var_declContext * /*ctx*/) override { }
  virtual void exitVar_decl(duckyParser::Var_declContext * /*ctx*/) override { }

  virtual void enterVar_list(duckyParser::Var_listContext * /*ctx*/) override { }
  virtual void exitVar_list(duckyParser::Var_listContext * /*ctx*/) override { }

  virtual void enterData_type(duckyParser::Data_typeContext * /*ctx*/) override { }
  virtual void exitData_type(duckyParser::Data_typeContext * /*ctx*/) override { }

  virtual void enterFunc_declarations(duckyParser::Func_declarationsContext * /*ctx*/) override { }
  virtual void exitFunc_declarations(duckyParser::Func_declarationsContext * /*ctx*/) override { }

  virtual void enterFunc_decl(duckyParser::Func_declContext * /*ctx*/) override { }
  virtual void exitFunc_decl(duckyParser::Func_declContext * /*ctx*/) override { }

  virtual void enterParam_list(duckyParser::Param_listContext * /*ctx*/) override { }
  virtual void exitParam_list(duckyParser::Param_listContext * /*ctx*/) override { }

  virtual void enterParam(duckyParser::ParamContext * /*ctx*/) override { }
  virtual void exitParam(duckyParser::ParamContext * /*ctx*/) override { }

  virtual void enterBody(duckyParser::BodyContext * /*ctx*/) override { }
  virtual void exitBody(duckyParser::BodyContext * /*ctx*/) override { }

  virtual void enterStatement(duckyParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(duckyParser::StatementContext * /*ctx*/) override { }

  virtual void enterAssignment(duckyParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(duckyParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterPrint(duckyParser::PrintContext * /*ctx*/) override { }
  virtual void exitPrint(duckyParser::PrintContext * /*ctx*/) override { }

  virtual void enterPrint_list(duckyParser::Print_listContext * /*ctx*/) override { }
  virtual void exitPrint_list(duckyParser::Print_listContext * /*ctx*/) override { }

  virtual void enterPrint_item(duckyParser::Print_itemContext * /*ctx*/) override { }
  virtual void exitPrint_item(duckyParser::Print_itemContext * /*ctx*/) override { }

  virtual void enterLoop(duckyParser::LoopContext * /*ctx*/) override { }
  virtual void exitLoop(duckyParser::LoopContext * /*ctx*/) override { }

  virtual void enterCondition(duckyParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(duckyParser::ConditionContext * /*ctx*/) override { }

  virtual void enterFunction_call(duckyParser::Function_callContext * /*ctx*/) override { }
  virtual void exitFunction_call(duckyParser::Function_callContext * /*ctx*/) override { }

  virtual void enterArg_list(duckyParser::Arg_listContext * /*ctx*/) override { }
  virtual void exitArg_list(duckyParser::Arg_listContext * /*ctx*/) override { }

  virtual void enterExpression(duckyParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(duckyParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterComparison_operator(duckyParser::Comparison_operatorContext * /*ctx*/) override { }
  virtual void exitComparison_operator(duckyParser::Comparison_operatorContext * /*ctx*/) override { }

  virtual void enterExp(duckyParser::ExpContext * /*ctx*/) override { }
  virtual void exitExp(duckyParser::ExpContext * /*ctx*/) override { }

  virtual void enterTerm(duckyParser::TermContext * /*ctx*/) override { }
  virtual void exitTerm(duckyParser::TermContext * /*ctx*/) override { }

  virtual void enterFactor(duckyParser::FactorContext * /*ctx*/) override { }
  virtual void exitFactor(duckyParser::FactorContext * /*ctx*/) override { }

  virtual void enterConstant(duckyParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(duckyParser::ConstantContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

