
// Generated from parser/duckyParser.g4 by ANTLR 4.13.2


#include "duckyParserListener.h"
#include "duckyParserVisitor.h"

#include "duckyParserParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct DuckyParserParserStaticData final {
  DuckyParserParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  DuckyParserParserStaticData(const DuckyParserParserStaticData&) = delete;
  DuckyParserParserStaticData(DuckyParserParserStaticData&&) = delete;
  DuckyParserParserStaticData& operator=(const DuckyParserParserStaticData&) = delete;
  DuckyParserParserStaticData& operator=(DuckyParserParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag duckyparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<DuckyParserParserStaticData> duckyparserParserStaticData = nullptr;

void duckyparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (duckyparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(duckyparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<DuckyParserParserStaticData>(
    std::vector<std::string>{
      "program", "var_declarations", "var_decl_list", "var_decl", "var_list", 
      "data_type", "func_declarations", "func_decl", "param_list", "param", 
      "block", "statements", "statement", "assignment", "print", "print_list", 
      "print_item", "loop", "condition", "else_block", "function_call", 
      "arg_list", "expression", "comparison_operator", "term", "factor", 
      "constant"
    },
    std::vector<std::string>{
      "", "'program'", "'vars'", "'main'", "'end'", "'int'", "'float'", 
      "'print'", "'while'", "'do'", "'if'", "'else'", "'function'", "'='", 
      "';'", "':'", "','", "'('", "')'", "'{'", "'}'", "'+'", "'-'", "'*'", 
      "'/'", "'>'", "'<'", "'!='", "'=='"
    },
    std::vector<std::string>{
      "", "MAIN_FUNC", "VARS", "MAIN_BLOCK", "END_BLOCK", "INTEGER_TYPE", 
      "FLOAT_TYPE", "PRINT", "WHILE", "DO", "IF", "ELSE", "FUNCTION", "ASSIGN", 
      "SEMI", "COLON", "COMMA", "LPAREN", "RPAREN", "LBRACE", "RBRACE", 
      "PLUS", "MINUS", "MULT", "DIV", "GREATER_THAN", "LESS_THAN", "NOT_EQUAL", 
      "EQUAL", "ID", "INTEGER_CONSTANT", "FLOAT_CONSTANT", "STRING_LITERAL", 
      "WS", "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,34,223,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,1,0,1,0,1,0,1,0,
  	1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,3,1,70,8,1,1,2,4,2,73,8,2,
  	11,2,12,2,74,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,5,4,85,8,4,10,4,12,4,88,
  	9,4,1,5,1,5,1,6,1,6,1,6,1,6,3,6,96,8,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	8,1,8,1,8,5,8,108,8,8,10,8,12,8,111,9,8,1,8,3,8,114,8,8,1,9,1,9,1,9,1,
  	9,1,10,1,10,1,10,1,10,1,11,4,11,125,8,11,11,11,12,11,126,1,12,1,12,1,
  	12,1,12,1,12,3,12,134,8,12,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,
  	14,1,14,1,14,1,15,1,15,1,15,5,15,150,8,15,10,15,12,15,153,9,15,1,16,1,
  	16,3,16,157,8,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,
  	18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,3,19,178,8,19,1,20,1,20,1,
  	20,1,20,1,20,1,20,1,21,1,21,1,21,5,21,189,8,21,10,21,12,21,192,9,21,1,
  	21,3,21,195,8,21,1,22,1,22,1,22,1,22,3,22,201,8,22,1,23,1,23,1,24,1,24,
  	1,24,5,24,208,8,24,10,24,12,24,211,9,24,1,25,1,25,1,25,1,25,1,25,1,25,
  	3,25,219,8,25,1,26,1,26,1,26,0,0,27,0,2,4,6,8,10,12,14,16,18,20,22,24,
  	26,28,30,32,34,36,38,40,42,44,46,48,50,52,0,4,1,0,5,6,1,0,25,28,1,0,21,
  	22,1,0,30,31,215,0,54,1,0,0,0,2,69,1,0,0,0,4,72,1,0,0,0,6,76,1,0,0,0,
  	8,81,1,0,0,0,10,89,1,0,0,0,12,95,1,0,0,0,14,97,1,0,0,0,16,113,1,0,0,0,
  	18,115,1,0,0,0,20,119,1,0,0,0,22,124,1,0,0,0,24,133,1,0,0,0,26,135,1,
  	0,0,0,28,140,1,0,0,0,30,146,1,0,0,0,32,156,1,0,0,0,34,158,1,0,0,0,36,
  	165,1,0,0,0,38,177,1,0,0,0,40,179,1,0,0,0,42,194,1,0,0,0,44,196,1,0,0,
  	0,46,202,1,0,0,0,48,204,1,0,0,0,50,218,1,0,0,0,52,220,1,0,0,0,54,55,5,
  	1,0,0,55,56,5,29,0,0,56,57,5,14,0,0,57,58,3,2,1,0,58,59,3,12,6,0,59,60,
  	5,3,0,0,60,61,3,20,10,0,61,62,5,4,0,0,62,1,1,0,0,0,63,64,5,2,0,0,64,65,
  	5,19,0,0,65,66,3,4,2,0,66,67,5,20,0,0,67,70,1,0,0,0,68,70,1,0,0,0,69,
  	63,1,0,0,0,69,68,1,0,0,0,70,3,1,0,0,0,71,73,3,6,3,0,72,71,1,0,0,0,73,
  	74,1,0,0,0,74,72,1,0,0,0,74,75,1,0,0,0,75,5,1,0,0,0,76,77,3,8,4,0,77,
  	78,5,15,0,0,78,79,3,10,5,0,79,80,5,14,0,0,80,7,1,0,0,0,81,86,5,29,0,0,
  	82,83,5,16,0,0,83,85,5,29,0,0,84,82,1,0,0,0,85,88,1,0,0,0,86,84,1,0,0,
  	0,86,87,1,0,0,0,87,9,1,0,0,0,88,86,1,0,0,0,89,90,7,0,0,0,90,11,1,0,0,
  	0,91,92,3,14,7,0,92,93,3,12,6,0,93,96,1,0,0,0,94,96,1,0,0,0,95,91,1,0,
  	0,0,95,94,1,0,0,0,96,13,1,0,0,0,97,98,5,12,0,0,98,99,5,29,0,0,99,100,
  	5,17,0,0,100,101,3,16,8,0,101,102,5,18,0,0,102,103,3,20,10,0,103,15,1,
  	0,0,0,104,109,3,18,9,0,105,106,5,16,0,0,106,108,3,18,9,0,107,105,1,0,
  	0,0,108,111,1,0,0,0,109,107,1,0,0,0,109,110,1,0,0,0,110,114,1,0,0,0,111,
  	109,1,0,0,0,112,114,1,0,0,0,113,104,1,0,0,0,113,112,1,0,0,0,114,17,1,
  	0,0,0,115,116,5,29,0,0,116,117,5,15,0,0,117,118,3,10,5,0,118,19,1,0,0,
  	0,119,120,5,19,0,0,120,121,3,22,11,0,121,122,5,20,0,0,122,21,1,0,0,0,
  	123,125,3,24,12,0,124,123,1,0,0,0,125,126,1,0,0,0,126,124,1,0,0,0,126,
  	127,1,0,0,0,127,23,1,0,0,0,128,134,3,26,13,0,129,134,3,28,14,0,130,134,
  	3,34,17,0,131,134,3,36,18,0,132,134,3,40,20,0,133,128,1,0,0,0,133,129,
  	1,0,0,0,133,130,1,0,0,0,133,131,1,0,0,0,133,132,1,0,0,0,134,25,1,0,0,
  	0,135,136,5,29,0,0,136,137,5,13,0,0,137,138,3,44,22,0,138,139,5,14,0,
  	0,139,27,1,0,0,0,140,141,5,7,0,0,141,142,5,17,0,0,142,143,3,30,15,0,143,
  	144,5,18,0,0,144,145,5,14,0,0,145,29,1,0,0,0,146,151,3,32,16,0,147,148,
  	5,16,0,0,148,150,3,32,16,0,149,147,1,0,0,0,150,153,1,0,0,0,151,149,1,
  	0,0,0,151,152,1,0,0,0,152,31,1,0,0,0,153,151,1,0,0,0,154,157,3,44,22,
  	0,155,157,5,32,0,0,156,154,1,0,0,0,156,155,1,0,0,0,157,33,1,0,0,0,158,
  	159,5,8,0,0,159,160,5,17,0,0,160,161,3,44,22,0,161,162,5,18,0,0,162,163,
  	5,9,0,0,163,164,3,20,10,0,164,35,1,0,0,0,165,166,5,10,0,0,166,167,5,17,
  	0,0,167,168,3,44,22,0,168,169,5,18,0,0,169,170,5,9,0,0,170,171,3,20,10,
  	0,171,172,3,38,19,0,172,37,1,0,0,0,173,174,5,11,0,0,174,175,5,9,0,0,175,
  	178,3,20,10,0,176,178,1,0,0,0,177,173,1,0,0,0,177,176,1,0,0,0,178,39,
  	1,0,0,0,179,180,5,29,0,0,180,181,5,17,0,0,181,182,3,42,21,0,182,183,5,
  	18,0,0,183,184,5,14,0,0,184,41,1,0,0,0,185,190,3,44,22,0,186,187,5,16,
  	0,0,187,189,3,44,22,0,188,186,1,0,0,0,189,192,1,0,0,0,190,188,1,0,0,0,
  	190,191,1,0,0,0,191,195,1,0,0,0,192,190,1,0,0,0,193,195,1,0,0,0,194,185,
  	1,0,0,0,194,193,1,0,0,0,195,43,1,0,0,0,196,200,3,48,24,0,197,198,3,46,
  	23,0,198,199,3,48,24,0,199,201,1,0,0,0,200,197,1,0,0,0,200,201,1,0,0,
  	0,201,45,1,0,0,0,202,203,7,1,0,0,203,47,1,0,0,0,204,209,3,50,25,0,205,
  	206,7,2,0,0,206,208,3,50,25,0,207,205,1,0,0,0,208,211,1,0,0,0,209,207,
  	1,0,0,0,209,210,1,0,0,0,210,49,1,0,0,0,211,209,1,0,0,0,212,213,5,17,0,
  	0,213,214,3,44,22,0,214,215,5,18,0,0,215,219,1,0,0,0,216,219,5,29,0,0,
  	217,219,3,52,26,0,218,212,1,0,0,0,218,216,1,0,0,0,218,217,1,0,0,0,219,
  	51,1,0,0,0,220,221,7,3,0,0,221,53,1,0,0,0,16,69,74,86,95,109,113,126,
  	133,151,156,177,190,194,200,209,218
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  duckyparserParserStaticData = std::move(staticData);
}

}

duckyParserParser::duckyParserParser(TokenStream *input) : duckyParserParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

duckyParserParser::duckyParserParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  duckyParserParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *duckyparserParserStaticData->atn, duckyparserParserStaticData->decisionToDFA, duckyparserParserStaticData->sharedContextCache, options);
}

duckyParserParser::~duckyParserParser() {
  delete _interpreter;
}

const atn::ATN& duckyParserParser::getATN() const {
  return *duckyparserParserStaticData->atn;
}

std::string duckyParserParser::getGrammarFileName() const {
  return "duckyParser.g4";
}

const std::vector<std::string>& duckyParserParser::getRuleNames() const {
  return duckyparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& duckyParserParser::getVocabulary() const {
  return duckyparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView duckyParserParser::getSerializedATN() const {
  return duckyparserParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

duckyParserParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParserParser::ProgramContext::MAIN_FUNC() {
  return getToken(duckyParserParser::MAIN_FUNC, 0);
}

tree::TerminalNode* duckyParserParser::ProgramContext::ID() {
  return getToken(duckyParserParser::ID, 0);
}

tree::TerminalNode* duckyParserParser::ProgramContext::SEMI() {
  return getToken(duckyParserParser::SEMI, 0);
}

duckyParserParser::Var_declarationsContext* duckyParserParser::ProgramContext::var_declarations() {
  return getRuleContext<duckyParserParser::Var_declarationsContext>(0);
}

duckyParserParser::Func_declarationsContext* duckyParserParser::ProgramContext::func_declarations() {
  return getRuleContext<duckyParserParser::Func_declarationsContext>(0);
}

tree::TerminalNode* duckyParserParser::ProgramContext::MAIN_BLOCK() {
  return getToken(duckyParserParser::MAIN_BLOCK, 0);
}

duckyParserParser::BlockContext* duckyParserParser::ProgramContext::block() {
  return getRuleContext<duckyParserParser::BlockContext>(0);
}

tree::TerminalNode* duckyParserParser::ProgramContext::END_BLOCK() {
  return getToken(duckyParserParser::END_BLOCK, 0);
}


size_t duckyParserParser::ProgramContext::getRuleIndex() const {
  return duckyParserParser::RuleProgram;
}

void duckyParserParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void duckyParserParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any duckyParserParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::ProgramContext* duckyParserParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, duckyParserParser::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    match(duckyParserParser::MAIN_FUNC);
    setState(55);
    match(duckyParserParser::ID);
    setState(56);
    match(duckyParserParser::SEMI);
    setState(57);
    var_declarations();
    setState(58);
    func_declarations();
    setState(59);
    match(duckyParserParser::MAIN_BLOCK);
    setState(60);
    block();
    setState(61);
    match(duckyParserParser::END_BLOCK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_declarationsContext ------------------------------------------------------------------

duckyParserParser::Var_declarationsContext::Var_declarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParserParser::Var_declarationsContext::VARS() {
  return getToken(duckyParserParser::VARS, 0);
}

tree::TerminalNode* duckyParserParser::Var_declarationsContext::LBRACE() {
  return getToken(duckyParserParser::LBRACE, 0);
}

duckyParserParser::Var_decl_listContext* duckyParserParser::Var_declarationsContext::var_decl_list() {
  return getRuleContext<duckyParserParser::Var_decl_listContext>(0);
}

tree::TerminalNode* duckyParserParser::Var_declarationsContext::RBRACE() {
  return getToken(duckyParserParser::RBRACE, 0);
}


size_t duckyParserParser::Var_declarationsContext::getRuleIndex() const {
  return duckyParserParser::RuleVar_declarations;
}

void duckyParserParser::Var_declarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_declarations(this);
}

void duckyParserParser::Var_declarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_declarations(this);
}


std::any duckyParserParser::Var_declarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitVar_declarations(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::Var_declarationsContext* duckyParserParser::var_declarations() {
  Var_declarationsContext *_localctx = _tracker.createInstance<Var_declarationsContext>(_ctx, getState());
  enterRule(_localctx, 2, duckyParserParser::RuleVar_declarations);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(69);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case duckyParserParser::VARS: {
        enterOuterAlt(_localctx, 1);
        setState(63);
        match(duckyParserParser::VARS);
        setState(64);
        match(duckyParserParser::LBRACE);
        setState(65);
        var_decl_list();
        setState(66);
        match(duckyParserParser::RBRACE);
        break;
      }

      case duckyParserParser::MAIN_BLOCK:
      case duckyParserParser::FUNCTION: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_decl_listContext ------------------------------------------------------------------

duckyParserParser::Var_decl_listContext::Var_decl_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<duckyParserParser::Var_declContext *> duckyParserParser::Var_decl_listContext::var_decl() {
  return getRuleContexts<duckyParserParser::Var_declContext>();
}

duckyParserParser::Var_declContext* duckyParserParser::Var_decl_listContext::var_decl(size_t i) {
  return getRuleContext<duckyParserParser::Var_declContext>(i);
}


size_t duckyParserParser::Var_decl_listContext::getRuleIndex() const {
  return duckyParserParser::RuleVar_decl_list;
}

void duckyParserParser::Var_decl_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_decl_list(this);
}

void duckyParserParser::Var_decl_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_decl_list(this);
}


std::any duckyParserParser::Var_decl_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitVar_decl_list(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::Var_decl_listContext* duckyParserParser::var_decl_list() {
  Var_decl_listContext *_localctx = _tracker.createInstance<Var_decl_listContext>(_ctx, getState());
  enterRule(_localctx, 4, duckyParserParser::RuleVar_decl_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(71);
      var_decl();
      setState(74); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == duckyParserParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_declContext ------------------------------------------------------------------

duckyParserParser::Var_declContext::Var_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

duckyParserParser::Var_listContext* duckyParserParser::Var_declContext::var_list() {
  return getRuleContext<duckyParserParser::Var_listContext>(0);
}

tree::TerminalNode* duckyParserParser::Var_declContext::COLON() {
  return getToken(duckyParserParser::COLON, 0);
}

duckyParserParser::Data_typeContext* duckyParserParser::Var_declContext::data_type() {
  return getRuleContext<duckyParserParser::Data_typeContext>(0);
}

tree::TerminalNode* duckyParserParser::Var_declContext::SEMI() {
  return getToken(duckyParserParser::SEMI, 0);
}


size_t duckyParserParser::Var_declContext::getRuleIndex() const {
  return duckyParserParser::RuleVar_decl;
}

void duckyParserParser::Var_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_decl(this);
}

void duckyParserParser::Var_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_decl(this);
}


std::any duckyParserParser::Var_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitVar_decl(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::Var_declContext* duckyParserParser::var_decl() {
  Var_declContext *_localctx = _tracker.createInstance<Var_declContext>(_ctx, getState());
  enterRule(_localctx, 6, duckyParserParser::RuleVar_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    var_list();
    setState(77);
    match(duckyParserParser::COLON);
    setState(78);
    data_type();
    setState(79);
    match(duckyParserParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_listContext ------------------------------------------------------------------

duckyParserParser::Var_listContext::Var_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> duckyParserParser::Var_listContext::ID() {
  return getTokens(duckyParserParser::ID);
}

tree::TerminalNode* duckyParserParser::Var_listContext::ID(size_t i) {
  return getToken(duckyParserParser::ID, i);
}

std::vector<tree::TerminalNode *> duckyParserParser::Var_listContext::COMMA() {
  return getTokens(duckyParserParser::COMMA);
}

tree::TerminalNode* duckyParserParser::Var_listContext::COMMA(size_t i) {
  return getToken(duckyParserParser::COMMA, i);
}


size_t duckyParserParser::Var_listContext::getRuleIndex() const {
  return duckyParserParser::RuleVar_list;
}

void duckyParserParser::Var_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_list(this);
}

void duckyParserParser::Var_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_list(this);
}


std::any duckyParserParser::Var_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitVar_list(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::Var_listContext* duckyParserParser::var_list() {
  Var_listContext *_localctx = _tracker.createInstance<Var_listContext>(_ctx, getState());
  enterRule(_localctx, 8, duckyParserParser::RuleVar_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(duckyParserParser::ID);
    setState(86);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == duckyParserParser::COMMA) {
      setState(82);
      match(duckyParserParser::COMMA);
      setState(83);
      match(duckyParserParser::ID);
      setState(88);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Data_typeContext ------------------------------------------------------------------

duckyParserParser::Data_typeContext::Data_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParserParser::Data_typeContext::INTEGER_TYPE() {
  return getToken(duckyParserParser::INTEGER_TYPE, 0);
}

tree::TerminalNode* duckyParserParser::Data_typeContext::FLOAT_TYPE() {
  return getToken(duckyParserParser::FLOAT_TYPE, 0);
}


size_t duckyParserParser::Data_typeContext::getRuleIndex() const {
  return duckyParserParser::RuleData_type;
}

void duckyParserParser::Data_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterData_type(this);
}

void duckyParserParser::Data_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitData_type(this);
}


std::any duckyParserParser::Data_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitData_type(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::Data_typeContext* duckyParserParser::data_type() {
  Data_typeContext *_localctx = _tracker.createInstance<Data_typeContext>(_ctx, getState());
  enterRule(_localctx, 10, duckyParserParser::RuleData_type);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    _la = _input->LA(1);
    if (!(_la == duckyParserParser::INTEGER_TYPE

    || _la == duckyParserParser::FLOAT_TYPE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_declarationsContext ------------------------------------------------------------------

duckyParserParser::Func_declarationsContext::Func_declarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

duckyParserParser::Func_declContext* duckyParserParser::Func_declarationsContext::func_decl() {
  return getRuleContext<duckyParserParser::Func_declContext>(0);
}

duckyParserParser::Func_declarationsContext* duckyParserParser::Func_declarationsContext::func_declarations() {
  return getRuleContext<duckyParserParser::Func_declarationsContext>(0);
}


size_t duckyParserParser::Func_declarationsContext::getRuleIndex() const {
  return duckyParserParser::RuleFunc_declarations;
}

void duckyParserParser::Func_declarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_declarations(this);
}

void duckyParserParser::Func_declarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_declarations(this);
}


std::any duckyParserParser::Func_declarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitFunc_declarations(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::Func_declarationsContext* duckyParserParser::func_declarations() {
  Func_declarationsContext *_localctx = _tracker.createInstance<Func_declarationsContext>(_ctx, getState());
  enterRule(_localctx, 12, duckyParserParser::RuleFunc_declarations);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(95);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case duckyParserParser::FUNCTION: {
        enterOuterAlt(_localctx, 1);
        setState(91);
        func_decl();
        setState(92);
        func_declarations();
        break;
      }

      case duckyParserParser::MAIN_BLOCK: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_declContext ------------------------------------------------------------------

duckyParserParser::Func_declContext::Func_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParserParser::Func_declContext::FUNCTION() {
  return getToken(duckyParserParser::FUNCTION, 0);
}

tree::TerminalNode* duckyParserParser::Func_declContext::ID() {
  return getToken(duckyParserParser::ID, 0);
}

tree::TerminalNode* duckyParserParser::Func_declContext::LPAREN() {
  return getToken(duckyParserParser::LPAREN, 0);
}

duckyParserParser::Param_listContext* duckyParserParser::Func_declContext::param_list() {
  return getRuleContext<duckyParserParser::Param_listContext>(0);
}

tree::TerminalNode* duckyParserParser::Func_declContext::RPAREN() {
  return getToken(duckyParserParser::RPAREN, 0);
}

duckyParserParser::BlockContext* duckyParserParser::Func_declContext::block() {
  return getRuleContext<duckyParserParser::BlockContext>(0);
}


size_t duckyParserParser::Func_declContext::getRuleIndex() const {
  return duckyParserParser::RuleFunc_decl;
}

void duckyParserParser::Func_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_decl(this);
}

void duckyParserParser::Func_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_decl(this);
}


std::any duckyParserParser::Func_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitFunc_decl(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::Func_declContext* duckyParserParser::func_decl() {
  Func_declContext *_localctx = _tracker.createInstance<Func_declContext>(_ctx, getState());
  enterRule(_localctx, 14, duckyParserParser::RuleFunc_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    match(duckyParserParser::FUNCTION);
    setState(98);
    match(duckyParserParser::ID);
    setState(99);
    match(duckyParserParser::LPAREN);
    setState(100);
    param_list();
    setState(101);
    match(duckyParserParser::RPAREN);
    setState(102);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Param_listContext ------------------------------------------------------------------

duckyParserParser::Param_listContext::Param_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<duckyParserParser::ParamContext *> duckyParserParser::Param_listContext::param() {
  return getRuleContexts<duckyParserParser::ParamContext>();
}

duckyParserParser::ParamContext* duckyParserParser::Param_listContext::param(size_t i) {
  return getRuleContext<duckyParserParser::ParamContext>(i);
}

std::vector<tree::TerminalNode *> duckyParserParser::Param_listContext::COMMA() {
  return getTokens(duckyParserParser::COMMA);
}

tree::TerminalNode* duckyParserParser::Param_listContext::COMMA(size_t i) {
  return getToken(duckyParserParser::COMMA, i);
}


size_t duckyParserParser::Param_listContext::getRuleIndex() const {
  return duckyParserParser::RuleParam_list;
}

void duckyParserParser::Param_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam_list(this);
}

void duckyParserParser::Param_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam_list(this);
}


std::any duckyParserParser::Param_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitParam_list(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::Param_listContext* duckyParserParser::param_list() {
  Param_listContext *_localctx = _tracker.createInstance<Param_listContext>(_ctx, getState());
  enterRule(_localctx, 16, duckyParserParser::RuleParam_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(113);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case duckyParserParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(104);
        param();
        setState(109);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == duckyParserParser::COMMA) {
          setState(105);
          match(duckyParserParser::COMMA);
          setState(106);
          param();
          setState(111);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case duckyParserParser::RPAREN: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamContext ------------------------------------------------------------------

duckyParserParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParserParser::ParamContext::ID() {
  return getToken(duckyParserParser::ID, 0);
}

tree::TerminalNode* duckyParserParser::ParamContext::COLON() {
  return getToken(duckyParserParser::COLON, 0);
}

duckyParserParser::Data_typeContext* duckyParserParser::ParamContext::data_type() {
  return getRuleContext<duckyParserParser::Data_typeContext>(0);
}


size_t duckyParserParser::ParamContext::getRuleIndex() const {
  return duckyParserParser::RuleParam;
}

void duckyParserParser::ParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam(this);
}

void duckyParserParser::ParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam(this);
}


std::any duckyParserParser::ParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitParam(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::ParamContext* duckyParserParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 18, duckyParserParser::RuleParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    match(duckyParserParser::ID);
    setState(116);
    match(duckyParserParser::COLON);
    setState(117);
    data_type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

duckyParserParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParserParser::BlockContext::LBRACE() {
  return getToken(duckyParserParser::LBRACE, 0);
}

duckyParserParser::StatementsContext* duckyParserParser::BlockContext::statements() {
  return getRuleContext<duckyParserParser::StatementsContext>(0);
}

tree::TerminalNode* duckyParserParser::BlockContext::RBRACE() {
  return getToken(duckyParserParser::RBRACE, 0);
}


size_t duckyParserParser::BlockContext::getRuleIndex() const {
  return duckyParserParser::RuleBlock;
}

void duckyParserParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void duckyParserParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


std::any duckyParserParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::BlockContext* duckyParserParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 20, duckyParserParser::RuleBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    match(duckyParserParser::LBRACE);
    setState(120);
    statements();
    setState(121);
    match(duckyParserParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementsContext ------------------------------------------------------------------

duckyParserParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<duckyParserParser::StatementContext *> duckyParserParser::StatementsContext::statement() {
  return getRuleContexts<duckyParserParser::StatementContext>();
}

duckyParserParser::StatementContext* duckyParserParser::StatementsContext::statement(size_t i) {
  return getRuleContext<duckyParserParser::StatementContext>(i);
}


size_t duckyParserParser::StatementsContext::getRuleIndex() const {
  return duckyParserParser::RuleStatements;
}

void duckyParserParser::StatementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatements(this);
}

void duckyParserParser::StatementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatements(this);
}


std::any duckyParserParser::StatementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitStatements(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::StatementsContext* duckyParserParser::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 22, duckyParserParser::RuleStatements);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(124); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(123);
      statement();
      setState(126); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 536872320) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

duckyParserParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

duckyParserParser::AssignmentContext* duckyParserParser::StatementContext::assignment() {
  return getRuleContext<duckyParserParser::AssignmentContext>(0);
}

duckyParserParser::PrintContext* duckyParserParser::StatementContext::print() {
  return getRuleContext<duckyParserParser::PrintContext>(0);
}

duckyParserParser::LoopContext* duckyParserParser::StatementContext::loop() {
  return getRuleContext<duckyParserParser::LoopContext>(0);
}

duckyParserParser::ConditionContext* duckyParserParser::StatementContext::condition() {
  return getRuleContext<duckyParserParser::ConditionContext>(0);
}

duckyParserParser::Function_callContext* duckyParserParser::StatementContext::function_call() {
  return getRuleContext<duckyParserParser::Function_callContext>(0);
}


size_t duckyParserParser::StatementContext::getRuleIndex() const {
  return duckyParserParser::RuleStatement;
}

void duckyParserParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void duckyParserParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any duckyParserParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::StatementContext* duckyParserParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 24, duckyParserParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(133);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(128);
      assignment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(129);
      print();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(130);
      loop();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(131);
      condition();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(132);
      function_call();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

duckyParserParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParserParser::AssignmentContext::ID() {
  return getToken(duckyParserParser::ID, 0);
}

tree::TerminalNode* duckyParserParser::AssignmentContext::ASSIGN() {
  return getToken(duckyParserParser::ASSIGN, 0);
}

duckyParserParser::ExpressionContext* duckyParserParser::AssignmentContext::expression() {
  return getRuleContext<duckyParserParser::ExpressionContext>(0);
}

tree::TerminalNode* duckyParserParser::AssignmentContext::SEMI() {
  return getToken(duckyParserParser::SEMI, 0);
}


size_t duckyParserParser::AssignmentContext::getRuleIndex() const {
  return duckyParserParser::RuleAssignment;
}

void duckyParserParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void duckyParserParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


std::any duckyParserParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::AssignmentContext* duckyParserParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 26, duckyParserParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    match(duckyParserParser::ID);
    setState(136);
    match(duckyParserParser::ASSIGN);
    setState(137);
    expression();
    setState(138);
    match(duckyParserParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

duckyParserParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParserParser::PrintContext::PRINT() {
  return getToken(duckyParserParser::PRINT, 0);
}

tree::TerminalNode* duckyParserParser::PrintContext::LPAREN() {
  return getToken(duckyParserParser::LPAREN, 0);
}

duckyParserParser::Print_listContext* duckyParserParser::PrintContext::print_list() {
  return getRuleContext<duckyParserParser::Print_listContext>(0);
}

tree::TerminalNode* duckyParserParser::PrintContext::RPAREN() {
  return getToken(duckyParserParser::RPAREN, 0);
}

tree::TerminalNode* duckyParserParser::PrintContext::SEMI() {
  return getToken(duckyParserParser::SEMI, 0);
}


size_t duckyParserParser::PrintContext::getRuleIndex() const {
  return duckyParserParser::RulePrint;
}

void duckyParserParser::PrintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint(this);
}

void duckyParserParser::PrintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint(this);
}


std::any duckyParserParser::PrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitPrint(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::PrintContext* duckyParserParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 28, duckyParserParser::RulePrint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    match(duckyParserParser::PRINT);
    setState(141);
    match(duckyParserParser::LPAREN);
    setState(142);
    print_list();
    setState(143);
    match(duckyParserParser::RPAREN);
    setState(144);
    match(duckyParserParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Print_listContext ------------------------------------------------------------------

duckyParserParser::Print_listContext::Print_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<duckyParserParser::Print_itemContext *> duckyParserParser::Print_listContext::print_item() {
  return getRuleContexts<duckyParserParser::Print_itemContext>();
}

duckyParserParser::Print_itemContext* duckyParserParser::Print_listContext::print_item(size_t i) {
  return getRuleContext<duckyParserParser::Print_itemContext>(i);
}

std::vector<tree::TerminalNode *> duckyParserParser::Print_listContext::COMMA() {
  return getTokens(duckyParserParser::COMMA);
}

tree::TerminalNode* duckyParserParser::Print_listContext::COMMA(size_t i) {
  return getToken(duckyParserParser::COMMA, i);
}


size_t duckyParserParser::Print_listContext::getRuleIndex() const {
  return duckyParserParser::RulePrint_list;
}

void duckyParserParser::Print_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint_list(this);
}

void duckyParserParser::Print_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint_list(this);
}


std::any duckyParserParser::Print_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitPrint_list(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::Print_listContext* duckyParserParser::print_list() {
  Print_listContext *_localctx = _tracker.createInstance<Print_listContext>(_ctx, getState());
  enterRule(_localctx, 30, duckyParserParser::RulePrint_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    print_item();
    setState(151);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == duckyParserParser::COMMA) {
      setState(147);
      match(duckyParserParser::COMMA);
      setState(148);
      print_item();
      setState(153);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Print_itemContext ------------------------------------------------------------------

duckyParserParser::Print_itemContext::Print_itemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

duckyParserParser::ExpressionContext* duckyParserParser::Print_itemContext::expression() {
  return getRuleContext<duckyParserParser::ExpressionContext>(0);
}

tree::TerminalNode* duckyParserParser::Print_itemContext::STRING_LITERAL() {
  return getToken(duckyParserParser::STRING_LITERAL, 0);
}


size_t duckyParserParser::Print_itemContext::getRuleIndex() const {
  return duckyParserParser::RulePrint_item;
}

void duckyParserParser::Print_itemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint_item(this);
}

void duckyParserParser::Print_itemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint_item(this);
}


std::any duckyParserParser::Print_itemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitPrint_item(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::Print_itemContext* duckyParserParser::print_item() {
  Print_itemContext *_localctx = _tracker.createInstance<Print_itemContext>(_ctx, getState());
  enterRule(_localctx, 32, duckyParserParser::RulePrint_item);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(156);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case duckyParserParser::LPAREN:
      case duckyParserParser::ID:
      case duckyParserParser::INTEGER_CONSTANT:
      case duckyParserParser::FLOAT_CONSTANT: {
        enterOuterAlt(_localctx, 1);
        setState(154);
        expression();
        break;
      }

      case duckyParserParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(155);
        match(duckyParserParser::STRING_LITERAL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopContext ------------------------------------------------------------------

duckyParserParser::LoopContext::LoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParserParser::LoopContext::WHILE() {
  return getToken(duckyParserParser::WHILE, 0);
}

tree::TerminalNode* duckyParserParser::LoopContext::LPAREN() {
  return getToken(duckyParserParser::LPAREN, 0);
}

duckyParserParser::ExpressionContext* duckyParserParser::LoopContext::expression() {
  return getRuleContext<duckyParserParser::ExpressionContext>(0);
}

tree::TerminalNode* duckyParserParser::LoopContext::RPAREN() {
  return getToken(duckyParserParser::RPAREN, 0);
}

tree::TerminalNode* duckyParserParser::LoopContext::DO() {
  return getToken(duckyParserParser::DO, 0);
}

duckyParserParser::BlockContext* duckyParserParser::LoopContext::block() {
  return getRuleContext<duckyParserParser::BlockContext>(0);
}


size_t duckyParserParser::LoopContext::getRuleIndex() const {
  return duckyParserParser::RuleLoop;
}

void duckyParserParser::LoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoop(this);
}

void duckyParserParser::LoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoop(this);
}


std::any duckyParserParser::LoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitLoop(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::LoopContext* duckyParserParser::loop() {
  LoopContext *_localctx = _tracker.createInstance<LoopContext>(_ctx, getState());
  enterRule(_localctx, 34, duckyParserParser::RuleLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(158);
    match(duckyParserParser::WHILE);
    setState(159);
    match(duckyParserParser::LPAREN);
    setState(160);
    expression();
    setState(161);
    match(duckyParserParser::RPAREN);
    setState(162);
    match(duckyParserParser::DO);
    setState(163);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

duckyParserParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParserParser::ConditionContext::IF() {
  return getToken(duckyParserParser::IF, 0);
}

tree::TerminalNode* duckyParserParser::ConditionContext::LPAREN() {
  return getToken(duckyParserParser::LPAREN, 0);
}

duckyParserParser::ExpressionContext* duckyParserParser::ConditionContext::expression() {
  return getRuleContext<duckyParserParser::ExpressionContext>(0);
}

tree::TerminalNode* duckyParserParser::ConditionContext::RPAREN() {
  return getToken(duckyParserParser::RPAREN, 0);
}

tree::TerminalNode* duckyParserParser::ConditionContext::DO() {
  return getToken(duckyParserParser::DO, 0);
}

duckyParserParser::BlockContext* duckyParserParser::ConditionContext::block() {
  return getRuleContext<duckyParserParser::BlockContext>(0);
}

duckyParserParser::Else_blockContext* duckyParserParser::ConditionContext::else_block() {
  return getRuleContext<duckyParserParser::Else_blockContext>(0);
}


size_t duckyParserParser::ConditionContext::getRuleIndex() const {
  return duckyParserParser::RuleCondition;
}

void duckyParserParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void duckyParserParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}


std::any duckyParserParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::ConditionContext* duckyParserParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 36, duckyParserParser::RuleCondition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165);
    match(duckyParserParser::IF);
    setState(166);
    match(duckyParserParser::LPAREN);
    setState(167);
    expression();
    setState(168);
    match(duckyParserParser::RPAREN);
    setState(169);
    match(duckyParserParser::DO);
    setState(170);
    block();
    setState(171);
    else_block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Else_blockContext ------------------------------------------------------------------

duckyParserParser::Else_blockContext::Else_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParserParser::Else_blockContext::ELSE() {
  return getToken(duckyParserParser::ELSE, 0);
}

tree::TerminalNode* duckyParserParser::Else_blockContext::DO() {
  return getToken(duckyParserParser::DO, 0);
}

duckyParserParser::BlockContext* duckyParserParser::Else_blockContext::block() {
  return getRuleContext<duckyParserParser::BlockContext>(0);
}


size_t duckyParserParser::Else_blockContext::getRuleIndex() const {
  return duckyParserParser::RuleElse_block;
}

void duckyParserParser::Else_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElse_block(this);
}

void duckyParserParser::Else_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElse_block(this);
}


std::any duckyParserParser::Else_blockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitElse_block(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::Else_blockContext* duckyParserParser::else_block() {
  Else_blockContext *_localctx = _tracker.createInstance<Else_blockContext>(_ctx, getState());
  enterRule(_localctx, 38, duckyParserParser::RuleElse_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(177);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case duckyParserParser::ELSE: {
        enterOuterAlt(_localctx, 1);
        setState(173);
        match(duckyParserParser::ELSE);
        setState(174);
        match(duckyParserParser::DO);
        setState(175);
        block();
        break;
      }

      case duckyParserParser::PRINT:
      case duckyParserParser::WHILE:
      case duckyParserParser::IF:
      case duckyParserParser::RBRACE:
      case duckyParserParser::ID: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_callContext ------------------------------------------------------------------

duckyParserParser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParserParser::Function_callContext::ID() {
  return getToken(duckyParserParser::ID, 0);
}

tree::TerminalNode* duckyParserParser::Function_callContext::LPAREN() {
  return getToken(duckyParserParser::LPAREN, 0);
}

duckyParserParser::Arg_listContext* duckyParserParser::Function_callContext::arg_list() {
  return getRuleContext<duckyParserParser::Arg_listContext>(0);
}

tree::TerminalNode* duckyParserParser::Function_callContext::RPAREN() {
  return getToken(duckyParserParser::RPAREN, 0);
}

tree::TerminalNode* duckyParserParser::Function_callContext::SEMI() {
  return getToken(duckyParserParser::SEMI, 0);
}


size_t duckyParserParser::Function_callContext::getRuleIndex() const {
  return duckyParserParser::RuleFunction_call;
}

void duckyParserParser::Function_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_call(this);
}

void duckyParserParser::Function_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_call(this);
}


std::any duckyParserParser::Function_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitFunction_call(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::Function_callContext* duckyParserParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 40, duckyParserParser::RuleFunction_call);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(179);
    match(duckyParserParser::ID);
    setState(180);
    match(duckyParserParser::LPAREN);
    setState(181);
    arg_list();
    setState(182);
    match(duckyParserParser::RPAREN);
    setState(183);
    match(duckyParserParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Arg_listContext ------------------------------------------------------------------

duckyParserParser::Arg_listContext::Arg_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<duckyParserParser::ExpressionContext *> duckyParserParser::Arg_listContext::expression() {
  return getRuleContexts<duckyParserParser::ExpressionContext>();
}

duckyParserParser::ExpressionContext* duckyParserParser::Arg_listContext::expression(size_t i) {
  return getRuleContext<duckyParserParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> duckyParserParser::Arg_listContext::COMMA() {
  return getTokens(duckyParserParser::COMMA);
}

tree::TerminalNode* duckyParserParser::Arg_listContext::COMMA(size_t i) {
  return getToken(duckyParserParser::COMMA, i);
}


size_t duckyParserParser::Arg_listContext::getRuleIndex() const {
  return duckyParserParser::RuleArg_list;
}

void duckyParserParser::Arg_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArg_list(this);
}

void duckyParserParser::Arg_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArg_list(this);
}


std::any duckyParserParser::Arg_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitArg_list(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::Arg_listContext* duckyParserParser::arg_list() {
  Arg_listContext *_localctx = _tracker.createInstance<Arg_listContext>(_ctx, getState());
  enterRule(_localctx, 42, duckyParserParser::RuleArg_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(194);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case duckyParserParser::LPAREN:
      case duckyParserParser::ID:
      case duckyParserParser::INTEGER_CONSTANT:
      case duckyParserParser::FLOAT_CONSTANT: {
        enterOuterAlt(_localctx, 1);
        setState(185);
        expression();
        setState(190);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == duckyParserParser::COMMA) {
          setState(186);
          match(duckyParserParser::COMMA);
          setState(187);
          expression();
          setState(192);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case duckyParserParser::RPAREN: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

duckyParserParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<duckyParserParser::TermContext *> duckyParserParser::ExpressionContext::term() {
  return getRuleContexts<duckyParserParser::TermContext>();
}

duckyParserParser::TermContext* duckyParserParser::ExpressionContext::term(size_t i) {
  return getRuleContext<duckyParserParser::TermContext>(i);
}

duckyParserParser::Comparison_operatorContext* duckyParserParser::ExpressionContext::comparison_operator() {
  return getRuleContext<duckyParserParser::Comparison_operatorContext>(0);
}


size_t duckyParserParser::ExpressionContext::getRuleIndex() const {
  return duckyParserParser::RuleExpression;
}

void duckyParserParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void duckyParserParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


std::any duckyParserParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::ExpressionContext* duckyParserParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 44, duckyParserParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(196);
    term();
    setState(200);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 503316480) != 0)) {
      setState(197);
      comparison_operator();
      setState(198);
      term();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Comparison_operatorContext ------------------------------------------------------------------

duckyParserParser::Comparison_operatorContext::Comparison_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParserParser::Comparison_operatorContext::GREATER_THAN() {
  return getToken(duckyParserParser::GREATER_THAN, 0);
}

tree::TerminalNode* duckyParserParser::Comparison_operatorContext::LESS_THAN() {
  return getToken(duckyParserParser::LESS_THAN, 0);
}

tree::TerminalNode* duckyParserParser::Comparison_operatorContext::NOT_EQUAL() {
  return getToken(duckyParserParser::NOT_EQUAL, 0);
}

tree::TerminalNode* duckyParserParser::Comparison_operatorContext::EQUAL() {
  return getToken(duckyParserParser::EQUAL, 0);
}


size_t duckyParserParser::Comparison_operatorContext::getRuleIndex() const {
  return duckyParserParser::RuleComparison_operator;
}

void duckyParserParser::Comparison_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparison_operator(this);
}

void duckyParserParser::Comparison_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparison_operator(this);
}


std::any duckyParserParser::Comparison_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitComparison_operator(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::Comparison_operatorContext* duckyParserParser::comparison_operator() {
  Comparison_operatorContext *_localctx = _tracker.createInstance<Comparison_operatorContext>(_ctx, getState());
  enterRule(_localctx, 46, duckyParserParser::RuleComparison_operator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(202);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 503316480) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

duckyParserParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<duckyParserParser::FactorContext *> duckyParserParser::TermContext::factor() {
  return getRuleContexts<duckyParserParser::FactorContext>();
}

duckyParserParser::FactorContext* duckyParserParser::TermContext::factor(size_t i) {
  return getRuleContext<duckyParserParser::FactorContext>(i);
}

std::vector<tree::TerminalNode *> duckyParserParser::TermContext::PLUS() {
  return getTokens(duckyParserParser::PLUS);
}

tree::TerminalNode* duckyParserParser::TermContext::PLUS(size_t i) {
  return getToken(duckyParserParser::PLUS, i);
}

std::vector<tree::TerminalNode *> duckyParserParser::TermContext::MINUS() {
  return getTokens(duckyParserParser::MINUS);
}

tree::TerminalNode* duckyParserParser::TermContext::MINUS(size_t i) {
  return getToken(duckyParserParser::MINUS, i);
}


size_t duckyParserParser::TermContext::getRuleIndex() const {
  return duckyParserParser::RuleTerm;
}

void duckyParserParser::TermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerm(this);
}

void duckyParserParser::TermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerm(this);
}


std::any duckyParserParser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::TermContext* duckyParserParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 48, duckyParserParser::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    factor();
    setState(209);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == duckyParserParser::PLUS

    || _la == duckyParserParser::MINUS) {
      setState(205);
      _la = _input->LA(1);
      if (!(_la == duckyParserParser::PLUS

      || _la == duckyParserParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(206);
      factor();
      setState(211);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

duckyParserParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParserParser::FactorContext::LPAREN() {
  return getToken(duckyParserParser::LPAREN, 0);
}

duckyParserParser::ExpressionContext* duckyParserParser::FactorContext::expression() {
  return getRuleContext<duckyParserParser::ExpressionContext>(0);
}

tree::TerminalNode* duckyParserParser::FactorContext::RPAREN() {
  return getToken(duckyParserParser::RPAREN, 0);
}

tree::TerminalNode* duckyParserParser::FactorContext::ID() {
  return getToken(duckyParserParser::ID, 0);
}

duckyParserParser::ConstantContext* duckyParserParser::FactorContext::constant() {
  return getRuleContext<duckyParserParser::ConstantContext>(0);
}


size_t duckyParserParser::FactorContext::getRuleIndex() const {
  return duckyParserParser::RuleFactor;
}

void duckyParserParser::FactorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFactor(this);
}

void duckyParserParser::FactorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFactor(this);
}


std::any duckyParserParser::FactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitFactor(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::FactorContext* duckyParserParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 50, duckyParserParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(218);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case duckyParserParser::LPAREN: {
        enterOuterAlt(_localctx, 1);
        setState(212);
        match(duckyParserParser::LPAREN);
        setState(213);
        expression();
        setState(214);
        match(duckyParserParser::RPAREN);
        break;
      }

      case duckyParserParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(216);
        match(duckyParserParser::ID);
        break;
      }

      case duckyParserParser::INTEGER_CONSTANT:
      case duckyParserParser::FLOAT_CONSTANT: {
        enterOuterAlt(_localctx, 3);
        setState(217);
        constant();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

duckyParserParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParserParser::ConstantContext::FLOAT_CONSTANT() {
  return getToken(duckyParserParser::FLOAT_CONSTANT, 0);
}

tree::TerminalNode* duckyParserParser::ConstantContext::INTEGER_CONSTANT() {
  return getToken(duckyParserParser::INTEGER_CONSTANT, 0);
}


size_t duckyParserParser::ConstantContext::getRuleIndex() const {
  return duckyParserParser::RuleConstant;
}

void duckyParserParser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}

void duckyParserParser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}


std::any duckyParserParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyParserVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

duckyParserParser::ConstantContext* duckyParserParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 52, duckyParserParser::RuleConstant);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
    _la = _input->LA(1);
    if (!(_la == duckyParserParser::INTEGER_CONSTANT

    || _la == duckyParserParser::FLOAT_CONSTANT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void duckyParserParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  duckyparserParserInitialize();
#else
  ::antlr4::internal::call_once(duckyparserParserOnceFlag, duckyparserParserInitialize);
#endif
}
