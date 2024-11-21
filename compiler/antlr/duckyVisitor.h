
// Generated from ducky.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "duckyParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by duckyParser.
 */
class  duckyVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by duckyParser.
   */
    virtual std::any visitProgram(duckyParser::ProgramContext *context) = 0;

    virtual std::any visitVar_declarations(duckyParser::Var_declarationsContext *context) = 0;

    virtual std::any visitVar_decl(duckyParser::Var_declContext *context) = 0;

    virtual std::any visitVar_list(duckyParser::Var_listContext *context) = 0;

    virtual std::any visitData_type(duckyParser::Data_typeContext *context) = 0;

    virtual std::any visitFunc_declarations(duckyParser::Func_declarationsContext *context) = 0;

    virtual std::any visitFunc_decl(duckyParser::Func_declContext *context) = 0;

    virtual std::any visitParam_list(duckyParser::Param_listContext *context) = 0;

    virtual std::any visitParam(duckyParser::ParamContext *context) = 0;

    virtual std::any visitBody(duckyParser::BodyContext *context) = 0;

    virtual std::any visitStatement(duckyParser::StatementContext *context) = 0;

    virtual std::any visitAssignment(duckyParser::AssignmentContext *context) = 0;

    virtual std::any visitPrint(duckyParser::PrintContext *context) = 0;

    virtual std::any visitPrint_list(duckyParser::Print_listContext *context) = 0;

    virtual std::any visitPrint_item(duckyParser::Print_itemContext *context) = 0;

    virtual std::any visitLoop(duckyParser::LoopContext *context) = 0;

    virtual std::any visitCondition(duckyParser::ConditionContext *context) = 0;

    virtual std::any visitFunction_call(duckyParser::Function_callContext *context) = 0;

    virtual std::any visitArg_list(duckyParser::Arg_listContext *context) = 0;

    virtual std::any visitExpression(duckyParser::ExpressionContext *context) = 0;

    virtual std::any visitComparison_operator(duckyParser::Comparison_operatorContext *context) = 0;

    virtual std::any visitExp(duckyParser::ExpContext *context) = 0;

    virtual std::any visitTerm(duckyParser::TermContext *context) = 0;

    virtual std::any visitFactor(duckyParser::FactorContext *context) = 0;

    virtual std::any visitConstant(duckyParser::ConstantContext *context) = 0;


};

