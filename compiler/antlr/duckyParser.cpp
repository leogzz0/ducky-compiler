
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
      "program", "var_declarations", "var_decl_list", "var_decl", "var_list", 
      "data_type", "func_declarations", "func_decl", "param_list", "param", 
      "block", "statements", "statement", "assignment", "print", "print_list", 
      "print_item", "loop", "condition", "else_block", "function_call", 
      "arg_list", "expression", "comparison_operator", "exp", "term", "factor", 
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
  	4,1,34,238,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,1,0,1,
  	0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,3,1,72,8,1,1,2,
  	4,2,75,8,2,11,2,12,2,76,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,5,4,87,8,4,10,
  	4,12,4,90,9,4,1,5,1,5,1,6,1,6,1,6,1,6,3,6,98,8,6,1,7,1,7,1,7,1,7,1,7,
  	1,7,1,7,1,8,1,8,1,8,5,8,110,8,8,10,8,12,8,113,9,8,1,8,3,8,116,8,8,1,9,
  	1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,11,4,11,127,8,11,11,11,12,11,128,1,
  	12,1,12,1,12,1,12,1,12,3,12,136,8,12,1,13,1,13,1,13,1,13,1,13,1,14,1,
  	14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,5,15,152,8,15,10,15,12,15,155,9,
  	15,1,16,1,16,3,16,159,8,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,18,1,
  	18,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,3,19,180,8,19,1,
  	20,1,20,1,20,1,20,1,20,1,20,1,21,1,21,1,21,5,21,191,8,21,10,21,12,21,
  	194,9,21,1,21,3,21,197,8,21,1,22,1,22,1,22,1,22,3,22,203,8,22,1,23,1,
  	23,1,24,1,24,1,24,5,24,210,8,24,10,24,12,24,213,9,24,1,25,1,25,1,25,5,
  	25,218,8,25,10,25,12,25,221,9,25,1,26,3,26,224,8,26,1,26,1,26,3,26,228,
  	8,26,1,26,1,26,1,26,1,26,3,26,234,8,26,1,27,1,27,1,27,0,0,28,0,2,4,6,
  	8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,
  	0,5,1,0,5,6,1,0,25,28,1,0,21,22,1,0,23,24,1,0,30,31,231,0,56,1,0,0,0,
  	2,71,1,0,0,0,4,74,1,0,0,0,6,78,1,0,0,0,8,83,1,0,0,0,10,91,1,0,0,0,12,
  	97,1,0,0,0,14,99,1,0,0,0,16,115,1,0,0,0,18,117,1,0,0,0,20,121,1,0,0,0,
  	22,126,1,0,0,0,24,135,1,0,0,0,26,137,1,0,0,0,28,142,1,0,0,0,30,148,1,
  	0,0,0,32,158,1,0,0,0,34,160,1,0,0,0,36,167,1,0,0,0,38,179,1,0,0,0,40,
  	181,1,0,0,0,42,196,1,0,0,0,44,198,1,0,0,0,46,204,1,0,0,0,48,206,1,0,0,
  	0,50,214,1,0,0,0,52,233,1,0,0,0,54,235,1,0,0,0,56,57,5,1,0,0,57,58,5,
  	29,0,0,58,59,5,14,0,0,59,60,3,2,1,0,60,61,3,12,6,0,61,62,5,3,0,0,62,63,
  	3,20,10,0,63,64,5,4,0,0,64,1,1,0,0,0,65,66,5,2,0,0,66,67,5,19,0,0,67,
  	68,3,4,2,0,68,69,5,20,0,0,69,72,1,0,0,0,70,72,1,0,0,0,71,65,1,0,0,0,71,
  	70,1,0,0,0,72,3,1,0,0,0,73,75,3,6,3,0,74,73,1,0,0,0,75,76,1,0,0,0,76,
  	74,1,0,0,0,76,77,1,0,0,0,77,5,1,0,0,0,78,79,3,8,4,0,79,80,5,15,0,0,80,
  	81,3,10,5,0,81,82,5,14,0,0,82,7,1,0,0,0,83,88,5,29,0,0,84,85,5,16,0,0,
  	85,87,5,29,0,0,86,84,1,0,0,0,87,90,1,0,0,0,88,86,1,0,0,0,88,89,1,0,0,
  	0,89,9,1,0,0,0,90,88,1,0,0,0,91,92,7,0,0,0,92,11,1,0,0,0,93,94,3,14,7,
  	0,94,95,3,12,6,0,95,98,1,0,0,0,96,98,1,0,0,0,97,93,1,0,0,0,97,96,1,0,
  	0,0,98,13,1,0,0,0,99,100,5,12,0,0,100,101,5,29,0,0,101,102,5,17,0,0,102,
  	103,3,16,8,0,103,104,5,18,0,0,104,105,3,20,10,0,105,15,1,0,0,0,106,111,
  	3,18,9,0,107,108,5,16,0,0,108,110,3,18,9,0,109,107,1,0,0,0,110,113,1,
  	0,0,0,111,109,1,0,0,0,111,112,1,0,0,0,112,116,1,0,0,0,113,111,1,0,0,0,
  	114,116,1,0,0,0,115,106,1,0,0,0,115,114,1,0,0,0,116,17,1,0,0,0,117,118,
  	5,29,0,0,118,119,5,15,0,0,119,120,3,10,5,0,120,19,1,0,0,0,121,122,5,19,
  	0,0,122,123,3,22,11,0,123,124,5,20,0,0,124,21,1,0,0,0,125,127,3,24,12,
  	0,126,125,1,0,0,0,127,128,1,0,0,0,128,126,1,0,0,0,128,129,1,0,0,0,129,
  	23,1,0,0,0,130,136,3,26,13,0,131,136,3,28,14,0,132,136,3,34,17,0,133,
  	136,3,36,18,0,134,136,3,40,20,0,135,130,1,0,0,0,135,131,1,0,0,0,135,132,
  	1,0,0,0,135,133,1,0,0,0,135,134,1,0,0,0,136,25,1,0,0,0,137,138,5,29,0,
  	0,138,139,5,13,0,0,139,140,3,44,22,0,140,141,5,14,0,0,141,27,1,0,0,0,
  	142,143,5,7,0,0,143,144,5,17,0,0,144,145,3,30,15,0,145,146,5,18,0,0,146,
  	147,5,14,0,0,147,29,1,0,0,0,148,153,3,32,16,0,149,150,5,16,0,0,150,152,
  	3,32,16,0,151,149,1,0,0,0,152,155,1,0,0,0,153,151,1,0,0,0,153,154,1,0,
  	0,0,154,31,1,0,0,0,155,153,1,0,0,0,156,159,3,44,22,0,157,159,5,32,0,0,
  	158,156,1,0,0,0,158,157,1,0,0,0,159,33,1,0,0,0,160,161,5,8,0,0,161,162,
  	5,17,0,0,162,163,3,44,22,0,163,164,5,18,0,0,164,165,5,9,0,0,165,166,3,
  	20,10,0,166,35,1,0,0,0,167,168,5,10,0,0,168,169,5,17,0,0,169,170,3,44,
  	22,0,170,171,5,18,0,0,171,172,5,9,0,0,172,173,3,20,10,0,173,174,3,38,
  	19,0,174,37,1,0,0,0,175,176,5,11,0,0,176,177,5,9,0,0,177,180,3,20,10,
  	0,178,180,1,0,0,0,179,175,1,0,0,0,179,178,1,0,0,0,180,39,1,0,0,0,181,
  	182,5,29,0,0,182,183,5,17,0,0,183,184,3,42,21,0,184,185,5,18,0,0,185,
  	186,5,14,0,0,186,41,1,0,0,0,187,192,3,44,22,0,188,189,5,16,0,0,189,191,
  	3,44,22,0,190,188,1,0,0,0,191,194,1,0,0,0,192,190,1,0,0,0,192,193,1,0,
  	0,0,193,197,1,0,0,0,194,192,1,0,0,0,195,197,1,0,0,0,196,187,1,0,0,0,196,
  	195,1,0,0,0,197,43,1,0,0,0,198,202,3,48,24,0,199,200,3,46,23,0,200,201,
  	3,48,24,0,201,203,1,0,0,0,202,199,1,0,0,0,202,203,1,0,0,0,203,45,1,0,
  	0,0,204,205,7,1,0,0,205,47,1,0,0,0,206,211,3,50,25,0,207,208,7,2,0,0,
  	208,210,3,50,25,0,209,207,1,0,0,0,210,213,1,0,0,0,211,209,1,0,0,0,211,
  	212,1,0,0,0,212,49,1,0,0,0,213,211,1,0,0,0,214,219,3,52,26,0,215,216,
  	7,3,0,0,216,218,3,52,26,0,217,215,1,0,0,0,218,221,1,0,0,0,219,217,1,0,
  	0,0,219,220,1,0,0,0,220,51,1,0,0,0,221,219,1,0,0,0,222,224,7,2,0,0,223,
  	222,1,0,0,0,223,224,1,0,0,0,224,227,1,0,0,0,225,228,3,54,27,0,226,228,
  	5,29,0,0,227,225,1,0,0,0,227,226,1,0,0,0,228,234,1,0,0,0,229,230,5,17,
  	0,0,230,231,3,44,22,0,231,232,5,18,0,0,232,234,1,0,0,0,233,223,1,0,0,
  	0,233,229,1,0,0,0,234,53,1,0,0,0,235,236,7,4,0,0,236,55,1,0,0,0,19,71,
  	76,88,97,111,115,128,135,153,158,179,192,196,202,211,219,223,227,233
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
    setState(56);
    match(duckyParser::MAIN_FUNC);
    setState(57);
    match(duckyParser::ID);
    setState(58);
    match(duckyParser::SEMI);
    setState(59);
    var_declarations();
    setState(60);
    func_declarations();
    setState(61);
    match(duckyParser::MAIN_BLOCK);
    setState(62);
    block();
    setState(63);
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

tree::TerminalNode* duckyParser::Var_declarationsContext::VARS() {
  return getToken(duckyParser::VARS, 0);
}

tree::TerminalNode* duckyParser::Var_declarationsContext::LBRACE() {
  return getToken(duckyParser::LBRACE, 0);
}

duckyParser::Var_decl_listContext* duckyParser::Var_declarationsContext::var_decl_list() {
  return getRuleContext<duckyParser::Var_decl_listContext>(0);
}

tree::TerminalNode* duckyParser::Var_declarationsContext::RBRACE() {
  return getToken(duckyParser::RBRACE, 0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(71);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case duckyParser::VARS: {
        enterOuterAlt(_localctx, 1);
        setState(65);
        match(duckyParser::VARS);
        setState(66);
        match(duckyParser::LBRACE);
        setState(67);
        var_decl_list();
        setState(68);
        match(duckyParser::RBRACE);
        break;
      }

      case duckyParser::MAIN_BLOCK:
      case duckyParser::FUNCTION: {
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

duckyParser::Var_decl_listContext::Var_decl_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<duckyParser::Var_declContext *> duckyParser::Var_decl_listContext::var_decl() {
  return getRuleContexts<duckyParser::Var_declContext>();
}

duckyParser::Var_declContext* duckyParser::Var_decl_listContext::var_decl(size_t i) {
  return getRuleContext<duckyParser::Var_declContext>(i);
}


size_t duckyParser::Var_decl_listContext::getRuleIndex() const {
  return duckyParser::RuleVar_decl_list;
}

void duckyParser::Var_decl_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_decl_list(this);
}

void duckyParser::Var_decl_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<duckyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_decl_list(this);
}

duckyParser::Var_decl_listContext* duckyParser::var_decl_list() {
  Var_decl_listContext *_localctx = _tracker.createInstance<Var_decl_listContext>(_ctx, getState());
  enterRule(_localctx, 4, duckyParser::RuleVar_decl_list);
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
    setState(74); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(73);
      var_decl();
      setState(76); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == duckyParser::ID);
   
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
  enterRule(_localctx, 6, duckyParser::RuleVar_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    var_list();
    setState(79);
    match(duckyParser::COLON);
    setState(80);
    data_type();
    setState(81);
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
  enterRule(_localctx, 8, duckyParser::RuleVar_list);
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
    match(duckyParser::ID);
    setState(88);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == duckyParser::COMMA) {
      setState(84);
      match(duckyParser::COMMA);
      setState(85);
      match(duckyParser::ID);
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
  enterRule(_localctx, 10, duckyParser::RuleData_type);
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
    setState(91);
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

duckyParser::Func_declContext* duckyParser::Func_declarationsContext::func_decl() {
  return getRuleContext<duckyParser::Func_declContext>(0);
}

duckyParser::Func_declarationsContext* duckyParser::Func_declarationsContext::func_declarations() {
  return getRuleContext<duckyParser::Func_declarationsContext>(0);
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
  enterRule(_localctx, 12, duckyParser::RuleFunc_declarations);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(97);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case duckyParser::FUNCTION: {
        enterOuterAlt(_localctx, 1);
        setState(93);
        func_decl();
        setState(94);
        func_declarations();
        break;
      }

      case duckyParser::MAIN_BLOCK: {
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

duckyParser::BlockContext* duckyParser::Func_declContext::block() {
  return getRuleContext<duckyParser::BlockContext>(0);
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
  enterRule(_localctx, 14, duckyParser::RuleFunc_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(duckyParser::FUNCTION);
    setState(100);
    match(duckyParser::ID);
    setState(101);
    match(duckyParser::LPAREN);
    setState(102);
    param_list();
    setState(103);
    match(duckyParser::RPAREN);
    setState(104);
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
  enterRule(_localctx, 16, duckyParser::RuleParam_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(115);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case duckyParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(106);
        param();
        setState(111);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == duckyParser::COMMA) {
          setState(107);
          match(duckyParser::COMMA);
          setState(108);
          param();
          setState(113);
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
  enterRule(_localctx, 18, duckyParser::RuleParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(duckyParser::ID);
    setState(118);
    match(duckyParser::COLON);
    setState(119);
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
  enterRule(_localctx, 20, duckyParser::RuleBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    match(duckyParser::LBRACE);
    setState(122);
    statements();
    setState(123);
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
  enterRule(_localctx, 22, duckyParser::RuleStatements);
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
    setState(126); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(125);
      statement();
      setState(128); 
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
  enterRule(_localctx, 24, duckyParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(135);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(130);
      assignment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(131);
      print();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(132);
      loop();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(133);
      condition();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(134);
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
  enterRule(_localctx, 26, duckyParser::RuleAssignment);

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
    match(duckyParser::ID);
    setState(138);
    match(duckyParser::ASSIGN);
    setState(139);
    expression();
    setState(140);
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
  enterRule(_localctx, 28, duckyParser::RulePrint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    match(duckyParser::PRINT);
    setState(143);
    match(duckyParser::LPAREN);
    setState(144);
    print_list();
    setState(145);
    match(duckyParser::RPAREN);
    setState(146);
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
  enterRule(_localctx, 30, duckyParser::RulePrint_list);
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
    setState(148);
    print_item();
    setState(153);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == duckyParser::COMMA) {
      setState(149);
      match(duckyParser::COMMA);
      setState(150);
      print_item();
      setState(155);
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
  enterRule(_localctx, 32, duckyParser::RulePrint_item);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(158);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case duckyParser::LPAREN:
      case duckyParser::PLUS:
      case duckyParser::MINUS:
      case duckyParser::ID:
      case duckyParser::INTEGER_CONSTANT:
      case duckyParser::FLOAT_CONSTANT: {
        enterOuterAlt(_localctx, 1);
        setState(156);
        expression();
        break;
      }

      case duckyParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(157);
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

tree::TerminalNode* duckyParser::LoopContext::DO() {
  return getToken(duckyParser::DO, 0);
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
  enterRule(_localctx, 34, duckyParser::RuleLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    match(duckyParser::WHILE);
    setState(161);
    match(duckyParser::LPAREN);
    setState(162);
    expression();
    setState(163);
    match(duckyParser::RPAREN);
    setState(164);
    match(duckyParser::DO);
    setState(165);
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

tree::TerminalNode* duckyParser::ConditionContext::DO() {
  return getToken(duckyParser::DO, 0);
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
  enterRule(_localctx, 36, duckyParser::RuleCondition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    match(duckyParser::IF);
    setState(168);
    match(duckyParser::LPAREN);
    setState(169);
    expression();
    setState(170);
    match(duckyParser::RPAREN);
    setState(171);
    match(duckyParser::DO);
    setState(172);
    block();
    setState(173);
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

tree::TerminalNode* duckyParser::Else_blockContext::DO() {
  return getToken(duckyParser::DO, 0);
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
  enterRule(_localctx, 38, duckyParser::RuleElse_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(179);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case duckyParser::ELSE: {
        enterOuterAlt(_localctx, 1);
        setState(175);
        match(duckyParser::ELSE);
        setState(176);
        match(duckyParser::DO);
        setState(177);
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
  enterRule(_localctx, 40, duckyParser::RuleFunction_call);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(181);
    match(duckyParser::ID);
    setState(182);
    match(duckyParser::LPAREN);
    setState(183);
    arg_list();
    setState(184);
    match(duckyParser::RPAREN);
    setState(185);
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
  enterRule(_localctx, 42, duckyParser::RuleArg_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(196);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case duckyParser::LPAREN:
      case duckyParser::PLUS:
      case duckyParser::MINUS:
      case duckyParser::ID:
      case duckyParser::INTEGER_CONSTANT:
      case duckyParser::FLOAT_CONSTANT: {
        enterOuterAlt(_localctx, 1);
        setState(187);
        expression();
        setState(192);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == duckyParser::COMMA) {
          setState(188);
          match(duckyParser::COMMA);
          setState(189);
          expression();
          setState(194);
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
  enterRule(_localctx, 44, duckyParser::RuleExpression);
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
    setState(198);
    exp();
    setState(202);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 503316480) != 0)) {
      setState(199);
      comparison_operator();
      setState(200);
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
  enterRule(_localctx, 46, duckyParser::RuleComparison_operator);
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
  enterRule(_localctx, 48, duckyParser::RuleExp);
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
    setState(206);
    term();
    setState(211);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == duckyParser::PLUS

    || _la == duckyParser::MINUS) {
      setState(207);
      _la = _input->LA(1);
      if (!(_la == duckyParser::PLUS

      || _la == duckyParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(208);
      term();
      setState(213);
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
  enterRule(_localctx, 50, duckyParser::RuleTerm);
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
    setState(214);
    factor();
    setState(219);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == duckyParser::MULT

    || _la == duckyParser::DIV) {
      setState(215);
      _la = _input->LA(1);
      if (!(_la == duckyParser::MULT

      || _la == duckyParser::DIV)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(216);
      factor();
      setState(221);
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
  enterRule(_localctx, 52, duckyParser::RuleFactor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(233);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case duckyParser::PLUS:
      case duckyParser::MINUS:
      case duckyParser::ID:
      case duckyParser::INTEGER_CONSTANT:
      case duckyParser::FLOAT_CONSTANT: {
        enterOuterAlt(_localctx, 1);
        setState(223);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == duckyParser::PLUS

        || _la == duckyParser::MINUS) {
          setState(222);
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
        setState(227);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case duckyParser::INTEGER_CONSTANT:
          case duckyParser::FLOAT_CONSTANT: {
            setState(225);
            constant();
            break;
          }

          case duckyParser::ID: {
            setState(226);
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
        setState(229);
        match(duckyParser::LPAREN);
        setState(230);
        expression();
        setState(231);
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
  enterRule(_localctx, 54, duckyParser::RuleConstant);
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
    setState(235);
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
