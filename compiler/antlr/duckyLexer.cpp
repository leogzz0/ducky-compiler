
// Generated from ducky.g4 by ANTLR 4.13.2


#include "duckyLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct DuckyLexerStaticData final {
  DuckyLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  DuckyLexerStaticData(const DuckyLexerStaticData&) = delete;
  DuckyLexerStaticData(DuckyLexerStaticData&&) = delete;
  DuckyLexerStaticData& operator=(const DuckyLexerStaticData&) = delete;
  DuckyLexerStaticData& operator=(DuckyLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag duckylexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<DuckyLexerStaticData> duckylexerLexerStaticData = nullptr;

void duckylexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (duckylexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(duckylexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<DuckyLexerStaticData>(
    std::vector<std::string>{
      "MAIN_FUNC", "VARS", "MAIN_BLOCK", "END_BLOCK", "INTEGER_TYPE", "FLOAT_TYPE", 
      "PRINT", "WHILE", "IF", "ELSE", "FUNCTION", "ASSIGN", "SEMI", "COLON", 
      "COMMA", "LPAREN", "RPAREN", "LBRACE", "RBRACE", "PLUS", "MINUS", 
      "MULT", "DIV", "GREATER_THAN", "LESS_THAN", "NOT_EQUAL", "EQUAL", 
      "ID", "INTEGER_CONSTANT", "FLOAT_CONSTANT", "STRING_LITERAL", "WS", 
      "COMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,33,213,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,1,0,1,0,1,0,1,0,1,0,1,0,
  	1,0,1,0,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,4,1,4,1,
  	4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,
  	1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,
  	1,10,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,16,
  	1,16,1,17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,1,23,
  	1,23,1,24,1,24,1,25,1,25,1,25,1,26,1,26,1,26,1,27,1,27,5,27,164,8,27,
  	10,27,12,27,167,9,27,1,28,4,28,170,8,28,11,28,12,28,171,1,29,4,29,175,
  	8,29,11,29,12,29,176,1,29,1,29,4,29,181,8,29,11,29,12,29,182,1,30,1,30,
  	1,30,1,30,5,30,189,8,30,10,30,12,30,192,9,30,1,30,1,30,1,31,4,31,197,
  	8,31,11,31,12,31,198,1,31,1,31,1,32,1,32,1,32,1,32,5,32,207,8,32,10,32,
  	12,32,210,9,32,1,32,1,32,0,0,33,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,
  	9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,
  	21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,
  	65,33,1,0,6,2,0,65,90,97,122,4,0,48,57,65,90,95,95,97,122,1,0,48,57,4,
  	0,10,10,13,13,34,34,92,92,3,0,9,10,13,13,32,32,2,0,10,10,13,13,220,0,
  	1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,
  	0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,
  	23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,
  	0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,
  	0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,
  	55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,
  	0,0,0,1,67,1,0,0,0,3,75,1,0,0,0,5,79,1,0,0,0,7,84,1,0,0,0,9,88,1,0,0,
  	0,11,92,1,0,0,0,13,98,1,0,0,0,15,104,1,0,0,0,17,110,1,0,0,0,19,113,1,
  	0,0,0,21,118,1,0,0,0,23,127,1,0,0,0,25,129,1,0,0,0,27,131,1,0,0,0,29,
  	133,1,0,0,0,31,135,1,0,0,0,33,137,1,0,0,0,35,139,1,0,0,0,37,141,1,0,0,
  	0,39,143,1,0,0,0,41,145,1,0,0,0,43,147,1,0,0,0,45,149,1,0,0,0,47,151,
  	1,0,0,0,49,153,1,0,0,0,51,155,1,0,0,0,53,158,1,0,0,0,55,161,1,0,0,0,57,
  	169,1,0,0,0,59,174,1,0,0,0,61,184,1,0,0,0,63,196,1,0,0,0,65,202,1,0,0,
  	0,67,68,5,112,0,0,68,69,5,114,0,0,69,70,5,111,0,0,70,71,5,103,0,0,71,
  	72,5,114,0,0,72,73,5,97,0,0,73,74,5,109,0,0,74,2,1,0,0,0,75,76,5,118,
  	0,0,76,77,5,97,0,0,77,78,5,114,0,0,78,4,1,0,0,0,79,80,5,109,0,0,80,81,
  	5,97,0,0,81,82,5,105,0,0,82,83,5,110,0,0,83,6,1,0,0,0,84,85,5,101,0,0,
  	85,86,5,110,0,0,86,87,5,100,0,0,87,8,1,0,0,0,88,89,5,105,0,0,89,90,5,
  	110,0,0,90,91,5,116,0,0,91,10,1,0,0,0,92,93,5,102,0,0,93,94,5,108,0,0,
  	94,95,5,111,0,0,95,96,5,97,0,0,96,97,5,116,0,0,97,12,1,0,0,0,98,99,5,
  	112,0,0,99,100,5,114,0,0,100,101,5,105,0,0,101,102,5,110,0,0,102,103,
  	5,116,0,0,103,14,1,0,0,0,104,105,5,119,0,0,105,106,5,104,0,0,106,107,
  	5,105,0,0,107,108,5,108,0,0,108,109,5,101,0,0,109,16,1,0,0,0,110,111,
  	5,105,0,0,111,112,5,102,0,0,112,18,1,0,0,0,113,114,5,101,0,0,114,115,
  	5,108,0,0,115,116,5,115,0,0,116,117,5,101,0,0,117,20,1,0,0,0,118,119,
  	5,102,0,0,119,120,5,117,0,0,120,121,5,110,0,0,121,122,5,99,0,0,122,123,
  	5,116,0,0,123,124,5,105,0,0,124,125,5,111,0,0,125,126,5,110,0,0,126,22,
  	1,0,0,0,127,128,5,61,0,0,128,24,1,0,0,0,129,130,5,59,0,0,130,26,1,0,0,
  	0,131,132,5,58,0,0,132,28,1,0,0,0,133,134,5,44,0,0,134,30,1,0,0,0,135,
  	136,5,40,0,0,136,32,1,0,0,0,137,138,5,41,0,0,138,34,1,0,0,0,139,140,5,
  	123,0,0,140,36,1,0,0,0,141,142,5,125,0,0,142,38,1,0,0,0,143,144,5,43,
  	0,0,144,40,1,0,0,0,145,146,5,45,0,0,146,42,1,0,0,0,147,148,5,42,0,0,148,
  	44,1,0,0,0,149,150,5,47,0,0,150,46,1,0,0,0,151,152,5,62,0,0,152,48,1,
  	0,0,0,153,154,5,60,0,0,154,50,1,0,0,0,155,156,5,33,0,0,156,157,5,61,0,
  	0,157,52,1,0,0,0,158,159,5,61,0,0,159,160,5,61,0,0,160,54,1,0,0,0,161,
  	165,7,0,0,0,162,164,7,1,0,0,163,162,1,0,0,0,164,167,1,0,0,0,165,163,1,
  	0,0,0,165,166,1,0,0,0,166,56,1,0,0,0,167,165,1,0,0,0,168,170,7,2,0,0,
  	169,168,1,0,0,0,170,171,1,0,0,0,171,169,1,0,0,0,171,172,1,0,0,0,172,58,
  	1,0,0,0,173,175,7,2,0,0,174,173,1,0,0,0,175,176,1,0,0,0,176,174,1,0,0,
  	0,176,177,1,0,0,0,177,178,1,0,0,0,178,180,5,46,0,0,179,181,7,2,0,0,180,
  	179,1,0,0,0,181,182,1,0,0,0,182,180,1,0,0,0,182,183,1,0,0,0,183,60,1,
  	0,0,0,184,190,5,34,0,0,185,186,5,92,0,0,186,189,9,0,0,0,187,189,8,3,0,
  	0,188,185,1,0,0,0,188,187,1,0,0,0,189,192,1,0,0,0,190,188,1,0,0,0,190,
  	191,1,0,0,0,191,193,1,0,0,0,192,190,1,0,0,0,193,194,5,34,0,0,194,62,1,
  	0,0,0,195,197,7,4,0,0,196,195,1,0,0,0,197,198,1,0,0,0,198,196,1,0,0,0,
  	198,199,1,0,0,0,199,200,1,0,0,0,200,201,6,31,0,0,201,64,1,0,0,0,202,203,
  	5,47,0,0,203,204,5,47,0,0,204,208,1,0,0,0,205,207,8,5,0,0,206,205,1,0,
  	0,0,207,210,1,0,0,0,208,206,1,0,0,0,208,209,1,0,0,0,209,211,1,0,0,0,210,
  	208,1,0,0,0,211,212,6,32,0,0,212,66,1,0,0,0,9,0,165,171,176,182,188,190,
  	198,208,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  duckylexerLexerStaticData = std::move(staticData);
}

}

duckyLexer::duckyLexer(CharStream *input) : Lexer(input) {
  duckyLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *duckylexerLexerStaticData->atn, duckylexerLexerStaticData->decisionToDFA, duckylexerLexerStaticData->sharedContextCache);
}

duckyLexer::~duckyLexer() {
  delete _interpreter;
}

std::string duckyLexer::getGrammarFileName() const {
  return "ducky.g4";
}

const std::vector<std::string>& duckyLexer::getRuleNames() const {
  return duckylexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& duckyLexer::getChannelNames() const {
  return duckylexerLexerStaticData->channelNames;
}

const std::vector<std::string>& duckyLexer::getModeNames() const {
  return duckylexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& duckyLexer::getVocabulary() const {
  return duckylexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView duckyLexer::getSerializedATN() const {
  return duckylexerLexerStaticData->serializedATN;
}

const atn::ATN& duckyLexer::getATN() const {
  return *duckylexerLexerStaticData->atn;
}




void duckyLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  duckylexerLexerInitialize();
#else
  ::antlr4::internal::call_once(duckylexerLexerOnceFlag, duckylexerLexerInitialize);
#endif
}
