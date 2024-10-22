
// Generated from duckyLexer.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  duckyLexer : public antlr4::Lexer {
public:
  enum {
    MAIN_FUNC = 1, VARS = 2, MAIN_BLOCK = 3, END_BLOCK = 4, INTEGER_TYPE = 5, 
    FLOAT_TYPE = 6, PRINT = 7, WHILE = 8, DO = 9, IF = 10, ELSE = 11, FUNCTION = 12, 
    ASSIGN = 13, SEMI = 14, COLON = 15, COMMA = 16, LPAREN = 17, RPAREN = 18, 
    LBRACE = 19, RBRACE = 20, PLUS = 21, MINUS = 22, MULT = 23, DIV = 24, 
    GREATER_THAN = 25, LESS_THAN = 26, NOT_EQUAL = 27, EQUAL = 28, ID = 29, 
    INTEGER_CONSTANT = 30, FLOAT_CONSTANT = 31, STRING_LITERAL = 32, WS = 33, 
    COMMENT = 34
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

