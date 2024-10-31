
// Generated from ducky.g4 by ANTLR 4.13.2


#include "duckyListener.h"

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
      "func_declarations", "func_decl", "func_block", "func_var_declarations", 
      "param_list", "param", "block", "statements", "statement", "assignment", 
      "print", "print_list", "print_item", "loop", "condition", "else_block", 
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
  	4,1,33,243,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,4,1,71,8,1,11,1,12,
  	1,72,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,5,3,84,8,3,10,3,12,3,87,9,3,
  	1,4,1,4,1,5,5,5,92,8,5,10,5,12,5,95,9,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,
  	7,1,7,1,7,1,7,1,7,1,8,5,8,110,8,8,10,8,12,8,113,9,8,1,9,1,9,1,9,5,9,118,
  	8,9,10,9,12,9,121,9,9,1,9,3,9,124,8,9,1,10,1,10,1,10,1,10,1,11,1,11,1,
  	11,1,11,1,12,4,12,135,8,12,11,12,12,12,136,1,13,1,13,1,13,1,13,1,13,3,
  	13,144,8,13,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,
  	16,1,16,1,16,5,16,160,8,16,10,16,12,16,163,9,16,1,17,1,17,3,17,167,8,
  	17,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,
  	20,1,20,1,20,3,20,185,8,20,1,21,1,21,1,21,1,21,1,21,1,21,1,22,1,22,1,
  	22,5,22,196,8,22,10,22,12,22,199,9,22,1,22,3,22,202,8,22,1,23,1,23,1,
  	23,1,23,3,23,208,8,23,1,24,1,24,1,25,1,25,1,25,5,25,215,8,25,10,25,12,
  	25,218,9,25,1,26,1,26,1,26,5,26,223,8,26,10,26,12,26,226,9,26,1,27,3,
  	27,229,8,27,1,27,1,27,3,27,233,8,27,1,27,1,27,1,27,1,27,3,27,239,8,27,
  	1,28,1,28,1,28,0,0,29,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,
  	36,38,40,42,44,46,48,50,52,54,56,0,5,1,0,5,6,1,0,24,27,1,0,20,21,1,0,
  	22,23,1,0,29,30,235,0,58,1,0,0,0,2,70,1,0,0,0,4,74,1,0,0,0,6,80,1,0,0,
  	0,8,88,1,0,0,0,10,93,1,0,0,0,12,96,1,0,0,0,14,103,1,0,0,0,16,111,1,0,
  	0,0,18,123,1,0,0,0,20,125,1,0,0,0,22,129,1,0,0,0,24,134,1,0,0,0,26,143,
  	1,0,0,0,28,145,1,0,0,0,30,150,1,0,0,0,32,156,1,0,0,0,34,166,1,0,0,0,36,
  	168,1,0,0,0,38,174,1,0,0,0,40,184,1,0,0,0,42,186,1,0,0,0,44,201,1,0,0,
  	0,46,203,1,0,0,0,48,209,1,0,0,0,50,211,1,0,0,0,52,219,1,0,0,0,54,238,
  	1,0,0,0,56,240,1,0,0,0,58,59,5,1,0,0,59,60,5,28,0,0,60,61,5,13,0,0,61,
  	62,3,2,1,0,62,63,3,10,5,0,63,64,5,3,0,0,64,65,5,16,0,0,65,66,5,17,0,0,
  	66,67,3,22,11,0,67,68,5,4,0,0,68,1,1,0,0,0,69,71,3,4,2,0,70,69,1,0,0,
  	0,71,72,1,0,0,0,72,70,1,0,0,0,72,73,1,0,0,0,73,3,1,0,0,0,74,75,5,2,0,
  	0,75,76,3,6,3,0,76,77,5,14,0,0,77,78,3,8,4,0,78,79,5,13,0,0,79,5,1,0,
  	0,0,80,85,5,28,0,0,81,82,5,15,0,0,82,84,5,28,0,0,83,81,1,0,0,0,84,87,
  	1,0,0,0,85,83,1,0,0,0,85,86,1,0,0,0,86,7,1,0,0,0,87,85,1,0,0,0,88,89,
  	7,0,0,0,89,9,1,0,0,0,90,92,3,12,6,0,91,90,1,0,0,0,92,95,1,0,0,0,93,91,
  	1,0,0,0,93,94,1,0,0,0,94,11,1,0,0,0,95,93,1,0,0,0,96,97,5,11,0,0,97,98,
  	5,28,0,0,98,99,5,16,0,0,99,100,3,18,9,0,100,101,5,17,0,0,101,102,3,14,
  	7,0,102,13,1,0,0,0,103,104,5,18,0,0,104,105,3,16,8,0,105,106,3,24,12,
  	0,106,107,5,19,0,0,107,15,1,0,0,0,108,110,3,4,2,0,109,108,1,0,0,0,110,
  	113,1,0,0,0,111,109,1,0,0,0,111,112,1,0,0,0,112,17,1,0,0,0,113,111,1,
  	0,0,0,114,119,3,20,10,0,115,116,5,15,0,0,116,118,3,20,10,0,117,115,1,
  	0,0,0,118,121,1,0,0,0,119,117,1,0,0,0,119,120,1,0,0,0,120,124,1,0,0,0,
  	121,119,1,0,0,0,122,124,1,0,0,0,123,114,1,0,0,0,123,122,1,0,0,0,124,19,
  	1,0,0,0,125,126,5,28,0,0,126,127,5,14,0,0,127,128,3,8,4,0,128,21,1,0,
  	0,0,129,130,5,18,0,0,130,131,3,24,12,0,131,132,5,19,0,0,132,23,1,0,0,
  	0,133,135,3,26,13,0,134,133,1,0,0,0,135,136,1,0,0,0,136,134,1,0,0,0,136,
  	137,1,0,0,0,137,25,1,0,0,0,138,144,3,28,14,0,139,144,3,30,15,0,140,144,
  	3,36,18,0,141,144,3,38,19,0,142,144,3,42,21,0,143,138,1,0,0,0,143,139,
  	1,0,0,0,143,140,1,0,0,0,143,141,1,0,0,0,143,142,1,0,0,0,144,27,1,0,0,
  	0,145,146,5,28,0,0,146,147,5,12,0,0,147,148,3,46,23,0,148,149,5,13,0,
  	0,149,29,1,0,0,0,150,151,5,7,0,0,151,152,5,16,0,0,152,153,3,32,16,0,153,
  	154,5,17,0,0,154,155,5,13,0,0,155,31,1,0,0,0,156,161,3,34,17,0,157,158,
  	5,15,0,0,158,160,3,34,17,0,159,157,1,0,0,0,160,163,1,0,0,0,161,159,1,
  	0,0,0,161,162,1,0,0,0,162,33,1,0,0,0,163,161,1,0,0,0,164,167,3,46,23,
  	0,165,167,5,31,0,0,166,164,1,0,0,0,166,165,1,0,0,0,167,35,1,0,0,0,168,
  	169,5,8,0,0,169,170,5,16,0,0,170,171,3,46,23,0,171,172,5,17,0,0,172,173,
  	3,22,11,0,173,37,1,0,0,0,174,175,5,9,0,0,175,176,5,16,0,0,176,177,3,46,
  	23,0,177,178,5,17,0,0,178,179,3,22,11,0,179,180,3,40,20,0,180,39,1,0,
  	0,0,181,182,5,10,0,0,182,185,3,22,11,0,183,185,1,0,0,0,184,181,1,0,0,
  	0,184,183,1,0,0,0,185,41,1,0,0,0,186,187,5,28,0,0,187,188,5,16,0,0,188,
  	189,3,44,22,0,189,190,5,17,0,0,190,191,5,13,0,0,191,43,1,0,0,0,192,197,
  	3,46,23,0,193,194,5,15,0,0,194,196,3,46,23,0,195,193,1,0,0,0,196,199,
  	1,0,0,0,197,195,1,0,0,0,197,198,1,0,0,0,198,202,1,0,0,0,199,197,1,0,0,
  	0,200,202,1,0,0,0,201,192,1,0,0,0,201,200,1,0,0,0,202,45,1,0,0,0,203,
  	207,3,50,25,0,204,205,3,48,24,0,205,206,3,50,25,0,206,208,1,0,0,0,207,
  	204,1,0,0,0,207,208,1,0,0,0,208,47,1,0,0,0,209,210,7,1,0,0,210,49,1,0,
  	0,0,211,216,3,52,26,0,212,213,7,2,0,0,213,215,3,52,26,0,214,212,1,0,0,
  	0,215,218,1,0,0,0,216,214,1,0,0,0,216,217,1,0,0,0,217,51,1,0,0,0,218,
  	216,1,0,0,0,219,224,3,54,27,0,220,221,7,3,0,0,221,223,3,54,27,0,222,220,
  	1,0,0,0,223,226,1,0,0,0,224,222,1,0,0,0,224,225,1,0,0,0,225,53,1,0,0,
  	0,226,224,1,0,0,0,227,229,7,2,0,0,228,227,1,0,0,0,228,229,1,0,0,0,229,
  	232,1,0,0,0,230,233,3,56,28,0,231,233,5,28,0,0,232,230,1,0,0,0,232,231,
  	1,0,0,0,233,239,1,0,0,0,234,235,5,16,0,0,235,236,3,46,23,0,236,237,5,
  	17,0,0,237,239,1,0,0,0,238,228,1,0,0,0,238,234,1,0,0,0,239,55,1,0,0,0,
  	240,241,7,4,0,0,241,57,1,0,0,0,19,72,85,93,111,119,123,136,143,161,166,
  	184,197,201,207,216,224,228,232,238
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

duckyParser::Var_declarationsContext* duckyParser::ProgramContext::var_declarations() {
  return getRuleContext<duckyParser::Var_declarationsContext>(0);
}

duckyParser::Func_declarationsContext* duckyParser::ProgramContext::func_declarations() {
  return getRuleContext<duckyParser::Func_declarationsContext>(0);
}

tree::TerminalNode* duckyParser::ProgramContext::MAIN_BLOCK() {
  return getToken(duckyParser::MAIN_BLOCK, 0);
}

tree::TerminalNode* duckyParser::ProgramContext::LPAREN() {
  return getToken(duckyParser::LPAREN, 0);
}

tree::TerminalNode* duckyParser::ProgramContext::RPAREN() {
  return getToken(duckyParser::RPAREN, 0);
}

duckyParser::BlockContext* duckyParser::ProgramContext::block() {
  return getRuleContext<duckyParser::BlockContext>(0);
}

tree::TerminalNode* duckyParser::ProgramContext::END_BLOCK() {
  return getToken(duckyParser::END_BLOCK, 0);
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
    setState(58);
    match(duckyParser::MAIN_FUNC);
    setState(59);
    match(duckyParser::ID);
    setState(60);
    match(duckyParser::SEMI);
    setState(61);
    var_declarations();
    setState(62);
    func_declarations();
    setState(63);
    match(duckyParser::MAIN_BLOCK);
    setState(64);
    match(duckyParser::LPAREN);
    setState(65);
    match(duckyParser::RPAREN);
    setState(66);
    block();
    setState(67);
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
    setState(70); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(69);
      var_decl();
      setState(72); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == duckyParser::VARS);
   
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
    setState(74);
    match(duckyParser::VARS);
    setState(75);
    var_list();
    setState(76);
    match(duckyParser::COLON);
    setState(77);
    data_type();
    setState(78);
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
    setState(80);
    match(duckyParser::ID);
    setState(85);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == duckyParser::COMMA) {
      setState(81);
      match(duckyParser::COMMA);
      setState(82);
      match(duckyParser::ID);
      setState(87);
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
    setState(88);
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
    setState(93);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == duckyParser::FUNCTION) {
      setState(90);
      func_decl();
      setState(95);
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

duckyParser::Func_blockContext* duckyParser::Func_declContext::func_block() {
  return getRuleContext<duckyParser::Func_blockContext>(0);
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
    setState(96);
    match(duckyParser::FUNCTION);
    setState(97);
    match(duckyParser::ID);
    setState(98);
    match(duckyParser::LPAREN);
    setState(99);
    param_list();
    setState(100);
    match(duckyParser::RPAREN);
    setState(101);
    func_block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_blockContext ------------------------------------------------------------------

duckyParser::Func_blockContext::Func_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParser::Func_blockContext::LBRACE() {
  return getToken(duckyParser::LBRACE, 0);
}

duckyParser::Func_var_declarationsContext* duckyParser::Func_blockContext::func_var_declarations() {
  return getRuleContext<duckyParser::Func_var_declarationsContext>(0);
}

duckyParser::StatementsContext* duckyParser::Func_blockContext::statements() {
  return getRuleContext<duckyParser::StatementsContext>(0);
}

tree::TerminalNode* duckyParser::Func_blockContext::RBRACE() {
  return getToken(duckyParser::RBRACE, 0);
}


size_t duckyParser::Func_blockContext::getRuleIndex() const {
  return duckyParser::RuleFunc_block;
}

void duckyParser::Func_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_block(this);
}

void duckyParser::Func_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_block(this);
}

duckyParser::Func_blockContext* duckyParser::func_block() {
  Func_blockContext *_localctx = _tracker.createInstance<Func_blockContext>(_ctx, getState());
  enterRule(_localctx, 14, duckyParser::RuleFunc_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    match(duckyParser::LBRACE);
    setState(104);
    func_var_declarations();
    setState(105);
    statements();
    setState(106);
    match(duckyParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_var_declarationsContext ------------------------------------------------------------------

duckyParser::Func_var_declarationsContext::Func_var_declarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<duckyParser::Var_declContext *> duckyParser::Func_var_declarationsContext::var_decl() {
  return getRuleContexts<duckyParser::Var_declContext>();
}

duckyParser::Var_declContext* duckyParser::Func_var_declarationsContext::var_decl(size_t i) {
  return getRuleContext<duckyParser::Var_declContext>(i);
}


size_t duckyParser::Func_var_declarationsContext::getRuleIndex() const {
  return duckyParser::RuleFunc_var_declarations;
}

void duckyParser::Func_var_declarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_var_declarations(this);
}

void duckyParser::Func_var_declarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_var_declarations(this);
}

duckyParser::Func_var_declarationsContext* duckyParser::func_var_declarations() {
  Func_var_declarationsContext *_localctx = _tracker.createInstance<Func_var_declarationsContext>(_ctx, getState());
  enterRule(_localctx, 16, duckyParser::RuleFunc_var_declarations);
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
    setState(111);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == duckyParser::VARS) {
      setState(108);
      var_decl();
      setState(113);
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

duckyParser::Param_listContext* duckyParser::param_list() {
  Param_listContext *_localctx = _tracker.createInstance<Param_listContext>(_ctx, getState());
  enterRule(_localctx, 18, duckyParser::RuleParam_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(123);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case duckyParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(114);
        param();
        setState(119);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == duckyParser::COMMA) {
          setState(115);
          match(duckyParser::COMMA);
          setState(116);
          param();
          setState(121);
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

duckyParser::ParamContext* duckyParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 20, duckyParser::RuleParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(duckyParser::ID);
    setState(126);
    match(duckyParser::COLON);
    setState(127);
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

duckyParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParser::BlockContext::LBRACE() {
  return getToken(duckyParser::LBRACE, 0);
}

duckyParser::StatementsContext* duckyParser::BlockContext::statements() {
  return getRuleContext<duckyParser::StatementsContext>(0);
}

tree::TerminalNode* duckyParser::BlockContext::RBRACE() {
  return getToken(duckyParser::RBRACE, 0);
}


size_t duckyParser::BlockContext::getRuleIndex() const {
  return duckyParser::RuleBlock;
}

void duckyParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void duckyParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

duckyParser::BlockContext* duckyParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 22, duckyParser::RuleBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    match(duckyParser::LBRACE);
    setState(130);
    statements();
    setState(131);
    match(duckyParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementsContext ------------------------------------------------------------------

duckyParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<duckyParser::StatementContext *> duckyParser::StatementsContext::statement() {
  return getRuleContexts<duckyParser::StatementContext>();
}

duckyParser::StatementContext* duckyParser::StatementsContext::statement(size_t i) {
  return getRuleContext<duckyParser::StatementContext>(i);
}


size_t duckyParser::StatementsContext::getRuleIndex() const {
  return duckyParser::RuleStatements;
}

void duckyParser::StatementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatements(this);
}

void duckyParser::StatementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatements(this);
}

duckyParser::StatementsContext* duckyParser::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 24, duckyParser::RuleStatements);
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
    setState(134); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(133);
      statement();
      setState(136); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 268436352) != 0));
   
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

duckyParser::PrintContext* duckyParser::StatementContext::print() {
  return getRuleContext<duckyParser::PrintContext>(0);
}

duckyParser::LoopContext* duckyParser::StatementContext::loop() {
  return getRuleContext<duckyParser::LoopContext>(0);
}

duckyParser::ConditionContext* duckyParser::StatementContext::condition() {
  return getRuleContext<duckyParser::ConditionContext>(0);
}

duckyParser::Function_callContext* duckyParser::StatementContext::function_call() {
  return getRuleContext<duckyParser::Function_callContext>(0);
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

duckyParser::StatementContext* duckyParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 26, duckyParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(143);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(138);
      assignment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(139);
      print();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(140);
      loop();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(141);
      condition();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(142);
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

duckyParser::AssignmentContext* duckyParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 28, duckyParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    match(duckyParser::ID);
    setState(146);
    match(duckyParser::ASSIGN);
    setState(147);
    expression();
    setState(148);
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

duckyParser::PrintContext* duckyParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 30, duckyParser::RulePrint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    match(duckyParser::PRINT);
    setState(151);
    match(duckyParser::LPAREN);
    setState(152);
    print_list();
    setState(153);
    match(duckyParser::RPAREN);
    setState(154);
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

duckyParser::Print_listContext* duckyParser::print_list() {
  Print_listContext *_localctx = _tracker.createInstance<Print_listContext>(_ctx, getState());
  enterRule(_localctx, 32, duckyParser::RulePrint_list);
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
    setState(156);
    print_item();
    setState(161);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == duckyParser::COMMA) {
      setState(157);
      match(duckyParser::COMMA);
      setState(158);
      print_item();
      setState(163);
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

duckyParser::Print_itemContext* duckyParser::print_item() {
  Print_itemContext *_localctx = _tracker.createInstance<Print_itemContext>(_ctx, getState());
  enterRule(_localctx, 34, duckyParser::RulePrint_item);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(166);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case duckyParser::LPAREN:
      case duckyParser::PLUS:
      case duckyParser::MINUS:
      case duckyParser::ID:
      case duckyParser::INTEGER_CONSTANT:
      case duckyParser::FLOAT_CONSTANT: {
        enterOuterAlt(_localctx, 1);
        setState(164);
        expression();
        break;
      }

      case duckyParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(165);
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

duckyParser::BlockContext* duckyParser::LoopContext::block() {
  return getRuleContext<duckyParser::BlockContext>(0);
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

duckyParser::LoopContext* duckyParser::loop() {
  LoopContext *_localctx = _tracker.createInstance<LoopContext>(_ctx, getState());
  enterRule(_localctx, 36, duckyParser::RuleLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(168);
    match(duckyParser::WHILE);
    setState(169);
    match(duckyParser::LPAREN);
    setState(170);
    expression();
    setState(171);
    match(duckyParser::RPAREN);
    setState(172);
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

duckyParser::BlockContext* duckyParser::ConditionContext::block() {
  return getRuleContext<duckyParser::BlockContext>(0);
}

duckyParser::Else_blockContext* duckyParser::ConditionContext::else_block() {
  return getRuleContext<duckyParser::Else_blockContext>(0);
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

duckyParser::ConditionContext* duckyParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 38, duckyParser::RuleCondition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(174);
    match(duckyParser::IF);
    setState(175);
    match(duckyParser::LPAREN);
    setState(176);
    expression();
    setState(177);
    match(duckyParser::RPAREN);
    setState(178);
    block();
    setState(179);
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

duckyParser::Else_blockContext::Else_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* duckyParser::Else_blockContext::ELSE() {
  return getToken(duckyParser::ELSE, 0);
}

duckyParser::BlockContext* duckyParser::Else_blockContext::block() {
  return getRuleContext<duckyParser::BlockContext>(0);
}


size_t duckyParser::Else_blockContext::getRuleIndex() const {
  return duckyParser::RuleElse_block;
}

void duckyParser::Else_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElse_block(this);
}

void duckyParser::Else_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElse_block(this);
}

duckyParser::Else_blockContext* duckyParser::else_block() {
  Else_blockContext *_localctx = _tracker.createInstance<Else_blockContext>(_ctx, getState());
  enterRule(_localctx, 40, duckyParser::RuleElse_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(184);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case duckyParser::ELSE: {
        enterOuterAlt(_localctx, 1);
        setState(181);
        match(duckyParser::ELSE);
        setState(182);
        block();
        break;
      }

      case duckyParser::PRINT:
      case duckyParser::WHILE:
      case duckyParser::IF:
      case duckyParser::RBRACE:
      case duckyParser::ID: {
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

duckyParser::Function_callContext* duckyParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 42, duckyParser::RuleFunction_call);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
    match(duckyParser::ID);
    setState(187);
    match(duckyParser::LPAREN);
    setState(188);
    arg_list();
    setState(189);
    match(duckyParser::RPAREN);
    setState(190);
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

duckyParser::Arg_listContext* duckyParser::arg_list() {
  Arg_listContext *_localctx = _tracker.createInstance<Arg_listContext>(_ctx, getState());
  enterRule(_localctx, 44, duckyParser::RuleArg_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(201);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case duckyParser::LPAREN:
      case duckyParser::PLUS:
      case duckyParser::MINUS:
      case duckyParser::ID:
      case duckyParser::INTEGER_CONSTANT:
      case duckyParser::FLOAT_CONSTANT: {
        enterOuterAlt(_localctx, 1);
        setState(192);
        expression();
        setState(197);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == duckyParser::COMMA) {
          setState(193);
          match(duckyParser::COMMA);
          setState(194);
          expression();
          setState(199);
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

duckyParser::ExpressionContext* duckyParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 46, duckyParser::RuleExpression);
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
    exp();
    setState(207);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 251658240) != 0)) {
      setState(204);
      comparison_operator();
      setState(205);
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

duckyParser::Comparison_operatorContext* duckyParser::comparison_operator() {
  Comparison_operatorContext *_localctx = _tracker.createInstance<Comparison_operatorContext>(_ctx, getState());
  enterRule(_localctx, 48, duckyParser::RuleComparison_operator);
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
    setState(209);
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

duckyParser::ExpContext* duckyParser::exp() {
  ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, getState());
  enterRule(_localctx, 50, duckyParser::RuleExp);
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
    setState(211);
    term();
    setState(216);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == duckyParser::PLUS

    || _la == duckyParser::MINUS) {
      setState(212);
      _la = _input->LA(1);
      if (!(_la == duckyParser::PLUS

      || _la == duckyParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(213);
      term();
      setState(218);
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

duckyParser::TermContext* duckyParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 52, duckyParser::RuleTerm);
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
    setState(219);
    factor();
    setState(224);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == duckyParser::MULT

    || _la == duckyParser::DIV) {
      setState(220);
      _la = _input->LA(1);
      if (!(_la == duckyParser::MULT

      || _la == duckyParser::DIV)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(221);
      factor();
      setState(226);
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

tree::TerminalNode* duckyParser::FactorContext::LPAREN() {
  return getToken(duckyParser::LPAREN, 0);
}

duckyParser::ExpressionContext* duckyParser::FactorContext::expression() {
  return getRuleContext<duckyParser::ExpressionContext>(0);
}

tree::TerminalNode* duckyParser::FactorContext::RPAREN() {
  return getToken(duckyParser::RPAREN, 0);
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

duckyParser::FactorContext* duckyParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 54, duckyParser::RuleFactor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(238);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case duckyParser::PLUS:
      case duckyParser::MINUS:
      case duckyParser::ID:
      case duckyParser::INTEGER_CONSTANT:
      case duckyParser::FLOAT_CONSTANT: {
        enterOuterAlt(_localctx, 1);
        setState(228);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == duckyParser::PLUS

        || _la == duckyParser::MINUS) {
          setState(227);
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
        setState(232);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case duckyParser::INTEGER_CONSTANT:
          case duckyParser::FLOAT_CONSTANT: {
            setState(230);
            constant();
            break;
          }

          case duckyParser::ID: {
            setState(231);
            match(duckyParser::ID);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

      case duckyParser::LPAREN: {
        enterOuterAlt(_localctx, 2);
        setState(234);
        match(duckyParser::LPAREN);
        setState(235);
        expression();
        setState(236);
        match(duckyParser::RPAREN);
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

duckyParser::ConstantContext* duckyParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 56, duckyParser::RuleConstant);
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
    setState(240);
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
