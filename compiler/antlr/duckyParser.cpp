
// Generated from ducky.g4 by ANTLR 4.13.2


#include "duckyListener.h"
#include "duckyVisitor.h"

#include "duckyParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct DuckyParserStaticData final {
  DuckyParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  DuckyParserStaticData(const DuckyParserStaticData&) = delete;
  DuckyParserStaticData(DuckyParserStaticData&&) = delete;
  DuckyParserStaticData& operator=(const DuckyParserStaticData&) = delete;
  DuckyParserStaticData& operator=(DuckyParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag duckyParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<DuckyParserStaticData> duckyParserStaticData = nullptr;

void duckyParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (duckyParserStaticData != nullptr) {
    return;
  }
#else
  assert(duckyParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<DuckyParserStaticData>(
    std::vector<std::string>{
      "program", "var_declarations", "var_decl", "var_list", "data_type", 
      "func_declarations", "func_decl", "param_list", "param", "body", "statement", 
      "assignment", "print", "print_list", "print_item", "loop", "condition", 
      "function_call", "arg_list", "expression", "comparison_operator", 
      "exp", "term", "factor", "constant"
    },
    std::vector<std::string>{
      "", "'program'", "'var'", "'main'", "'end'", "'int'", "'float'", "'print'", 
      "'while'", "'if'", "'else'", "'function'", "'='", "';'", "':'", "','", 
      "'('", "')'", "'{'", "'}'", "'+'", "'-'", "'*'", "'/'", "'>'", "'<'", 
      "'!='", "'=='"
    },
    std::vector<std::string>{
      "", "MAIN_FUNC", "VARS", "MAIN_BLOCK", "END_BLOCK", "INTEGER_TYPE", 
      "FLOAT_TYPE", "PRINT", "WHILE", "IF", "ELSE", "FUNCTION", "ASSIGN", 
      "SEMI", "COLON", "COMMA", "LPAREN", "RPAREN", "LBRACE", "RBRACE", 
      "PLUS", "MINUS", "MULT", "DIV", "GREATER_THAN", "LESS_THAN", "NOT_EQUAL", 
      "EQUAL", "ID", "INTEGER_CONSTANT", "FLOAT_CONSTANT", "STRING_LITERAL", 
      "WS", "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,33,237,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,1,0,1,0,1,0,1,0,3,0,55,8,0,1,0,1,0,1,
  	0,1,0,1,0,1,0,1,0,1,1,5,1,65,8,1,10,1,12,1,68,9,1,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,3,1,3,1,3,5,3,79,8,3,10,3,12,3,82,9,3,1,4,1,4,1,5,5,5,87,8,5,10,
  	5,12,5,90,9,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,99,8,6,1,6,1,6,1,6,1,6,
  	1,7,1,7,1,7,5,7,108,8,7,10,7,12,7,111,9,7,1,7,3,7,114,8,7,1,8,1,8,1,8,
  	1,8,1,9,5,9,121,8,9,10,9,12,9,124,9,9,1,10,1,10,1,10,1,10,1,10,3,10,131,
  	8,10,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,
  	1,13,5,13,147,8,13,10,13,12,13,150,9,13,1,14,1,14,3,14,154,8,14,1,15,
  	1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,
  	1,16,1,16,1,16,1,16,1,16,1,16,3,16,177,8,16,1,16,1,16,1,17,1,17,1,17,
  	1,17,1,17,1,17,1,18,1,18,1,18,5,18,190,8,18,10,18,12,18,193,9,18,1,18,
  	3,18,196,8,18,1,19,1,19,1,19,1,19,3,19,202,8,19,1,20,1,20,1,21,1,21,1,
  	21,5,21,209,8,21,10,21,12,21,212,9,21,1,22,1,22,1,22,5,22,217,8,22,10,
  	22,12,22,220,9,22,1,23,1,23,1,23,1,23,1,23,3,23,227,8,23,1,23,1,23,3,
  	23,231,8,23,3,23,233,8,23,1,24,1,24,1,24,0,0,25,0,2,4,6,8,10,12,14,16,
  	18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,0,5,1,0,5,6,1,0,24,27,
  	1,0,20,21,1,0,22,23,1,0,29,30,234,0,50,1,0,0,0,2,66,1,0,0,0,4,69,1,0,
  	0,0,6,75,1,0,0,0,8,83,1,0,0,0,10,88,1,0,0,0,12,91,1,0,0,0,14,113,1,0,
  	0,0,16,115,1,0,0,0,18,122,1,0,0,0,20,130,1,0,0,0,22,132,1,0,0,0,24,137,
  	1,0,0,0,26,143,1,0,0,0,28,153,1,0,0,0,30,155,1,0,0,0,32,164,1,0,0,0,34,
  	180,1,0,0,0,36,195,1,0,0,0,38,197,1,0,0,0,40,203,1,0,0,0,42,205,1,0,0,
  	0,44,213,1,0,0,0,46,232,1,0,0,0,48,234,1,0,0,0,50,51,5,1,0,0,51,52,5,
  	28,0,0,52,54,5,13,0,0,53,55,3,2,1,0,54,53,1,0,0,0,54,55,1,0,0,0,55,56,
  	1,0,0,0,56,57,3,10,5,0,57,58,5,3,0,0,58,59,5,18,0,0,59,60,3,18,9,0,60,
  	61,5,19,0,0,61,62,5,4,0,0,62,1,1,0,0,0,63,65,3,4,2,0,64,63,1,0,0,0,65,
  	68,1,0,0,0,66,64,1,0,0,0,66,67,1,0,0,0,67,3,1,0,0,0,68,66,1,0,0,0,69,
  	70,5,2,0,0,70,71,3,6,3,0,71,72,5,14,0,0,72,73,3,8,4,0,73,74,5,13,0,0,
  	74,5,1,0,0,0,75,80,5,28,0,0,76,77,5,15,0,0,77,79,5,28,0,0,78,76,1,0,0,
  	0,79,82,1,0,0,0,80,78,1,0,0,0,80,81,1,0,0,0,81,7,1,0,0,0,82,80,1,0,0,
  	0,83,84,7,0,0,0,84,9,1,0,0,0,85,87,3,12,6,0,86,85,1,0,0,0,87,90,1,0,0,
  	0,88,86,1,0,0,0,88,89,1,0,0,0,89,11,1,0,0,0,90,88,1,0,0,0,91,92,5,11,
  	0,0,92,93,5,28,0,0,93,94,5,16,0,0,94,95,3,14,7,0,95,96,5,17,0,0,96,98,
  	5,18,0,0,97,99,3,2,1,0,98,97,1,0,0,0,98,99,1,0,0,0,99,100,1,0,0,0,100,
  	101,3,18,9,0,101,102,5,19,0,0,102,103,5,13,0,0,103,13,1,0,0,0,104,109,
  	3,16,8,0,105,106,5,15,0,0,106,108,3,16,8,0,107,105,1,0,0,0,108,111,1,
  	0,0,0,109,107,1,0,0,0,109,110,1,0,0,0,110,114,1,0,0,0,111,109,1,0,0,0,
  	112,114,1,0,0,0,113,104,1,0,0,0,113,112,1,0,0,0,114,15,1,0,0,0,115,116,
  	5,28,0,0,116,117,5,14,0,0,117,118,3,8,4,0,118,17,1,0,0,0,119,121,3,20,
  	10,0,120,119,1,0,0,0,121,124,1,0,0,0,122,120,1,0,0,0,122,123,1,0,0,0,
  	123,19,1,0,0,0,124,122,1,0,0,0,125,131,3,22,11,0,126,131,3,32,16,0,127,
  	131,3,30,15,0,128,131,3,34,17,0,129,131,3,24,12,0,130,125,1,0,0,0,130,
  	126,1,0,0,0,130,127,1,0,0,0,130,128,1,0,0,0,130,129,1,0,0,0,131,21,1,
  	0,0,0,132,133,5,28,0,0,133,134,5,12,0,0,134,135,3,38,19,0,135,136,5,13,
  	0,0,136,23,1,0,0,0,137,138,5,7,0,0,138,139,5,16,0,0,139,140,3,26,13,0,
  	140,141,5,17,0,0,141,142,5,13,0,0,142,25,1,0,0,0,143,148,3,28,14,0,144,
  	145,5,15,0,0,145,147,3,28,14,0,146,144,1,0,0,0,147,150,1,0,0,0,148,146,
  	1,0,0,0,148,149,1,0,0,0,149,27,1,0,0,0,150,148,1,0,0,0,151,154,3,38,19,
  	0,152,154,5,31,0,0,153,151,1,0,0,0,153,152,1,0,0,0,154,29,1,0,0,0,155,
  	156,5,8,0,0,156,157,5,16,0,0,157,158,3,38,19,0,158,159,5,17,0,0,159,160,
  	5,18,0,0,160,161,3,18,9,0,161,162,5,19,0,0,162,163,5,13,0,0,163,31,1,
  	0,0,0,164,165,5,9,0,0,165,166,5,16,0,0,166,167,3,38,19,0,167,168,5,17,
  	0,0,168,169,5,18,0,0,169,170,3,18,9,0,170,176,5,19,0,0,171,172,5,10,0,
  	0,172,173,5,18,0,0,173,174,3,18,9,0,174,175,5,19,0,0,175,177,1,0,0,0,
  	176,171,1,0,0,0,176,177,1,0,0,0,177,178,1,0,0,0,178,179,5,13,0,0,179,
  	33,1,0,0,0,180,181,5,28,0,0,181,182,5,16,0,0,182,183,3,36,18,0,183,184,
  	5,17,0,0,184,185,5,13,0,0,185,35,1,0,0,0,186,191,3,38,19,0,187,188,5,
  	15,0,0,188,190,3,38,19,0,189,187,1,0,0,0,190,193,1,0,0,0,191,189,1,0,
  	0,0,191,192,1,0,0,0,192,196,1,0,0,0,193,191,1,0,0,0,194,196,1,0,0,0,195,
  	186,1,0,0,0,195,194,1,0,0,0,196,37,1,0,0,0,197,201,3,42,21,0,198,199,
  	3,40,20,0,199,200,3,42,21,0,200,202,1,0,0,0,201,198,1,0,0,0,201,202,1,
  	0,0,0,202,39,1,0,0,0,203,204,7,1,0,0,204,41,1,0,0,0,205,210,3,44,22,0,
  	206,207,7,2,0,0,207,209,3,44,22,0,208,206,1,0,0,0,209,212,1,0,0,0,210,
  	208,1,0,0,0,210,211,1,0,0,0,211,43,1,0,0,0,212,210,1,0,0,0,213,218,3,
  	46,23,0,214,215,7,3,0,0,215,217,3,46,23,0,216,214,1,0,0,0,217,220,1,0,
  	0,0,218,216,1,0,0,0,218,219,1,0,0,0,219,45,1,0,0,0,220,218,1,0,0,0,221,
  	222,5,16,0,0,222,223,3,38,19,0,223,224,5,17,0,0,224,233,1,0,0,0,225,227,
  	7,2,0,0,226,225,1,0,0,0,226,227,1,0,0,0,227,230,1,0,0,0,228,231,3,48,
  	24,0,229,231,5,28,0,0,230,228,1,0,0,0,230,229,1,0,0,0,231,233,1,0,0,0,
  	232,221,1,0,0,0,232,226,1,0,0,0,233,47,1,0,0,0,234,235,7,4,0,0,235,49,
  	1,0,0,0,20,54,66,80,88,98,109,113,122,130,148,153,176,191,195,201,210,
  	218,226,230,232
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  duckyParserStaticData = std::move(staticData);
}

}

duckyParser::duckyParser(TokenStream *input) : duckyParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

duckyParser::duckyParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  duckyParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *duckyParserStaticData->atn, duckyParserStaticData->decisionToDFA, duckyParserStaticData->sharedContextCache, options);
}

duckyParser::~duckyParser() {
  delete _interpreter;
}

const atn::ATN& duckyParser::getATN() const {
  return *duckyParserStaticData->atn;
}

std::string duckyParser::getGrammarFileName() const {
  return "ducky.g4";
}

const std::vector<std::string>& duckyParser::getRuleNames() const {
  return duckyParserStaticData->ruleNames;
}

const dfa::Vocabulary& duckyParser::getVocabulary() const {
  return duckyParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView duckyParser::getSerializedATN() const {
  return duckyParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

duckyParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParser::ProgramContext::MAIN_FUNC() {
  return getToken(duckyParser::MAIN_FUNC, 0);
}

tree::TerminalNode* duckyParser::ProgramContext::ID() {
  return getToken(duckyParser::ID, 0);
}

tree::TerminalNode* duckyParser::ProgramContext::SEMI() {
  return getToken(duckyParser::SEMI, 0);
}

duckyParser::Func_declarationsContext* duckyParser::ProgramContext::func_declarations() {
  return getRuleContext<duckyParser::Func_declarationsContext>(0);
}

tree::TerminalNode* duckyParser::ProgramContext::MAIN_BLOCK() {
  return getToken(duckyParser::MAIN_BLOCK, 0);
}

tree::TerminalNode* duckyParser::ProgramContext::LBRACE() {
  return getToken(duckyParser::LBRACE, 0);
}

duckyParser::BodyContext* duckyParser::ProgramContext::body() {
  return getRuleContext<duckyParser::BodyContext>(0);
}

tree::TerminalNode* duckyParser::ProgramContext::RBRACE() {
  return getToken(duckyParser::RBRACE, 0);
}

tree::TerminalNode* duckyParser::ProgramContext::END_BLOCK() {
  return getToken(duckyParser::END_BLOCK, 0);
}

duckyParser::Var_declarationsContext* duckyParser::ProgramContext::var_declarations() {
  return getRuleContext<duckyParser::Var_declarationsContext>(0);
}


size_t duckyParser::ProgramContext::getRuleIndex() const {
  return duckyParser::RuleProgram;
}

void duckyParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void duckyParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any duckyParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

duckyParser::ProgramContext* duckyParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, duckyParser::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    match(duckyParser::MAIN_FUNC);
    setState(51);
    match(duckyParser::ID);
    setState(52);
    match(duckyParser::SEMI);
    setState(54);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      setState(53);
      var_declarations();
      break;
    }

    default:
      break;
    }
    setState(56);
    func_declarations();
    setState(57);
    match(duckyParser::MAIN_BLOCK);
    setState(58);
    match(duckyParser::LBRACE);
    setState(59);
    body();
    setState(60);
    match(duckyParser::RBRACE);
    setState(61);
    match(duckyParser::END_BLOCK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_declarationsContext ------------------------------------------------------------------

duckyParser::Var_declarationsContext::Var_declarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<duckyParser::Var_declContext *> duckyParser::Var_declarationsContext::var_decl() {
  return getRuleContexts<duckyParser::Var_declContext>();
}

duckyParser::Var_declContext* duckyParser::Var_declarationsContext::var_decl(size_t i) {
  return getRuleContext<duckyParser::Var_declContext>(i);
}


size_t duckyParser::Var_declarationsContext::getRuleIndex() const {
  return duckyParser::RuleVar_declarations;
}

void duckyParser::Var_declarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_declarations(this);
}

void duckyParser::Var_declarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_declarations(this);
}


std::any duckyParser::Var_declarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyVisitor*>(visitor))
    return parserVisitor->visitVar_declarations(this);
  else
    return visitor->visitChildren(this);
}

duckyParser::Var_declarationsContext* duckyParser::var_declarations() {
  Var_declarationsContext *_localctx = _tracker.createInstance<Var_declarationsContext>(_ctx, getState());
  enterRule(_localctx, 2, duckyParser::RuleVar_declarations);
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
    setState(66);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == duckyParser::VARS) {
      setState(63);
      var_decl();
      setState(68);
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

//----------------- Var_declContext ------------------------------------------------------------------

duckyParser::Var_declContext::Var_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParser::Var_declContext::VARS() {
  return getToken(duckyParser::VARS, 0);
}

duckyParser::Var_listContext* duckyParser::Var_declContext::var_list() {
  return getRuleContext<duckyParser::Var_listContext>(0);
}

tree::TerminalNode* duckyParser::Var_declContext::COLON() {
  return getToken(duckyParser::COLON, 0);
}

duckyParser::Data_typeContext* duckyParser::Var_declContext::data_type() {
  return getRuleContext<duckyParser::Data_typeContext>(0);
}

tree::TerminalNode* duckyParser::Var_declContext::SEMI() {
  return getToken(duckyParser::SEMI, 0);
}


size_t duckyParser::Var_declContext::getRuleIndex() const {
  return duckyParser::RuleVar_decl;
}

void duckyParser::Var_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_decl(this);
}

void duckyParser::Var_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_decl(this);
}


std::any duckyParser::Var_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyVisitor*>(visitor))
    return parserVisitor->visitVar_decl(this);
  else
    return visitor->visitChildren(this);
}

duckyParser::Var_declContext* duckyParser::var_decl() {
  Var_declContext *_localctx = _tracker.createInstance<Var_declContext>(_ctx, getState());
  enterRule(_localctx, 4, duckyParser::RuleVar_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    match(duckyParser::VARS);
    setState(70);
    var_list();
    setState(71);
    match(duckyParser::COLON);
    setState(72);
    data_type();
    setState(73);
    match(duckyParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_listContext ------------------------------------------------------------------

duckyParser::Var_listContext::Var_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> duckyParser::Var_listContext::ID() {
  return getTokens(duckyParser::ID);
}

tree::TerminalNode* duckyParser::Var_listContext::ID(size_t i) {
  return getToken(duckyParser::ID, i);
}

std::vector<tree::TerminalNode *> duckyParser::Var_listContext::COMMA() {
  return getTokens(duckyParser::COMMA);
}

tree::TerminalNode* duckyParser::Var_listContext::COMMA(size_t i) {
  return getToken(duckyParser::COMMA, i);
}


size_t duckyParser::Var_listContext::getRuleIndex() const {
  return duckyParser::RuleVar_list;
}

void duckyParser::Var_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_list(this);
}

void duckyParser::Var_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_list(this);
}


std::any duckyParser::Var_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyVisitor*>(visitor))
    return parserVisitor->visitVar_list(this);
  else
    return visitor->visitChildren(this);
}

duckyParser::Var_listContext* duckyParser::var_list() {
  Var_listContext *_localctx = _tracker.createInstance<Var_listContext>(_ctx, getState());
  enterRule(_localctx, 6, duckyParser::RuleVar_list);
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
    setState(75);
    match(duckyParser::ID);
    setState(80);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == duckyParser::COMMA) {
      setState(76);
      match(duckyParser::COMMA);
      setState(77);
      match(duckyParser::ID);
      setState(82);
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

duckyParser::Data_typeContext::Data_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParser::Data_typeContext::INTEGER_TYPE() {
  return getToken(duckyParser::INTEGER_TYPE, 0);
}

tree::TerminalNode* duckyParser::Data_typeContext::FLOAT_TYPE() {
  return getToken(duckyParser::FLOAT_TYPE, 0);
}


size_t duckyParser::Data_typeContext::getRuleIndex() const {
  return duckyParser::RuleData_type;
}

void duckyParser::Data_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterData_type(this);
}

void duckyParser::Data_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitData_type(this);
}


std::any duckyParser::Data_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyVisitor*>(visitor))
    return parserVisitor->visitData_type(this);
  else
    return visitor->visitChildren(this);
}

duckyParser::Data_typeContext* duckyParser::data_type() {
  Data_typeContext *_localctx = _tracker.createInstance<Data_typeContext>(_ctx, getState());
  enterRule(_localctx, 8, duckyParser::RuleData_type);
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
    setState(83);
    _la = _input->LA(1);
    if (!(_la == duckyParser::INTEGER_TYPE

    || _la == duckyParser::FLOAT_TYPE)) {
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

duckyParser::Func_declarationsContext::Func_declarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<duckyParser::Func_declContext *> duckyParser::Func_declarationsContext::func_decl() {
  return getRuleContexts<duckyParser::Func_declContext>();
}

duckyParser::Func_declContext* duckyParser::Func_declarationsContext::func_decl(size_t i) {
  return getRuleContext<duckyParser::Func_declContext>(i);
}


size_t duckyParser::Func_declarationsContext::getRuleIndex() const {
  return duckyParser::RuleFunc_declarations;
}

void duckyParser::Func_declarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_declarations(this);
}

void duckyParser::Func_declarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_declarations(this);
}


std::any duckyParser::Func_declarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyVisitor*>(visitor))
    return parserVisitor->visitFunc_declarations(this);
  else
    return visitor->visitChildren(this);
}

duckyParser::Func_declarationsContext* duckyParser::func_declarations() {
  Func_declarationsContext *_localctx = _tracker.createInstance<Func_declarationsContext>(_ctx, getState());
  enterRule(_localctx, 10, duckyParser::RuleFunc_declarations);
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
    setState(88);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == duckyParser::FUNCTION) {
      setState(85);
      func_decl();
      setState(90);
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

//----------------- Func_declContext ------------------------------------------------------------------

duckyParser::Func_declContext::Func_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParser::Func_declContext::FUNCTION() {
  return getToken(duckyParser::FUNCTION, 0);
}

tree::TerminalNode* duckyParser::Func_declContext::ID() {
  return getToken(duckyParser::ID, 0);
}

tree::TerminalNode* duckyParser::Func_declContext::LPAREN() {
  return getToken(duckyParser::LPAREN, 0);
}

duckyParser::Param_listContext* duckyParser::Func_declContext::param_list() {
  return getRuleContext<duckyParser::Param_listContext>(0);
}

tree::TerminalNode* duckyParser::Func_declContext::RPAREN() {
  return getToken(duckyParser::RPAREN, 0);
}

tree::TerminalNode* duckyParser::Func_declContext::LBRACE() {
  return getToken(duckyParser::LBRACE, 0);
}

duckyParser::BodyContext* duckyParser::Func_declContext::body() {
  return getRuleContext<duckyParser::BodyContext>(0);
}

tree::TerminalNode* duckyParser::Func_declContext::RBRACE() {
  return getToken(duckyParser::RBRACE, 0);
}

tree::TerminalNode* duckyParser::Func_declContext::SEMI() {
  return getToken(duckyParser::SEMI, 0);
}

duckyParser::Var_declarationsContext* duckyParser::Func_declContext::var_declarations() {
  return getRuleContext<duckyParser::Var_declarationsContext>(0);
}


size_t duckyParser::Func_declContext::getRuleIndex() const {
  return duckyParser::RuleFunc_decl;
}

void duckyParser::Func_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_decl(this);
}

void duckyParser::Func_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_decl(this);
}


std::any duckyParser::Func_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyVisitor*>(visitor))
    return parserVisitor->visitFunc_decl(this);
  else
    return visitor->visitChildren(this);
}

duckyParser::Func_declContext* duckyParser::func_decl() {
  Func_declContext *_localctx = _tracker.createInstance<Func_declContext>(_ctx, getState());
  enterRule(_localctx, 12, duckyParser::RuleFunc_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    match(duckyParser::FUNCTION);
    setState(92);
    match(duckyParser::ID);
    setState(93);
    match(duckyParser::LPAREN);
    setState(94);
    param_list();
    setState(95);
    match(duckyParser::RPAREN);
    setState(96);
    match(duckyParser::LBRACE);
    setState(98);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(97);
      var_declarations();
      break;
    }

    default:
      break;
    }
    setState(100);
    body();
    setState(101);
    match(duckyParser::RBRACE);
    setState(102);
    match(duckyParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Param_listContext ------------------------------------------------------------------

duckyParser::Param_listContext::Param_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<duckyParser::ParamContext *> duckyParser::Param_listContext::param() {
  return getRuleContexts<duckyParser::ParamContext>();
}

duckyParser::ParamContext* duckyParser::Param_listContext::param(size_t i) {
  return getRuleContext<duckyParser::ParamContext>(i);
}

std::vector<tree::TerminalNode *> duckyParser::Param_listContext::COMMA() {
  return getTokens(duckyParser::COMMA);
}

tree::TerminalNode* duckyParser::Param_listContext::COMMA(size_t i) {
  return getToken(duckyParser::COMMA, i);
}


size_t duckyParser::Param_listContext::getRuleIndex() const {
  return duckyParser::RuleParam_list;
}

void duckyParser::Param_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam_list(this);
}

void duckyParser::Param_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam_list(this);
}


std::any duckyParser::Param_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyVisitor*>(visitor))
    return parserVisitor->visitParam_list(this);
  else
    return visitor->visitChildren(this);
}

duckyParser::Param_listContext* duckyParser::param_list() {
  Param_listContext *_localctx = _tracker.createInstance<Param_listContext>(_ctx, getState());
  enterRule(_localctx, 14, duckyParser::RuleParam_list);
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
      case duckyParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(104);
        param();
        setState(109);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == duckyParser::COMMA) {
          setState(105);
          match(duckyParser::COMMA);
          setState(106);
          param();
          setState(111);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case duckyParser::RPAREN: {
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

duckyParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParser::ParamContext::ID() {
  return getToken(duckyParser::ID, 0);
}

tree::TerminalNode* duckyParser::ParamContext::COLON() {
  return getToken(duckyParser::COLON, 0);
}

duckyParser::Data_typeContext* duckyParser::ParamContext::data_type() {
  return getRuleContext<duckyParser::Data_typeContext>(0);
}


size_t duckyParser::ParamContext::getRuleIndex() const {
  return duckyParser::RuleParam;
}

void duckyParser::ParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam(this);
}

void duckyParser::ParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam(this);
}


std::any duckyParser::ParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyVisitor*>(visitor))
    return parserVisitor->visitParam(this);
  else
    return visitor->visitChildren(this);
}

duckyParser::ParamContext* duckyParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 16, duckyParser::RuleParam);

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
    match(duckyParser::ID);
    setState(116);
    match(duckyParser::COLON);
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

//----------------- BodyContext ------------------------------------------------------------------

duckyParser::BodyContext::BodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<duckyParser::StatementContext *> duckyParser::BodyContext::statement() {
  return getRuleContexts<duckyParser::StatementContext>();
}

duckyParser::StatementContext* duckyParser::BodyContext::statement(size_t i) {
  return getRuleContext<duckyParser::StatementContext>(i);
}


size_t duckyParser::BodyContext::getRuleIndex() const {
  return duckyParser::RuleBody;
}

void duckyParser::BodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBody(this);
}

void duckyParser::BodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBody(this);
}


std::any duckyParser::BodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyVisitor*>(visitor))
    return parserVisitor->visitBody(this);
  else
    return visitor->visitChildren(this);
}

duckyParser::BodyContext* duckyParser::body() {
  BodyContext *_localctx = _tracker.createInstance<BodyContext>(_ctx, getState());
  enterRule(_localctx, 18, duckyParser::RuleBody);
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
    setState(122);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 268436352) != 0)) {
      setState(119);
      statement();
      setState(124);
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

//----------------- StatementContext ------------------------------------------------------------------

duckyParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

duckyParser::AssignmentContext* duckyParser::StatementContext::assignment() {
  return getRuleContext<duckyParser::AssignmentContext>(0);
}

duckyParser::ConditionContext* duckyParser::StatementContext::condition() {
  return getRuleContext<duckyParser::ConditionContext>(0);
}

duckyParser::LoopContext* duckyParser::StatementContext::loop() {
  return getRuleContext<duckyParser::LoopContext>(0);
}

duckyParser::Function_callContext* duckyParser::StatementContext::function_call() {
  return getRuleContext<duckyParser::Function_callContext>(0);
}

duckyParser::PrintContext* duckyParser::StatementContext::print() {
  return getRuleContext<duckyParser::PrintContext>(0);
}


size_t duckyParser::StatementContext::getRuleIndex() const {
  return duckyParser::RuleStatement;
}

void duckyParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void duckyParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any duckyParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

duckyParser::StatementContext* duckyParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 20, duckyParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(130);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(125);
      assignment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(126);
      condition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(127);
      loop();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(128);
      function_call();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(129);
      print();
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

duckyParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParser::AssignmentContext::ID() {
  return getToken(duckyParser::ID, 0);
}

tree::TerminalNode* duckyParser::AssignmentContext::ASSIGN() {
  return getToken(duckyParser::ASSIGN, 0);
}

duckyParser::ExpressionContext* duckyParser::AssignmentContext::expression() {
  return getRuleContext<duckyParser::ExpressionContext>(0);
}

tree::TerminalNode* duckyParser::AssignmentContext::SEMI() {
  return getToken(duckyParser::SEMI, 0);
}


size_t duckyParser::AssignmentContext::getRuleIndex() const {
  return duckyParser::RuleAssignment;
}

void duckyParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void duckyParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


std::any duckyParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

duckyParser::AssignmentContext* duckyParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 22, duckyParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(duckyParser::ID);
    setState(133);
    match(duckyParser::ASSIGN);
    setState(134);
    expression();
    setState(135);
    match(duckyParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

duckyParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParser::PrintContext::PRINT() {
  return getToken(duckyParser::PRINT, 0);
}

tree::TerminalNode* duckyParser::PrintContext::LPAREN() {
  return getToken(duckyParser::LPAREN, 0);
}

duckyParser::Print_listContext* duckyParser::PrintContext::print_list() {
  return getRuleContext<duckyParser::Print_listContext>(0);
}

tree::TerminalNode* duckyParser::PrintContext::RPAREN() {
  return getToken(duckyParser::RPAREN, 0);
}

tree::TerminalNode* duckyParser::PrintContext::SEMI() {
  return getToken(duckyParser::SEMI, 0);
}


size_t duckyParser::PrintContext::getRuleIndex() const {
  return duckyParser::RulePrint;
}

void duckyParser::PrintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint(this);
}

void duckyParser::PrintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint(this);
}


std::any duckyParser::PrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyVisitor*>(visitor))
    return parserVisitor->visitPrint(this);
  else
    return visitor->visitChildren(this);
}

duckyParser::PrintContext* duckyParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 24, duckyParser::RulePrint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137);
    match(duckyParser::PRINT);
    setState(138);
    match(duckyParser::LPAREN);
    setState(139);
    print_list();
    setState(140);
    match(duckyParser::RPAREN);
    setState(141);
    match(duckyParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Print_listContext ------------------------------------------------------------------

duckyParser::Print_listContext::Print_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<duckyParser::Print_itemContext *> duckyParser::Print_listContext::print_item() {
  return getRuleContexts<duckyParser::Print_itemContext>();
}

duckyParser::Print_itemContext* duckyParser::Print_listContext::print_item(size_t i) {
  return getRuleContext<duckyParser::Print_itemContext>(i);
}

std::vector<tree::TerminalNode *> duckyParser::Print_listContext::COMMA() {
  return getTokens(duckyParser::COMMA);
}

tree::TerminalNode* duckyParser::Print_listContext::COMMA(size_t i) {
  return getToken(duckyParser::COMMA, i);
}


size_t duckyParser::Print_listContext::getRuleIndex() const {
  return duckyParser::RulePrint_list;
}

void duckyParser::Print_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint_list(this);
}

void duckyParser::Print_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint_list(this);
}


std::any duckyParser::Print_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyVisitor*>(visitor))
    return parserVisitor->visitPrint_list(this);
  else
    return visitor->visitChildren(this);
}

duckyParser::Print_listContext* duckyParser::print_list() {
  Print_listContext *_localctx = _tracker.createInstance<Print_listContext>(_ctx, getState());
  enterRule(_localctx, 26, duckyParser::RulePrint_list);
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
    setState(143);
    print_item();
    setState(148);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == duckyParser::COMMA) {
      setState(144);
      match(duckyParser::COMMA);
      setState(145);
      print_item();
      setState(150);
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

duckyParser::Print_itemContext::Print_itemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

duckyParser::ExpressionContext* duckyParser::Print_itemContext::expression() {
  return getRuleContext<duckyParser::ExpressionContext>(0);
}

tree::TerminalNode* duckyParser::Print_itemContext::STRING_LITERAL() {
  return getToken(duckyParser::STRING_LITERAL, 0);
}


size_t duckyParser::Print_itemContext::getRuleIndex() const {
  return duckyParser::RulePrint_item;
}

void duckyParser::Print_itemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint_item(this);
}

void duckyParser::Print_itemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint_item(this);
}


std::any duckyParser::Print_itemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyVisitor*>(visitor))
    return parserVisitor->visitPrint_item(this);
  else
    return visitor->visitChildren(this);
}

duckyParser::Print_itemContext* duckyParser::print_item() {
  Print_itemContext *_localctx = _tracker.createInstance<Print_itemContext>(_ctx, getState());
  enterRule(_localctx, 28, duckyParser::RulePrint_item);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(153);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case duckyParser::LPAREN:
      case duckyParser::PLUS:
      case duckyParser::MINUS:
      case duckyParser::ID:
      case duckyParser::INTEGER_CONSTANT:
      case duckyParser::FLOAT_CONSTANT: {
        enterOuterAlt(_localctx, 1);
        setState(151);
        expression();
        break;
      }

      case duckyParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(152);
        match(duckyParser::STRING_LITERAL);
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

duckyParser::LoopContext::LoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParser::LoopContext::WHILE() {
  return getToken(duckyParser::WHILE, 0);
}

tree::TerminalNode* duckyParser::LoopContext::LPAREN() {
  return getToken(duckyParser::LPAREN, 0);
}

duckyParser::ExpressionContext* duckyParser::LoopContext::expression() {
  return getRuleContext<duckyParser::ExpressionContext>(0);
}

tree::TerminalNode* duckyParser::LoopContext::RPAREN() {
  return getToken(duckyParser::RPAREN, 0);
}

tree::TerminalNode* duckyParser::LoopContext::LBRACE() {
  return getToken(duckyParser::LBRACE, 0);
}

duckyParser::BodyContext* duckyParser::LoopContext::body() {
  return getRuleContext<duckyParser::BodyContext>(0);
}

tree::TerminalNode* duckyParser::LoopContext::RBRACE() {
  return getToken(duckyParser::RBRACE, 0);
}

tree::TerminalNode* duckyParser::LoopContext::SEMI() {
  return getToken(duckyParser::SEMI, 0);
}


size_t duckyParser::LoopContext::getRuleIndex() const {
  return duckyParser::RuleLoop;
}

void duckyParser::LoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoop(this);
}

void duckyParser::LoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoop(this);
}


std::any duckyParser::LoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyVisitor*>(visitor))
    return parserVisitor->visitLoop(this);
  else
    return visitor->visitChildren(this);
}

duckyParser::LoopContext* duckyParser::loop() {
  LoopContext *_localctx = _tracker.createInstance<LoopContext>(_ctx, getState());
  enterRule(_localctx, 30, duckyParser::RuleLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(155);
    match(duckyParser::WHILE);
    setState(156);
    match(duckyParser::LPAREN);
    setState(157);
    expression();
    setState(158);
    match(duckyParser::RPAREN);
    setState(159);
    match(duckyParser::LBRACE);
    setState(160);
    body();
    setState(161);
    match(duckyParser::RBRACE);
    setState(162);
    match(duckyParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

duckyParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParser::ConditionContext::IF() {
  return getToken(duckyParser::IF, 0);
}

tree::TerminalNode* duckyParser::ConditionContext::LPAREN() {
  return getToken(duckyParser::LPAREN, 0);
}

duckyParser::ExpressionContext* duckyParser::ConditionContext::expression() {
  return getRuleContext<duckyParser::ExpressionContext>(0);
}

tree::TerminalNode* duckyParser::ConditionContext::RPAREN() {
  return getToken(duckyParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> duckyParser::ConditionContext::LBRACE() {
  return getTokens(duckyParser::LBRACE);
}

tree::TerminalNode* duckyParser::ConditionContext::LBRACE(size_t i) {
  return getToken(duckyParser::LBRACE, i);
}

std::vector<duckyParser::BodyContext *> duckyParser::ConditionContext::body() {
  return getRuleContexts<duckyParser::BodyContext>();
}

duckyParser::BodyContext* duckyParser::ConditionContext::body(size_t i) {
  return getRuleContext<duckyParser::BodyContext>(i);
}

std::vector<tree::TerminalNode *> duckyParser::ConditionContext::RBRACE() {
  return getTokens(duckyParser::RBRACE);
}

tree::TerminalNode* duckyParser::ConditionContext::RBRACE(size_t i) {
  return getToken(duckyParser::RBRACE, i);
}

tree::TerminalNode* duckyParser::ConditionContext::SEMI() {
  return getToken(duckyParser::SEMI, 0);
}

tree::TerminalNode* duckyParser::ConditionContext::ELSE() {
  return getToken(duckyParser::ELSE, 0);
}


size_t duckyParser::ConditionContext::getRuleIndex() const {
  return duckyParser::RuleCondition;
}

void duckyParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void duckyParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}


std::any duckyParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

duckyParser::ConditionContext* duckyParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 32, duckyParser::RuleCondition);
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
    setState(164);
    match(duckyParser::IF);
    setState(165);
    match(duckyParser::LPAREN);
    setState(166);
    expression();
    setState(167);
    match(duckyParser::RPAREN);
    setState(168);
    match(duckyParser::LBRACE);
    setState(169);
    body();
    setState(170);
    match(duckyParser::RBRACE);
    setState(176);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == duckyParser::ELSE) {
      setState(171);
      match(duckyParser::ELSE);
      setState(172);
      match(duckyParser::LBRACE);
      setState(173);
      body();
      setState(174);
      match(duckyParser::RBRACE);
    }
    setState(178);
    match(duckyParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_callContext ------------------------------------------------------------------

duckyParser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParser::Function_callContext::ID() {
  return getToken(duckyParser::ID, 0);
}

tree::TerminalNode* duckyParser::Function_callContext::LPAREN() {
  return getToken(duckyParser::LPAREN, 0);
}

duckyParser::Arg_listContext* duckyParser::Function_callContext::arg_list() {
  return getRuleContext<duckyParser::Arg_listContext>(0);
}

tree::TerminalNode* duckyParser::Function_callContext::RPAREN() {
  return getToken(duckyParser::RPAREN, 0);
}

tree::TerminalNode* duckyParser::Function_callContext::SEMI() {
  return getToken(duckyParser::SEMI, 0);
}


size_t duckyParser::Function_callContext::getRuleIndex() const {
  return duckyParser::RuleFunction_call;
}

void duckyParser::Function_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_call(this);
}

void duckyParser::Function_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_call(this);
}


std::any duckyParser::Function_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyVisitor*>(visitor))
    return parserVisitor->visitFunction_call(this);
  else
    return visitor->visitChildren(this);
}

duckyParser::Function_callContext* duckyParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 34, duckyParser::RuleFunction_call);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    match(duckyParser::ID);
    setState(181);
    match(duckyParser::LPAREN);
    setState(182);
    arg_list();
    setState(183);
    match(duckyParser::RPAREN);
    setState(184);
    match(duckyParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Arg_listContext ------------------------------------------------------------------

duckyParser::Arg_listContext::Arg_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<duckyParser::ExpressionContext *> duckyParser::Arg_listContext::expression() {
  return getRuleContexts<duckyParser::ExpressionContext>();
}

duckyParser::ExpressionContext* duckyParser::Arg_listContext::expression(size_t i) {
  return getRuleContext<duckyParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> duckyParser::Arg_listContext::COMMA() {
  return getTokens(duckyParser::COMMA);
}

tree::TerminalNode* duckyParser::Arg_listContext::COMMA(size_t i) {
  return getToken(duckyParser::COMMA, i);
}


size_t duckyParser::Arg_listContext::getRuleIndex() const {
  return duckyParser::RuleArg_list;
}

void duckyParser::Arg_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArg_list(this);
}

void duckyParser::Arg_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArg_list(this);
}


std::any duckyParser::Arg_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyVisitor*>(visitor))
    return parserVisitor->visitArg_list(this);
  else
    return visitor->visitChildren(this);
}

duckyParser::Arg_listContext* duckyParser::arg_list() {
  Arg_listContext *_localctx = _tracker.createInstance<Arg_listContext>(_ctx, getState());
  enterRule(_localctx, 36, duckyParser::RuleArg_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(195);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case duckyParser::LPAREN:
      case duckyParser::PLUS:
      case duckyParser::MINUS:
      case duckyParser::ID:
      case duckyParser::INTEGER_CONSTANT:
      case duckyParser::FLOAT_CONSTANT: {
        enterOuterAlt(_localctx, 1);
        setState(186);
        expression();
        setState(191);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == duckyParser::COMMA) {
          setState(187);
          match(duckyParser::COMMA);
          setState(188);
          expression();
          setState(193);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case duckyParser::RPAREN: {
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

duckyParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<duckyParser::ExpContext *> duckyParser::ExpressionContext::exp() {
  return getRuleContexts<duckyParser::ExpContext>();
}

duckyParser::ExpContext* duckyParser::ExpressionContext::exp(size_t i) {
  return getRuleContext<duckyParser::ExpContext>(i);
}

duckyParser::Comparison_operatorContext* duckyParser::ExpressionContext::comparison_operator() {
  return getRuleContext<duckyParser::Comparison_operatorContext>(0);
}


size_t duckyParser::ExpressionContext::getRuleIndex() const {
  return duckyParser::RuleExpression;
}

void duckyParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void duckyParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


std::any duckyParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

duckyParser::ExpressionContext* duckyParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 38, duckyParser::RuleExpression);
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
    setState(197);
    exp();
    setState(201);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 251658240) != 0)) {
      setState(198);
      comparison_operator();
      setState(199);
      exp();
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

duckyParser::Comparison_operatorContext::Comparison_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParser::Comparison_operatorContext::GREATER_THAN() {
  return getToken(duckyParser::GREATER_THAN, 0);
}

tree::TerminalNode* duckyParser::Comparison_operatorContext::LESS_THAN() {
  return getToken(duckyParser::LESS_THAN, 0);
}

tree::TerminalNode* duckyParser::Comparison_operatorContext::NOT_EQUAL() {
  return getToken(duckyParser::NOT_EQUAL, 0);
}

tree::TerminalNode* duckyParser::Comparison_operatorContext::EQUAL() {
  return getToken(duckyParser::EQUAL, 0);
}


size_t duckyParser::Comparison_operatorContext::getRuleIndex() const {
  return duckyParser::RuleComparison_operator;
}

void duckyParser::Comparison_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparison_operator(this);
}

void duckyParser::Comparison_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparison_operator(this);
}


std::any duckyParser::Comparison_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyVisitor*>(visitor))
    return parserVisitor->visitComparison_operator(this);
  else
    return visitor->visitChildren(this);
}

duckyParser::Comparison_operatorContext* duckyParser::comparison_operator() {
  Comparison_operatorContext *_localctx = _tracker.createInstance<Comparison_operatorContext>(_ctx, getState());
  enterRule(_localctx, 40, duckyParser::RuleComparison_operator);
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
    setState(203);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 251658240) != 0))) {
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

//----------------- ExpContext ------------------------------------------------------------------

duckyParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<duckyParser::TermContext *> duckyParser::ExpContext::term() {
  return getRuleContexts<duckyParser::TermContext>();
}

duckyParser::TermContext* duckyParser::ExpContext::term(size_t i) {
  return getRuleContext<duckyParser::TermContext>(i);
}

std::vector<tree::TerminalNode *> duckyParser::ExpContext::PLUS() {
  return getTokens(duckyParser::PLUS);
}

tree::TerminalNode* duckyParser::ExpContext::PLUS(size_t i) {
  return getToken(duckyParser::PLUS, i);
}

std::vector<tree::TerminalNode *> duckyParser::ExpContext::MINUS() {
  return getTokens(duckyParser::MINUS);
}

tree::TerminalNode* duckyParser::ExpContext::MINUS(size_t i) {
  return getToken(duckyParser::MINUS, i);
}


size_t duckyParser::ExpContext::getRuleIndex() const {
  return duckyParser::RuleExp;
}

void duckyParser::ExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExp(this);
}

void duckyParser::ExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExp(this);
}


std::any duckyParser::ExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyVisitor*>(visitor))
    return parserVisitor->visitExp(this);
  else
    return visitor->visitChildren(this);
}

duckyParser::ExpContext* duckyParser::exp() {
  ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, getState());
  enterRule(_localctx, 42, duckyParser::RuleExp);
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
    setState(205);
    term();
    setState(210);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == duckyParser::PLUS

    || _la == duckyParser::MINUS) {
      setState(206);
      _la = _input->LA(1);
      if (!(_la == duckyParser::PLUS

      || _la == duckyParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(207);
      term();
      setState(212);
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

//----------------- TermContext ------------------------------------------------------------------

duckyParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<duckyParser::FactorContext *> duckyParser::TermContext::factor() {
  return getRuleContexts<duckyParser::FactorContext>();
}

duckyParser::FactorContext* duckyParser::TermContext::factor(size_t i) {
  return getRuleContext<duckyParser::FactorContext>(i);
}

std::vector<tree::TerminalNode *> duckyParser::TermContext::MULT() {
  return getTokens(duckyParser::MULT);
}

tree::TerminalNode* duckyParser::TermContext::MULT(size_t i) {
  return getToken(duckyParser::MULT, i);
}

std::vector<tree::TerminalNode *> duckyParser::TermContext::DIV() {
  return getTokens(duckyParser::DIV);
}

tree::TerminalNode* duckyParser::TermContext::DIV(size_t i) {
  return getToken(duckyParser::DIV, i);
}


size_t duckyParser::TermContext::getRuleIndex() const {
  return duckyParser::RuleTerm;
}

void duckyParser::TermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerm(this);
}

void duckyParser::TermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerm(this);
}


std::any duckyParser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyVisitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}

duckyParser::TermContext* duckyParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 44, duckyParser::RuleTerm);
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
    setState(213);
    factor();
    setState(218);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == duckyParser::MULT

    || _la == duckyParser::DIV) {
      setState(214);
      _la = _input->LA(1);
      if (!(_la == duckyParser::MULT

      || _la == duckyParser::DIV)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(215);
      factor();
      setState(220);
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

duckyParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParser::FactorContext::LPAREN() {
  return getToken(duckyParser::LPAREN, 0);
}

duckyParser::ExpressionContext* duckyParser::FactorContext::expression() {
  return getRuleContext<duckyParser::ExpressionContext>(0);
}

tree::TerminalNode* duckyParser::FactorContext::RPAREN() {
  return getToken(duckyParser::RPAREN, 0);
}

duckyParser::ConstantContext* duckyParser::FactorContext::constant() {
  return getRuleContext<duckyParser::ConstantContext>(0);
}

tree::TerminalNode* duckyParser::FactorContext::ID() {
  return getToken(duckyParser::ID, 0);
}

tree::TerminalNode* duckyParser::FactorContext::PLUS() {
  return getToken(duckyParser::PLUS, 0);
}

tree::TerminalNode* duckyParser::FactorContext::MINUS() {
  return getToken(duckyParser::MINUS, 0);
}


size_t duckyParser::FactorContext::getRuleIndex() const {
  return duckyParser::RuleFactor;
}

void duckyParser::FactorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFactor(this);
}

void duckyParser::FactorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFactor(this);
}


std::any duckyParser::FactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyVisitor*>(visitor))
    return parserVisitor->visitFactor(this);
  else
    return visitor->visitChildren(this);
}

duckyParser::FactorContext* duckyParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 46, duckyParser::RuleFactor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(232);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case duckyParser::LPAREN: {
        enterOuterAlt(_localctx, 1);
        setState(221);
        match(duckyParser::LPAREN);
        setState(222);
        expression();
        setState(223);
        match(duckyParser::RPAREN);
        break;
      }

      case duckyParser::PLUS:
      case duckyParser::MINUS:
      case duckyParser::ID:
      case duckyParser::INTEGER_CONSTANT:
      case duckyParser::FLOAT_CONSTANT: {
        enterOuterAlt(_localctx, 2);
        setState(226);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == duckyParser::PLUS

        || _la == duckyParser::MINUS) {
          setState(225);
          _la = _input->LA(1);
          if (!(_la == duckyParser::PLUS

          || _la == duckyParser::MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
        }
        setState(230);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case duckyParser::INTEGER_CONSTANT:
          case duckyParser::FLOAT_CONSTANT: {
            setState(228);
            constant();
            break;
          }

          case duckyParser::ID: {
            setState(229);
            match(duckyParser::ID);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
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

duckyParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParser::ConstantContext::FLOAT_CONSTANT() {
  return getToken(duckyParser::FLOAT_CONSTANT, 0);
}

tree::TerminalNode* duckyParser::ConstantContext::INTEGER_CONSTANT() {
  return getToken(duckyParser::INTEGER_CONSTANT, 0);
}


size_t duckyParser::ConstantContext::getRuleIndex() const {
  return duckyParser::RuleConstant;
}

void duckyParser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}

void duckyParser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}


std::any duckyParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<duckyVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

duckyParser::ConstantContext* duckyParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 48, duckyParser::RuleConstant);
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
    setState(234);
    _la = _input->LA(1);
    if (!(_la == duckyParser::INTEGER_CONSTANT

    || _la == duckyParser::FLOAT_CONSTANT)) {
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

void duckyParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  duckyParserInitialize();
#else
  ::antlr4::internal::call_once(duckyParserOnceFlag, duckyParserInitialize);
#endif
}
