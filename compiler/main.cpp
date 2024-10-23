#include "antlr4-runtime.h"
#include "lexer/duckyLexer.h"
#include "parser/duckyParserParser.h"
#include "parser/duckyParserBaseVisitor.h"
#include <fstream>
#include <iostream>

using namespace antlr4;

class MyVisitor : public duckyParserBaseVisitor
{
public:
  antlrcpp::Any visitProgram(duckyParserParser::ProgramContext *ctx) override
  {
    std::cout << "Visitando el programa principal: " << ctx->ID()->getText() << std::endl;
    return visitChildren(ctx);
  }

  antlrcpp::Any visitVar_decl(duckyParserParser::Var_declContext *ctx) override
  {
    std::cout << "Declaración de variables: ";
    for (auto id : ctx->var_list()->ID())
    {
      std::cout << id->getText() << " ";
    }
    std::cout << ": " << ctx->data_type()->getText() << std::endl;
    return visitChildren(ctx);
  }

  antlrcpp::Any visitAssignment(duckyParserParser::AssignmentContext *ctx) override
  {
    std::cout << "Asignación: " << ctx->ID()->getText() << " = " << ctx->expression()->getText() << std::endl;
    return visitChildren(ctx);
  }

  antlrcpp::Any visitPrint(duckyParserParser::PrintContext *ctx) override
  {
    std::cout << "Imprimir: ";
    for (auto item : ctx->print_list()->print_item())
    {
      if (item->STRING_LITERAL())
      {
        std::cout << item->STRING_LITERAL()->getText();
      }
      else
      {
        std::cout << item->expression()->getText();
      }
    }
    std::cout << std::endl;
    return visitChildren(ctx);
  }

  antlrcpp::Any visitLoop(duckyParserParser::LoopContext *ctx) override
  {
    std::cout << "Bucle mientras: " << ctx->expression()->getText() << std::endl;
    return visitChildren(ctx);
  }

  antlrcpp::Any visitCondition(duckyParserParser::ConditionContext *ctx) override
  {
    std::cout << "Condición si: " << ctx->expression()->getText() << std::endl;
    if (ctx->else_block())
    {
      std::cout << "Tiene bloque else." << std::endl;
    }
    return visitChildren(ctx);
  }
};

int main(int argc, const char *argv[])
{
  if (argc < 2)
  {
    std::cerr << "Por favor, proporciona el archivo de entrada como argumento." << std::endl;
    return 1;
  }

  std::ifstream stream;
  stream.open(argv[1]);
  if (!stream.is_open())
  {
    std::cerr << "No se pudo abrir el archivo: " << argv[1] << std::endl;
    return 1;
  }

  ANTLRInputStream input(stream);
  duckyLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  duckyParserParser parser(&tokens);
  tree::ParseTree *tree = parser.program();
  MyVisitor visitor;
  visitor.visit(tree);

  return 0;
}
