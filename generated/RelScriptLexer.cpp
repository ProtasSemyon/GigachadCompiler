
// Generated from RelScriptLexer.g4 by ANTLR 4.11.1


#include "RelScriptLexer.h"


#include <queue>
#include <stack>
#include <string>


using namespace antlr4;



using namespace antlr4;

namespace {

struct RelScriptLexerStaticData final {
  RelScriptLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  RelScriptLexerStaticData(const RelScriptLexerStaticData&) = delete;
  RelScriptLexerStaticData(RelScriptLexerStaticData&&) = delete;
  RelScriptLexerStaticData& operator=(const RelScriptLexerStaticData&) = delete;
  RelScriptLexerStaticData& operator=(RelScriptLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag relscriptlexerLexerOnceFlag;
RelScriptLexerStaticData *relscriptlexerLexerStaticData = nullptr;

void relscriptlexerLexerInitialize() {
  assert(relscriptlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<RelScriptLexerStaticData>(
    std::vector<std::string>{
      "Assign", "Comma", "Semi", "Quot", "Return", "BlockStart", "Point", 
      "LParen", "RParen", "LCurly", "RCurly", "LSquare", "RSquare", "Const", 
      "TableType", "ColumnTupe", "RowType", "NumberType", "TupleType", "StringWord", 
      "Plus", "Minus", "Divide", "Multiplication", "Less", "Equal", "More", 
      "LessEqual", "MoreEqual", "While", "For", "Switch", "Case", "Default", 
      "If", "Else", "Break", "ID", "IntNumber", "FloatNumber", "StringLiteral", 
      "UnterminatedStringLiteral", "NEWLINE", "WS", "BlockComment", "LineComment"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "", "'is'", "','", "';'", "'\"'", "'<<'", "'>>'", "'.'", "'('", 
      "')'", "'{'", "'}'", "'['", "']'", "'const'", "'table'", "'column'", 
      "'row'", "'number'", "'tuple'", "'string'", "'+'", "'-'", "'/'", "'*'", 
      "'less'", "'equal'", "'more'", "'lessEqual'", "'moreEqual'", "'while'", 
      "'for'", "'switch'", "'case'", "'default'", "'if'", "'else'", "'break'"
    },
    std::vector<std::string>{
      "", "INDENT", "DEDENT", "Assign", "Comma", "Semi", "Quot", "Return", 
      "BlockStart", "Point", "LParen", "RParen", "LCurly", "RCurly", "LSquare", 
      "RSquare", "Const", "TableType", "ColumnTupe", "RowType", "NumberType", 
      "TupleType", "StringWord", "Plus", "Minus", "Divide", "Multiplication", 
      "Less", "Equal", "More", "LessEqual", "MoreEqual", "While", "For", 
      "Switch", "Case", "Default", "If", "Else", "Break", "ID", "IntNumber", 
      "FloatNumber", "StringLiteral", "UnterminatedStringLiteral", "NEWLINE", 
      "WS", "BlockComment", "LineComment"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,48,333,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,
  	3,1,4,1,4,1,4,1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,
  	11,1,11,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,
  	14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,17,1,
  	17,1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,
  	19,1,19,1,19,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,
  	24,1,24,1,24,1,24,1,25,1,25,1,25,1,25,1,25,1,25,1,26,1,26,1,26,1,26,1,
  	26,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,28,1,28,1,28,1,
  	28,1,28,1,28,1,28,1,28,1,28,1,28,1,29,1,29,1,29,1,29,1,29,1,29,1,30,1,
  	30,1,30,1,30,1,31,1,31,1,31,1,31,1,31,1,31,1,31,1,32,1,32,1,32,1,32,1,
  	32,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,34,1,34,1,34,1,35,1,35,1,
  	35,1,35,1,35,1,36,1,36,1,36,1,36,1,36,1,36,1,37,1,37,5,37,256,8,37,10,
  	37,12,37,259,9,37,1,38,1,38,4,38,263,8,38,11,38,12,38,264,1,38,3,38,268,
  	8,38,1,39,1,39,1,39,4,39,273,8,39,11,39,12,39,274,1,40,1,40,1,40,1,41,
  	1,41,1,41,1,41,1,41,3,41,285,8,41,5,41,287,8,41,10,41,12,41,290,9,41,
  	1,42,3,42,293,8,42,1,42,1,42,3,42,297,8,42,1,42,1,42,1,43,4,43,302,8,
  	43,11,43,12,43,303,1,43,1,43,1,44,1,44,1,44,1,44,1,44,5,44,313,8,44,10,
  	44,12,44,316,9,44,1,44,1,44,1,44,1,44,1,44,1,45,1,45,1,45,1,45,5,45,327,
  	8,45,10,45,12,45,330,9,45,1,45,1,45,1,314,0,46,1,3,3,4,5,5,7,6,9,7,11,
  	8,13,9,15,10,17,11,19,12,21,13,23,14,25,15,27,16,29,17,31,18,33,19,35,
  	20,37,21,39,22,41,23,43,24,45,25,47,26,49,27,51,28,53,29,55,30,57,31,
  	59,32,61,33,63,34,65,35,67,36,69,37,71,38,73,39,75,40,77,41,79,42,81,
  	43,83,44,85,45,87,46,89,47,91,48,1,0,7,3,0,65,90,95,95,97,122,4,0,48,
  	57,65,90,95,95,97,122,1,0,49,57,1,0,48,57,4,0,10,10,13,13,34,34,92,92,
  	2,0,9,9,32,32,2,0,10,10,13,13,345,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,
  	0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,
  	0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,
  	0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,
  	39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,
  	0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,
  	0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,
  	71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,
  	0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,0,87,1,0,0,0,0,89,1,0,0,0,0,91,1,0,0,
  	0,1,93,1,0,0,0,3,96,1,0,0,0,5,98,1,0,0,0,7,100,1,0,0,0,9,102,1,0,0,0,
  	11,105,1,0,0,0,13,108,1,0,0,0,15,110,1,0,0,0,17,112,1,0,0,0,19,114,1,
  	0,0,0,21,116,1,0,0,0,23,118,1,0,0,0,25,120,1,0,0,0,27,122,1,0,0,0,29,
  	128,1,0,0,0,31,134,1,0,0,0,33,141,1,0,0,0,35,145,1,0,0,0,37,152,1,0,0,
  	0,39,158,1,0,0,0,41,165,1,0,0,0,43,167,1,0,0,0,45,169,1,0,0,0,47,171,
  	1,0,0,0,49,173,1,0,0,0,51,178,1,0,0,0,53,184,1,0,0,0,55,189,1,0,0,0,57,
  	199,1,0,0,0,59,209,1,0,0,0,61,215,1,0,0,0,63,219,1,0,0,0,65,226,1,0,0,
  	0,67,231,1,0,0,0,69,239,1,0,0,0,71,242,1,0,0,0,73,247,1,0,0,0,75,253,
  	1,0,0,0,77,267,1,0,0,0,79,269,1,0,0,0,81,276,1,0,0,0,83,279,1,0,0,0,85,
  	296,1,0,0,0,87,301,1,0,0,0,89,307,1,0,0,0,91,322,1,0,0,0,93,94,5,105,
  	0,0,94,95,5,115,0,0,95,2,1,0,0,0,96,97,5,44,0,0,97,4,1,0,0,0,98,99,5,
  	59,0,0,99,6,1,0,0,0,100,101,5,34,0,0,101,8,1,0,0,0,102,103,5,60,0,0,103,
  	104,5,60,0,0,104,10,1,0,0,0,105,106,5,62,0,0,106,107,5,62,0,0,107,12,
  	1,0,0,0,108,109,5,46,0,0,109,14,1,0,0,0,110,111,5,40,0,0,111,16,1,0,0,
  	0,112,113,5,41,0,0,113,18,1,0,0,0,114,115,5,123,0,0,115,20,1,0,0,0,116,
  	117,5,125,0,0,117,22,1,0,0,0,118,119,5,91,0,0,119,24,1,0,0,0,120,121,
  	5,93,0,0,121,26,1,0,0,0,122,123,5,99,0,0,123,124,5,111,0,0,124,125,5,
  	110,0,0,125,126,5,115,0,0,126,127,5,116,0,0,127,28,1,0,0,0,128,129,5,
  	116,0,0,129,130,5,97,0,0,130,131,5,98,0,0,131,132,5,108,0,0,132,133,5,
  	101,0,0,133,30,1,0,0,0,134,135,5,99,0,0,135,136,5,111,0,0,136,137,5,108,
  	0,0,137,138,5,117,0,0,138,139,5,109,0,0,139,140,5,110,0,0,140,32,1,0,
  	0,0,141,142,5,114,0,0,142,143,5,111,0,0,143,144,5,119,0,0,144,34,1,0,
  	0,0,145,146,5,110,0,0,146,147,5,117,0,0,147,148,5,109,0,0,148,149,5,98,
  	0,0,149,150,5,101,0,0,150,151,5,114,0,0,151,36,1,0,0,0,152,153,5,116,
  	0,0,153,154,5,117,0,0,154,155,5,112,0,0,155,156,5,108,0,0,156,157,5,101,
  	0,0,157,38,1,0,0,0,158,159,5,115,0,0,159,160,5,116,0,0,160,161,5,114,
  	0,0,161,162,5,105,0,0,162,163,5,110,0,0,163,164,5,103,0,0,164,40,1,0,
  	0,0,165,166,5,43,0,0,166,42,1,0,0,0,167,168,5,45,0,0,168,44,1,0,0,0,169,
  	170,5,47,0,0,170,46,1,0,0,0,171,172,5,42,0,0,172,48,1,0,0,0,173,174,5,
  	108,0,0,174,175,5,101,0,0,175,176,5,115,0,0,176,177,5,115,0,0,177,50,
  	1,0,0,0,178,179,5,101,0,0,179,180,5,113,0,0,180,181,5,117,0,0,181,182,
  	5,97,0,0,182,183,5,108,0,0,183,52,1,0,0,0,184,185,5,109,0,0,185,186,5,
  	111,0,0,186,187,5,114,0,0,187,188,5,101,0,0,188,54,1,0,0,0,189,190,5,
  	108,0,0,190,191,5,101,0,0,191,192,5,115,0,0,192,193,5,115,0,0,193,194,
  	5,69,0,0,194,195,5,113,0,0,195,196,5,117,0,0,196,197,5,97,0,0,197,198,
  	5,108,0,0,198,56,1,0,0,0,199,200,5,109,0,0,200,201,5,111,0,0,201,202,
  	5,114,0,0,202,203,5,101,0,0,203,204,5,69,0,0,204,205,5,113,0,0,205,206,
  	5,117,0,0,206,207,5,97,0,0,207,208,5,108,0,0,208,58,1,0,0,0,209,210,5,
  	119,0,0,210,211,5,104,0,0,211,212,5,105,0,0,212,213,5,108,0,0,213,214,
  	5,101,0,0,214,60,1,0,0,0,215,216,5,102,0,0,216,217,5,111,0,0,217,218,
  	5,114,0,0,218,62,1,0,0,0,219,220,5,115,0,0,220,221,5,119,0,0,221,222,
  	5,105,0,0,222,223,5,116,0,0,223,224,5,99,0,0,224,225,5,104,0,0,225,64,
  	1,0,0,0,226,227,5,99,0,0,227,228,5,97,0,0,228,229,5,115,0,0,229,230,5,
  	101,0,0,230,66,1,0,0,0,231,232,5,100,0,0,232,233,5,101,0,0,233,234,5,
  	102,0,0,234,235,5,97,0,0,235,236,5,117,0,0,236,237,5,108,0,0,237,238,
  	5,116,0,0,238,68,1,0,0,0,239,240,5,105,0,0,240,241,5,102,0,0,241,70,1,
  	0,0,0,242,243,5,101,0,0,243,244,5,108,0,0,244,245,5,115,0,0,245,246,5,
  	101,0,0,246,72,1,0,0,0,247,248,5,98,0,0,248,249,5,114,0,0,249,250,5,101,
  	0,0,250,251,5,97,0,0,251,252,5,107,0,0,252,74,1,0,0,0,253,257,7,0,0,0,
  	254,256,7,1,0,0,255,254,1,0,0,0,256,259,1,0,0,0,257,255,1,0,0,0,257,258,
  	1,0,0,0,258,76,1,0,0,0,259,257,1,0,0,0,260,262,7,2,0,0,261,263,7,3,0,
  	0,262,261,1,0,0,0,263,264,1,0,0,0,264,262,1,0,0,0,264,265,1,0,0,0,265,
  	268,1,0,0,0,266,268,7,3,0,0,267,260,1,0,0,0,267,266,1,0,0,0,268,78,1,
  	0,0,0,269,270,3,77,38,0,270,272,5,46,0,0,271,273,7,3,0,0,272,271,1,0,
  	0,0,273,274,1,0,0,0,274,272,1,0,0,0,274,275,1,0,0,0,275,80,1,0,0,0,276,
  	277,3,83,41,0,277,278,3,7,3,0,278,82,1,0,0,0,279,288,3,7,3,0,280,287,
  	8,4,0,0,281,284,5,92,0,0,282,285,9,0,0,0,283,285,5,0,0,1,284,282,1,0,
  	0,0,284,283,1,0,0,0,285,287,1,0,0,0,286,280,1,0,0,0,286,281,1,0,0,0,287,
  	290,1,0,0,0,288,286,1,0,0,0,288,289,1,0,0,0,289,84,1,0,0,0,290,288,1,
  	0,0,0,291,293,5,13,0,0,292,291,1,0,0,0,292,293,1,0,0,0,293,294,1,0,0,
  	0,294,297,5,10,0,0,295,297,5,13,0,0,296,292,1,0,0,0,296,295,1,0,0,0,297,
  	298,1,0,0,0,298,299,6,42,0,0,299,86,1,0,0,0,300,302,7,5,0,0,301,300,1,
  	0,0,0,302,303,1,0,0,0,303,301,1,0,0,0,303,304,1,0,0,0,304,305,1,0,0,0,
  	305,306,6,43,1,0,306,88,1,0,0,0,307,308,5,47,0,0,308,309,5,42,0,0,309,
  	314,1,0,0,0,310,313,3,89,44,0,311,313,9,0,0,0,312,310,1,0,0,0,312,311,
  	1,0,0,0,313,316,1,0,0,0,314,315,1,0,0,0,314,312,1,0,0,0,315,317,1,0,0,
  	0,316,314,1,0,0,0,317,318,5,42,0,0,318,319,5,47,0,0,319,320,1,0,0,0,320,
  	321,6,44,2,0,321,90,1,0,0,0,322,323,5,47,0,0,323,324,5,47,0,0,324,328,
  	1,0,0,0,325,327,8,6,0,0,326,325,1,0,0,0,327,330,1,0,0,0,328,326,1,0,0,
  	0,328,329,1,0,0,0,329,331,1,0,0,0,330,328,1,0,0,0,331,332,6,45,2,0,332,
  	92,1,0,0,0,14,0,257,264,267,274,284,286,288,292,296,303,312,314,328,3,
  	1,42,0,1,43,1,0,1,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  relscriptlexerLexerStaticData = staticData.release();
}

}

RelScriptLexer::RelScriptLexer(CharStream *input) : Lexer(input) {
  RelScriptLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *relscriptlexerLexerStaticData->atn, relscriptlexerLexerStaticData->decisionToDFA, relscriptlexerLexerStaticData->sharedContextCache);
}

RelScriptLexer::~RelScriptLexer() {
  delete _interpreter;
}

std::string RelScriptLexer::getGrammarFileName() const {
  return "RelScriptLexer.g4";
}

const std::vector<std::string>& RelScriptLexer::getRuleNames() const {
  return relscriptlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& RelScriptLexer::getChannelNames() const {
  return relscriptlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& RelScriptLexer::getModeNames() const {
  return relscriptlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& RelScriptLexer::getVocabulary() const {
  return relscriptlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView RelScriptLexer::getSerializedATN() const {
  return relscriptlexerLexerStaticData->serializedATN;
}

const atn::ATN& RelScriptLexer::getATN() const {
  return *relscriptlexerLexerStaticData->atn;
}


std::unique_ptr<Token> RelScriptLexer::nextToken() {
  if (!tokenQueue.empty()) {
		Token * token = tokenQueue.front();
		tokenQueue.pop();
    return std::move(std::unique_ptr<Token>(token));
  }
  Token * next = Lexer::nextToken().release();
	if (pendingDent && initialIndentToken == nullptr && NEWLINE != next->getType()) {
		initialIndentToken = next;
	}

	if (next == nullptr || HIDDEN == next->getChannel() || NEWLINE == next->getType()) {
		return std::move(std::unique_ptr<Token>(next));
	}

	if (next->getType() == EOF) {
		indentCount = 0;
		if (!pendingDent) {
			initialIndentToken = next;
			tokenQueue.push(createToken(NEWLINE, "new line", next).release());
		}
	}

	while (indentCount != getSavedIndent()) {
		if (indentCount > getSavedIndent()) {
			indentStack.push(indentCount);
			tokenQueue.push(createToken(INDENT, "indent", next).release());
		} else {
			indentStack.pop();
			tokenQueue.push(createToken(DEDENT, "dedent", next).release());
		}
	}
	pendingDent = false;
	tokenQueue.push(next);
	Token* token = tokenQueue.front();
	tokenQueue.pop();
	return std::move(std::unique_ptr<Token>(token));
}

int RelScriptLexer::getSavedIndent() {
	if (indentStack.empty()) {
		return 0;
	} 

	return indentStack.top();
}

CommonTokenPtr RelScriptLexer::createToken(int type, std::string text, Token * next) {
	CommonTokenPtr token = std::make_unique<CommonToken>(type, text);
	if (initialIndentToken != nullptr) {
		token->setStartIndex(initialIndentToken->getStartIndex());
		token->setLine(initialIndentToken->getLine());
		token->setCharPositionInLine(initialIndentToken->getCharPositionInLine());
		token->setStopIndex(next->getStartIndex() - 1);
	}
	return std::move(token);
}


void RelScriptLexer::action(RuleContext *context, size_t ruleIndex, size_t actionIndex) {
  switch (ruleIndex) {
    case 42: NEWLINEAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 43: WSAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;

  default:
    break;
  }
}

void RelScriptLexer::NEWLINEAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 0: 
    	setText("EOL");
      if (pendingDent) {
        setChannel(HIDDEN);
      }
      pendingDent = true;
      indentCount = 0;
      initialIndentToken = nullptr;
     break;

  default:
    break;
  }
}

void RelScriptLexer::WSAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 1: 
      setChannel(HIDDEN);
      if (pendingDent) { indentCount += getText().size();}
     break;

  default:
    break;
  }
}



void RelScriptLexer::initialize() {
  ::antlr4::internal::call_once(relscriptlexerLexerOnceFlag, relscriptlexerLexerInitialize);
}
