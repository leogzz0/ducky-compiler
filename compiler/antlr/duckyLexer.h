
// Generated from ducky.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  duckyLexer : public antlr4::Lexer {
public:
  enum {
    MAIN_FUNC = 1, VARS = 2, MAIN_BLOCK = 3, END_BLOCK = 4, INTEGER_TYPE = 5, 
    FLOAT_TYPE = 6, PRINT = 7, WHILE = 8, IF = 9, ELSE = 10, FUNCTION = 11, 
    ASSIGN = 12, SEMI = 13, COLON = 14, COMMA = 15, LPAREN = 16, RPAREN = 17, 
    LBRACE = 18, RBRACE = 19, PLUS = 20, MINUS = 21, MULT = 22, DIV = 23, 
    GREATER_THAN = 24, LESS_THAN = 25, NOT_EQUAL = 26, EQUAL = 27, ID = 28, 
    INTEGER_CONSTANT = 29, FLOAT_CONSTANT = 30, STRING_LITERAL = 31, WS = 32, 
    COMMENT = 33
  };

  explicit duckyLexer(antlr4::CharStream *input);

  ~duckyLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

