#include "antlr4-runtime.h"
#include "lexer/duckyLexer.h"
#include "parser/duckyParserParser.h"
#include "parser/duckyParserBaseVisitor.h" // Cambia a BaseVisitor
#include <fstream>
#include <iostream>

using namespace antlr4;

// Implementación del Visitor usando BaseVisitor
class MyVisitor : public duckyParserBaseVisitor
{
public:
  antlrcpp::Any visitProgram(duckyParserParser::ProgramContext *ctx) override
  {
    std::cout << "Visitando el programa" << std::endl;
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

  // Iniciar el análisis sintáctico desde la regla 'program'
  tree::ParseTree *tree = parser.program();

  // Usar el Visitor para recorrer el árbol
  MyVisitor visitor;
  visitor.visit(tree);

  return 0;
}
