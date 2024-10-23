
// Generated from parser/duckyParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "duckyParserParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by duckyParserParser.
 */
class  duckyParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by duckyParserParser.
   */
    virtual std::any visitProgram(duckyParserParser::ProgramContext *context) = 0;

    virtual std::any visitVar_declarations(duckyParserParser::Var_declarationsContext *context) = 0;

    virtual std::any visitVar_decl_list(duckyParserParser::Var_decl_listContext *context) = 0;

    virtual std::any visitVar_decl(duckyParserParser::Var_declContext *context) = 0;

    virtual std::any visitVar_list(duckyParserParser::Var_listContext *context) = 0;

    virtual std::any visitData_type(duckyParserParser::Data_typeContext *context) = 0;

    virtual std::any visitFunc_declarations(duckyParserParser::Func_declarationsContext *context) = 0;

    virtual std::any visitFunc_decl(duckyParserParser::Func_declContext *context) = 0;

    virtual std::any visitParam_list(duckyParserParser::Param_listContext *context) = 0;

    virtual std::any visitParam(duckyParserParser::ParamContext *context) = 0;

    virtual std::any visitBlock(duckyParserParser::BlockContext *context) = 0;

    virtual std::any visitStatements(duckyParserParser::StatementsContext *context) = 0;

    virtual std::any visitStatement(duckyParserParser::StatementContext *context) = 0;

    virtual std::any visitAssignment(duckyParserParser::AssignmentContext *context) = 0;

    virtual std::any visitPrint(duckyParserParser::PrintContext *context) = 0;

    virtual std::any visitPrint_list(duckyParserParser::Print_listContext *context) = 0;

    virtual std::any visitPrint_item(duckyParserParser::Print_itemContext *context) = 0;

    virtual std::any visitLoop(duckyParserParser::LoopContext *context) = 0;

    virtual std::any visitCondition(duckyParserParser::ConditionContext *context) = 0;

    virtual std::any visitElse_block(duckyParserParser::Else_blockContext *context) = 0;

    virtual std::any visitFunction_call(duckyParserParser::Function_callContext *context) = 0;

    virtual std::any visitArg_list(duckyParserParser::Arg_listContext *context) = 0;

    virtual std::any visitExpression(duckyParserParser::ExpressionContext *context) = 0;

    virtual std::any visitComparison_operator(duckyParserParser::Comparison_operatorContext *context) = 0;

    virtual std::any visitTerm(duckyParserParser::TermContext *context) = 0;

    virtual std::any visitFactor(duckyParserParser::FactorContext *context) = 0;

    virtual std::any visitConstant(duckyParserParser::ConstantContext *context) = 0;


};

