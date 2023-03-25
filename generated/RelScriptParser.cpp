
// Generated from RelScriptParser.g4 by ANTLR 4.11.1


#include "RelScriptParserListener.h"

#include "RelScriptParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct RelScriptParserStaticData final {
  RelScriptParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  RelScriptParserStaticData(const RelScriptParserStaticData&) = delete;
  RelScriptParserStaticData(RelScriptParserStaticData&&) = delete;
  RelScriptParserStaticData& operator=(const RelScriptParserStaticData&) = delete;
  RelScriptParserStaticData& operator=(RelScriptParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag relscriptparserParserOnceFlag;
RelScriptParserStaticData *relscriptparserParserStaticData = nullptr;

void relscriptparserParserInitialize() {
  assert(relscriptparserParserStaticData == nullptr);
  auto staticData = std::make_unique<RelScriptParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "methodUsage", "assignExpression", "number", 
      "atom", "expression", "mulExpression", "logicExpression", "binarySign", 
      "inBracesExpression", "inCurlyExpression", "inSquareExpression", "inParenExpression", 
      "expressionInsideBraces", "functionDeclaration", "block", "returnExpression", 
      "functionDeclarationBraces", "functionDeclarationArgs", "functionUsage", 
      "type", "stringType", "whileStatement", "forStatement", "switchStatement", 
      "caseStatement", "defaultStatement", "ifStatement"
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
  	4,1,48,303,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,1,0,1,0,5,0,61,8,0,10,0,12,0,64,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,3,1,76,8,1,1,1,3,1,79,8,1,1,2,1,2,3,2,83,8,2,1,2,1,2,4,2,87,
  	8,2,11,2,12,2,88,1,3,3,3,92,8,3,1,3,3,3,95,8,3,1,3,1,3,1,3,1,3,1,4,1,
  	4,1,5,1,5,1,5,1,5,1,5,1,5,3,5,109,8,5,1,6,1,6,1,6,1,6,1,6,5,6,116,8,6,
  	10,6,12,6,119,9,6,1,6,1,6,3,6,123,8,6,1,7,1,7,1,7,1,7,1,7,5,7,130,8,7,
  	10,7,12,7,133,9,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,3,8,146,
  	8,8,1,9,1,9,1,10,1,10,1,10,3,10,153,8,10,1,11,1,11,1,11,1,11,1,12,1,12,
  	1,12,1,12,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,3,14,172,8,14,
  	1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,16,5,16,183,8,16,10,16,12,16,
  	186,9,16,1,16,3,16,189,8,16,1,16,1,16,1,17,1,17,3,17,195,8,17,1,17,1,
  	17,1,18,1,18,3,18,201,8,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,
  	19,1,19,3,19,213,8,19,1,20,1,20,1,20,1,20,3,20,219,8,20,1,21,1,21,1,21,
  	1,21,1,21,1,21,3,21,227,8,21,1,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,
  	1,23,1,23,1,23,1,23,1,23,1,24,1,24,1,24,3,24,245,8,24,1,24,1,24,3,24,
  	249,8,24,1,24,1,24,3,24,253,8,24,1,24,1,24,1,24,1,24,1,24,1,25,1,25,1,
  	25,1,25,1,25,1,25,1,25,1,25,5,25,268,8,25,10,25,12,25,271,9,25,1,25,1,
  	25,1,25,1,26,1,26,1,26,3,26,279,8,26,1,26,1,26,1,26,1,26,1,27,1,27,1,
  	27,1,27,1,27,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,3,
  	28,301,8,28,1,28,0,0,29,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,
  	34,36,38,40,42,44,46,48,50,52,54,56,0,2,1,0,41,42,2,0,23,25,27,31,323,
  	0,62,1,0,0,0,2,75,1,0,0,0,4,82,1,0,0,0,6,91,1,0,0,0,8,100,1,0,0,0,10,
  	108,1,0,0,0,12,122,1,0,0,0,14,124,1,0,0,0,16,134,1,0,0,0,18,147,1,0,0,
  	0,20,152,1,0,0,0,22,154,1,0,0,0,24,158,1,0,0,0,26,162,1,0,0,0,28,171,
  	1,0,0,0,30,173,1,0,0,0,32,180,1,0,0,0,34,192,1,0,0,0,36,198,1,0,0,0,38,
  	212,1,0,0,0,40,214,1,0,0,0,42,226,1,0,0,0,44,228,1,0,0,0,46,233,1,0,0,
  	0,48,241,1,0,0,0,50,259,1,0,0,0,52,275,1,0,0,0,54,284,1,0,0,0,56,289,
  	1,0,0,0,58,61,5,45,0,0,59,61,3,2,1,0,60,58,1,0,0,0,60,59,1,0,0,0,61,64,
  	1,0,0,0,62,60,1,0,0,0,62,63,1,0,0,0,63,65,1,0,0,0,64,62,1,0,0,0,65,66,
  	5,0,0,1,66,1,1,0,0,0,67,76,3,6,3,0,68,76,3,30,15,0,69,76,3,40,20,0,70,
  	76,3,4,2,0,71,76,3,46,23,0,72,76,3,48,24,0,73,76,3,50,25,0,74,76,3,56,
  	28,0,75,67,1,0,0,0,75,68,1,0,0,0,75,69,1,0,0,0,75,70,1,0,0,0,75,71,1,
  	0,0,0,75,72,1,0,0,0,75,73,1,0,0,0,75,74,1,0,0,0,76,78,1,0,0,0,77,79,5,
  	45,0,0,78,77,1,0,0,0,78,79,1,0,0,0,79,3,1,0,0,0,80,83,5,40,0,0,81,83,
  	3,40,20,0,82,80,1,0,0,0,82,81,1,0,0,0,83,86,1,0,0,0,84,85,5,9,0,0,85,
  	87,3,40,20,0,86,84,1,0,0,0,87,88,1,0,0,0,88,86,1,0,0,0,88,89,1,0,0,0,
  	89,5,1,0,0,0,90,92,5,16,0,0,91,90,1,0,0,0,91,92,1,0,0,0,92,94,1,0,0,0,
  	93,95,3,42,21,0,94,93,1,0,0,0,94,95,1,0,0,0,95,96,1,0,0,0,96,97,5,40,
  	0,0,97,98,5,3,0,0,98,99,3,12,6,0,99,7,1,0,0,0,100,101,7,0,0,0,101,9,1,
  	0,0,0,102,109,5,40,0,0,103,109,3,8,4,0,104,109,5,43,0,0,105,109,3,40,
  	20,0,106,109,3,4,2,0,107,109,3,20,10,0,108,102,1,0,0,0,108,103,1,0,0,
  	0,108,104,1,0,0,0,108,105,1,0,0,0,108,106,1,0,0,0,108,107,1,0,0,0,109,
  	11,1,0,0,0,110,117,3,14,7,0,111,112,5,23,0,0,112,116,3,14,7,0,113,114,
  	5,24,0,0,114,116,3,14,7,0,115,111,1,0,0,0,115,113,1,0,0,0,116,119,1,0,
  	0,0,117,115,1,0,0,0,117,118,1,0,0,0,118,123,1,0,0,0,119,117,1,0,0,0,120,
  	123,3,16,8,0,121,123,3,42,21,0,122,110,1,0,0,0,122,120,1,0,0,0,122,121,
  	1,0,0,0,123,13,1,0,0,0,124,131,3,10,5,0,125,126,5,26,0,0,126,130,3,10,
  	5,0,127,128,5,25,0,0,128,130,3,10,5,0,129,125,1,0,0,0,129,127,1,0,0,0,
  	130,133,1,0,0,0,131,129,1,0,0,0,131,132,1,0,0,0,132,15,1,0,0,0,133,131,
  	1,0,0,0,134,145,3,10,5,0,135,136,5,28,0,0,136,146,3,10,5,0,137,138,5,
  	29,0,0,138,146,3,10,5,0,139,140,5,27,0,0,140,146,3,10,5,0,141,142,5,31,
  	0,0,142,146,3,10,5,0,143,144,5,30,0,0,144,146,3,10,5,0,145,135,1,0,0,
  	0,145,137,1,0,0,0,145,139,1,0,0,0,145,141,1,0,0,0,145,143,1,0,0,0,145,
  	146,1,0,0,0,146,17,1,0,0,0,147,148,7,1,0,0,148,19,1,0,0,0,149,153,3,22,
  	11,0,150,153,3,24,12,0,151,153,3,26,13,0,152,149,1,0,0,0,152,150,1,0,
  	0,0,152,151,1,0,0,0,153,21,1,0,0,0,154,155,5,12,0,0,155,156,3,28,14,0,
  	156,157,5,13,0,0,157,23,1,0,0,0,158,159,5,14,0,0,159,160,3,28,14,0,160,
  	161,5,15,0,0,161,25,1,0,0,0,162,163,5,10,0,0,163,164,3,28,14,0,164,165,
  	5,11,0,0,165,27,1,0,0,0,166,172,3,12,6,0,167,168,3,12,6,0,168,169,5,4,
  	0,0,169,170,3,28,14,0,170,172,1,0,0,0,171,166,1,0,0,0,171,167,1,0,0,0,
  	172,29,1,0,0,0,173,174,3,42,21,0,174,175,5,40,0,0,175,176,3,36,18,0,176,
  	177,5,8,0,0,177,178,5,45,0,0,178,179,3,32,16,0,179,31,1,0,0,0,180,184,
  	5,1,0,0,181,183,3,2,1,0,182,181,1,0,0,0,183,186,1,0,0,0,184,182,1,0,0,
  	0,184,185,1,0,0,0,185,188,1,0,0,0,186,184,1,0,0,0,187,189,3,34,17,0,188,
  	187,1,0,0,0,188,189,1,0,0,0,189,190,1,0,0,0,190,191,5,2,0,0,191,33,1,
  	0,0,0,192,194,5,7,0,0,193,195,3,12,6,0,194,193,1,0,0,0,194,195,1,0,0,
  	0,195,196,1,0,0,0,196,197,5,45,0,0,197,35,1,0,0,0,198,200,5,10,0,0,199,
  	201,3,38,19,0,200,199,1,0,0,0,200,201,1,0,0,0,201,202,1,0,0,0,202,203,
  	5,11,0,0,203,37,1,0,0,0,204,205,3,42,21,0,205,206,5,40,0,0,206,213,1,
  	0,0,0,207,208,3,42,21,0,208,209,5,40,0,0,209,210,5,4,0,0,210,211,3,38,
  	19,0,211,213,1,0,0,0,212,204,1,0,0,0,212,207,1,0,0,0,213,39,1,0,0,0,214,
  	218,5,40,0,0,215,216,5,10,0,0,216,219,5,11,0,0,217,219,3,26,13,0,218,
  	215,1,0,0,0,218,217,1,0,0,0,219,41,1,0,0,0,220,227,5,17,0,0,221,227,5,
  	18,0,0,222,227,5,19,0,0,223,227,3,44,22,0,224,227,5,20,0,0,225,227,5,
  	21,0,0,226,220,1,0,0,0,226,221,1,0,0,0,226,222,1,0,0,0,226,223,1,0,0,
  	0,226,224,1,0,0,0,226,225,1,0,0,0,227,43,1,0,0,0,228,229,5,22,0,0,229,
  	230,5,10,0,0,230,231,5,41,0,0,231,232,5,11,0,0,232,45,1,0,0,0,233,234,
  	5,32,0,0,234,235,5,10,0,0,235,236,3,16,8,0,236,237,5,11,0,0,237,238,5,
  	8,0,0,238,239,5,45,0,0,239,240,3,32,16,0,240,47,1,0,0,0,241,242,5,33,
  	0,0,242,244,5,10,0,0,243,245,3,6,3,0,244,243,1,0,0,0,244,245,1,0,0,0,
  	245,246,1,0,0,0,246,248,5,5,0,0,247,249,3,16,8,0,248,247,1,0,0,0,248,
  	249,1,0,0,0,249,250,1,0,0,0,250,252,5,5,0,0,251,253,3,6,3,0,252,251,1,
  	0,0,0,252,253,1,0,0,0,253,254,1,0,0,0,254,255,5,11,0,0,255,256,5,8,0,
  	0,256,257,5,45,0,0,257,258,3,32,16,0,258,49,1,0,0,0,259,260,5,34,0,0,
  	260,261,5,10,0,0,261,262,5,40,0,0,262,263,5,11,0,0,263,264,5,8,0,0,264,
  	265,5,45,0,0,265,269,5,1,0,0,266,268,3,52,26,0,267,266,1,0,0,0,268,271,
  	1,0,0,0,269,267,1,0,0,0,269,270,1,0,0,0,270,272,1,0,0,0,271,269,1,0,0,
  	0,272,273,3,54,27,0,273,274,5,2,0,0,274,51,1,0,0,0,275,278,5,35,0,0,276,
  	279,5,43,0,0,277,279,3,8,4,0,278,276,1,0,0,0,278,277,1,0,0,0,279,280,
  	1,0,0,0,280,281,5,8,0,0,281,282,5,45,0,0,282,283,3,32,16,0,283,53,1,0,
  	0,0,284,285,5,36,0,0,285,286,5,8,0,0,286,287,5,45,0,0,287,288,3,32,16,
  	0,288,55,1,0,0,0,289,290,5,37,0,0,290,291,5,10,0,0,291,292,3,16,8,0,292,
  	293,5,11,0,0,293,294,5,8,0,0,294,295,5,45,0,0,295,300,3,32,16,0,296,297,
  	5,38,0,0,297,298,5,8,0,0,298,299,5,45,0,0,299,301,3,32,16,0,300,296,1,
  	0,0,0,300,301,1,0,0,0,301,57,1,0,0,0,30,60,62,75,78,82,88,91,94,108,115,
  	117,122,129,131,145,152,171,184,188,194,200,212,218,226,244,248,252,269,
  	278,300
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  relscriptparserParserStaticData = staticData.release();
}

}

RelScriptParser::RelScriptParser(TokenStream *input) : RelScriptParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

RelScriptParser::RelScriptParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  RelScriptParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *relscriptparserParserStaticData->atn, relscriptparserParserStaticData->decisionToDFA, relscriptparserParserStaticData->sharedContextCache, options);
}

RelScriptParser::~RelScriptParser() {
  delete _interpreter;
}

const atn::ATN& RelScriptParser::getATN() const {
  return *relscriptparserParserStaticData->atn;
}

std::string RelScriptParser::getGrammarFileName() const {
  return "RelScriptParser.g4";
}

const std::vector<std::string>& RelScriptParser::getRuleNames() const {
  return relscriptparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& RelScriptParser::getVocabulary() const {
  return relscriptparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView RelScriptParser::getSerializedATN() const {
  return relscriptparserParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

RelScriptParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RelScriptParser::ProgramContext::EOF() {
  return getToken(RelScriptParser::EOF, 0);
}

std::vector<tree::TerminalNode *> RelScriptParser::ProgramContext::NEWLINE() {
  return getTokens(RelScriptParser::NEWLINE);
}

tree::TerminalNode* RelScriptParser::ProgramContext::NEWLINE(size_t i) {
  return getToken(RelScriptParser::NEWLINE, i);
}

std::vector<RelScriptParser::StatementContext *> RelScriptParser::ProgramContext::statement() {
  return getRuleContexts<RelScriptParser::StatementContext>();
}

RelScriptParser::StatementContext* RelScriptParser::ProgramContext::statement(size_t i) {
  return getRuleContext<RelScriptParser::StatementContext>(i);
}


size_t RelScriptParser::ProgramContext::getRuleIndex() const {
  return RelScriptParser::RuleProgram;
}

void RelScriptParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void RelScriptParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

RelScriptParser::ProgramContext* RelScriptParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, RelScriptParser::RuleProgram);
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
    setState(62);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 36451395764224) != 0) {
      setState(60);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case RelScriptParser::NEWLINE: {
          setState(58);
          match(RelScriptParser::NEWLINE);
          break;
        }

        case RelScriptParser::Const:
        case RelScriptParser::TableType:
        case RelScriptParser::ColumnTupe:
        case RelScriptParser::RowType:
        case RelScriptParser::NumberType:
        case RelScriptParser::TupleType:
        case RelScriptParser::StringWord:
        case RelScriptParser::While:
        case RelScriptParser::For:
        case RelScriptParser::Switch:
        case RelScriptParser::If:
        case RelScriptParser::ID: {
          setState(59);
          statement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(64);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(65);
    match(RelScriptParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

RelScriptParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RelScriptParser::AssignExpressionContext* RelScriptParser::StatementContext::assignExpression() {
  return getRuleContext<RelScriptParser::AssignExpressionContext>(0);
}

RelScriptParser::FunctionDeclarationContext* RelScriptParser::StatementContext::functionDeclaration() {
  return getRuleContext<RelScriptParser::FunctionDeclarationContext>(0);
}

RelScriptParser::FunctionUsageContext* RelScriptParser::StatementContext::functionUsage() {
  return getRuleContext<RelScriptParser::FunctionUsageContext>(0);
}

RelScriptParser::MethodUsageContext* RelScriptParser::StatementContext::methodUsage() {
  return getRuleContext<RelScriptParser::MethodUsageContext>(0);
}

RelScriptParser::WhileStatementContext* RelScriptParser::StatementContext::whileStatement() {
  return getRuleContext<RelScriptParser::WhileStatementContext>(0);
}

RelScriptParser::ForStatementContext* RelScriptParser::StatementContext::forStatement() {
  return getRuleContext<RelScriptParser::ForStatementContext>(0);
}

RelScriptParser::SwitchStatementContext* RelScriptParser::StatementContext::switchStatement() {
  return getRuleContext<RelScriptParser::SwitchStatementContext>(0);
}

RelScriptParser::IfStatementContext* RelScriptParser::StatementContext::ifStatement() {
  return getRuleContext<RelScriptParser::IfStatementContext>(0);
}

tree::TerminalNode* RelScriptParser::StatementContext::NEWLINE() {
  return getToken(RelScriptParser::NEWLINE, 0);
}


size_t RelScriptParser::StatementContext::getRuleIndex() const {
  return RelScriptParser::RuleStatement;
}

void RelScriptParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void RelScriptParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

RelScriptParser::StatementContext* RelScriptParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, RelScriptParser::RuleStatement);

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
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(67);
      assignExpression();
      break;
    }

    case 2: {
      setState(68);
      functionDeclaration();
      break;
    }

    case 3: {
      setState(69);
      functionUsage();
      break;
    }

    case 4: {
      setState(70);
      methodUsage();
      break;
    }

    case 5: {
      setState(71);
      whileStatement();
      break;
    }

    case 6: {
      setState(72);
      forStatement();
      break;
    }

    case 7: {
      setState(73);
      switchStatement();
      break;
    }

    case 8: {
      setState(74);
      ifStatement();
      break;
    }

    default:
      break;
    }
    setState(78);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(77);
      match(RelScriptParser::NEWLINE);
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

//----------------- MethodUsageContext ------------------------------------------------------------------

RelScriptParser::MethodUsageContext::MethodUsageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RelScriptParser::MethodUsageContext::ID() {
  return getToken(RelScriptParser::ID, 0);
}

std::vector<RelScriptParser::FunctionUsageContext *> RelScriptParser::MethodUsageContext::functionUsage() {
  return getRuleContexts<RelScriptParser::FunctionUsageContext>();
}

RelScriptParser::FunctionUsageContext* RelScriptParser::MethodUsageContext::functionUsage(size_t i) {
  return getRuleContext<RelScriptParser::FunctionUsageContext>(i);
}

std::vector<tree::TerminalNode *> RelScriptParser::MethodUsageContext::Point() {
  return getTokens(RelScriptParser::Point);
}

tree::TerminalNode* RelScriptParser::MethodUsageContext::Point(size_t i) {
  return getToken(RelScriptParser::Point, i);
}


size_t RelScriptParser::MethodUsageContext::getRuleIndex() const {
  return RelScriptParser::RuleMethodUsage;
}

void RelScriptParser::MethodUsageContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodUsage(this);
}

void RelScriptParser::MethodUsageContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodUsage(this);
}

RelScriptParser::MethodUsageContext* RelScriptParser::methodUsage() {
  MethodUsageContext *_localctx = _tracker.createInstance<MethodUsageContext>(_ctx, getState());
  enterRule(_localctx, 4, RelScriptParser::RuleMethodUsage);
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
    setState(82);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(80);
      match(RelScriptParser::ID);
      break;
    }

    case 2: {
      setState(81);
      functionUsage();
      break;
    }

    default:
      break;
    }
    setState(86); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(84);
      match(RelScriptParser::Point);
      setState(85);
      functionUsage();
      setState(88); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == RelScriptParser::Point);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignExpressionContext ------------------------------------------------------------------

RelScriptParser::AssignExpressionContext::AssignExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RelScriptParser::AssignExpressionContext::ID() {
  return getToken(RelScriptParser::ID, 0);
}

tree::TerminalNode* RelScriptParser::AssignExpressionContext::Assign() {
  return getToken(RelScriptParser::Assign, 0);
}

RelScriptParser::ExpressionContext* RelScriptParser::AssignExpressionContext::expression() {
  return getRuleContext<RelScriptParser::ExpressionContext>(0);
}

tree::TerminalNode* RelScriptParser::AssignExpressionContext::Const() {
  return getToken(RelScriptParser::Const, 0);
}

RelScriptParser::TypeContext* RelScriptParser::AssignExpressionContext::type() {
  return getRuleContext<RelScriptParser::TypeContext>(0);
}


size_t RelScriptParser::AssignExpressionContext::getRuleIndex() const {
  return RelScriptParser::RuleAssignExpression;
}

void RelScriptParser::AssignExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignExpression(this);
}

void RelScriptParser::AssignExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignExpression(this);
}

RelScriptParser::AssignExpressionContext* RelScriptParser::assignExpression() {
  AssignExpressionContext *_localctx = _tracker.createInstance<AssignExpressionContext>(_ctx, getState());
  enterRule(_localctx, 6, RelScriptParser::RuleAssignExpression);
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
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RelScriptParser::Const) {
      setState(90);
      match(RelScriptParser::Const);
    }
    setState(94);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8257536) != 0) {
      setState(93);
      type();
    }
    setState(96);
    match(RelScriptParser::ID);
    setState(97);
    match(RelScriptParser::Assign);
    setState(98);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

RelScriptParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RelScriptParser::NumberContext::IntNumber() {
  return getToken(RelScriptParser::IntNumber, 0);
}

tree::TerminalNode* RelScriptParser::NumberContext::FloatNumber() {
  return getToken(RelScriptParser::FloatNumber, 0);
}


size_t RelScriptParser::NumberContext::getRuleIndex() const {
  return RelScriptParser::RuleNumber;
}

void RelScriptParser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void RelScriptParser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}

RelScriptParser::NumberContext* RelScriptParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 8, RelScriptParser::RuleNumber);
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
    setState(100);
    _la = _input->LA(1);
    if (!(_la == RelScriptParser::IntNumber

    || _la == RelScriptParser::FloatNumber)) {
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

//----------------- AtomContext ------------------------------------------------------------------

RelScriptParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RelScriptParser::AtomContext::ID() {
  return getToken(RelScriptParser::ID, 0);
}

RelScriptParser::NumberContext* RelScriptParser::AtomContext::number() {
  return getRuleContext<RelScriptParser::NumberContext>(0);
}

tree::TerminalNode* RelScriptParser::AtomContext::StringLiteral() {
  return getToken(RelScriptParser::StringLiteral, 0);
}

RelScriptParser::FunctionUsageContext* RelScriptParser::AtomContext::functionUsage() {
  return getRuleContext<RelScriptParser::FunctionUsageContext>(0);
}

RelScriptParser::MethodUsageContext* RelScriptParser::AtomContext::methodUsage() {
  return getRuleContext<RelScriptParser::MethodUsageContext>(0);
}

RelScriptParser::InBracesExpressionContext* RelScriptParser::AtomContext::inBracesExpression() {
  return getRuleContext<RelScriptParser::InBracesExpressionContext>(0);
}


size_t RelScriptParser::AtomContext::getRuleIndex() const {
  return RelScriptParser::RuleAtom;
}

void RelScriptParser::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}

void RelScriptParser::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}

RelScriptParser::AtomContext* RelScriptParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 10, RelScriptParser::RuleAtom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(108);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(102);
      match(RelScriptParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(103);
      number();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(104);
      match(RelScriptParser::StringLiteral);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(105);
      functionUsage();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(106);
      methodUsage();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(107);
      inBracesExpression();
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

//----------------- ExpressionContext ------------------------------------------------------------------

RelScriptParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RelScriptParser::MulExpressionContext *> RelScriptParser::ExpressionContext::mulExpression() {
  return getRuleContexts<RelScriptParser::MulExpressionContext>();
}

RelScriptParser::MulExpressionContext* RelScriptParser::ExpressionContext::mulExpression(size_t i) {
  return getRuleContext<RelScriptParser::MulExpressionContext>(i);
}

std::vector<tree::TerminalNode *> RelScriptParser::ExpressionContext::Plus() {
  return getTokens(RelScriptParser::Plus);
}

tree::TerminalNode* RelScriptParser::ExpressionContext::Plus(size_t i) {
  return getToken(RelScriptParser::Plus, i);
}

std::vector<tree::TerminalNode *> RelScriptParser::ExpressionContext::Minus() {
  return getTokens(RelScriptParser::Minus);
}

tree::TerminalNode* RelScriptParser::ExpressionContext::Minus(size_t i) {
  return getToken(RelScriptParser::Minus, i);
}

RelScriptParser::LogicExpressionContext* RelScriptParser::ExpressionContext::logicExpression() {
  return getRuleContext<RelScriptParser::LogicExpressionContext>(0);
}

RelScriptParser::TypeContext* RelScriptParser::ExpressionContext::type() {
  return getRuleContext<RelScriptParser::TypeContext>(0);
}


size_t RelScriptParser::ExpressionContext::getRuleIndex() const {
  return RelScriptParser::RuleExpression;
}

void RelScriptParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void RelScriptParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

RelScriptParser::ExpressionContext* RelScriptParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 12, RelScriptParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(122);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(110);
      mulExpression();
      setState(117);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == RelScriptParser::Plus

      || _la == RelScriptParser::Minus) {
        setState(115);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case RelScriptParser::Plus: {
            setState(111);
            match(RelScriptParser::Plus);
            setState(112);
            mulExpression();
            break;
          }

          case RelScriptParser::Minus: {
            setState(113);
            match(RelScriptParser::Minus);
            setState(114);
            mulExpression();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(119);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(120);
      logicExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(121);
      type();
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

//----------------- MulExpressionContext ------------------------------------------------------------------

RelScriptParser::MulExpressionContext::MulExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RelScriptParser::AtomContext *> RelScriptParser::MulExpressionContext::atom() {
  return getRuleContexts<RelScriptParser::AtomContext>();
}

RelScriptParser::AtomContext* RelScriptParser::MulExpressionContext::atom(size_t i) {
  return getRuleContext<RelScriptParser::AtomContext>(i);
}

std::vector<tree::TerminalNode *> RelScriptParser::MulExpressionContext::Multiplication() {
  return getTokens(RelScriptParser::Multiplication);
}

tree::TerminalNode* RelScriptParser::MulExpressionContext::Multiplication(size_t i) {
  return getToken(RelScriptParser::Multiplication, i);
}

std::vector<tree::TerminalNode *> RelScriptParser::MulExpressionContext::Divide() {
  return getTokens(RelScriptParser::Divide);
}

tree::TerminalNode* RelScriptParser::MulExpressionContext::Divide(size_t i) {
  return getToken(RelScriptParser::Divide, i);
}


size_t RelScriptParser::MulExpressionContext::getRuleIndex() const {
  return RelScriptParser::RuleMulExpression;
}

void RelScriptParser::MulExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulExpression(this);
}

void RelScriptParser::MulExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulExpression(this);
}

RelScriptParser::MulExpressionContext* RelScriptParser::mulExpression() {
  MulExpressionContext *_localctx = _tracker.createInstance<MulExpressionContext>(_ctx, getState());
  enterRule(_localctx, 14, RelScriptParser::RuleMulExpression);
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
    atom();
    setState(131);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RelScriptParser::Divide

    || _la == RelScriptParser::Multiplication) {
      setState(129);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case RelScriptParser::Multiplication: {
          setState(125);
          match(RelScriptParser::Multiplication);
          setState(126);
          atom();
          break;
        }

        case RelScriptParser::Divide: {
          setState(127);
          match(RelScriptParser::Divide);
          setState(128);
          atom();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(133);
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

//----------------- LogicExpressionContext ------------------------------------------------------------------

RelScriptParser::LogicExpressionContext::LogicExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RelScriptParser::AtomContext *> RelScriptParser::LogicExpressionContext::atom() {
  return getRuleContexts<RelScriptParser::AtomContext>();
}

RelScriptParser::AtomContext* RelScriptParser::LogicExpressionContext::atom(size_t i) {
  return getRuleContext<RelScriptParser::AtomContext>(i);
}

tree::TerminalNode* RelScriptParser::LogicExpressionContext::Equal() {
  return getToken(RelScriptParser::Equal, 0);
}

tree::TerminalNode* RelScriptParser::LogicExpressionContext::More() {
  return getToken(RelScriptParser::More, 0);
}

tree::TerminalNode* RelScriptParser::LogicExpressionContext::Less() {
  return getToken(RelScriptParser::Less, 0);
}

tree::TerminalNode* RelScriptParser::LogicExpressionContext::MoreEqual() {
  return getToken(RelScriptParser::MoreEqual, 0);
}

tree::TerminalNode* RelScriptParser::LogicExpressionContext::LessEqual() {
  return getToken(RelScriptParser::LessEqual, 0);
}


size_t RelScriptParser::LogicExpressionContext::getRuleIndex() const {
  return RelScriptParser::RuleLogicExpression;
}

void RelScriptParser::LogicExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicExpression(this);
}

void RelScriptParser::LogicExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicExpression(this);
}

RelScriptParser::LogicExpressionContext* RelScriptParser::logicExpression() {
  LogicExpressionContext *_localctx = _tracker.createInstance<LogicExpressionContext>(_ctx, getState());
  enterRule(_localctx, 16, RelScriptParser::RuleLogicExpression);

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
    atom();
    setState(145);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RelScriptParser::Equal: {
        setState(135);
        match(RelScriptParser::Equal);
        setState(136);
        atom();
        break;
      }

      case RelScriptParser::More: {
        setState(137);
        match(RelScriptParser::More);
        setState(138);
        atom();
        break;
      }

      case RelScriptParser::Less: {
        setState(139);
        match(RelScriptParser::Less);
        setState(140);
        atom();
        break;
      }

      case RelScriptParser::MoreEqual: {
        setState(141);
        match(RelScriptParser::MoreEqual);
        setState(142);
        atom();
        break;
      }

      case RelScriptParser::LessEqual: {
        setState(143);
        match(RelScriptParser::LessEqual);
        setState(144);
        atom();
        break;
      }

      case RelScriptParser::EOF:
      case RelScriptParser::DEDENT:
      case RelScriptParser::Comma:
      case RelScriptParser::Semi:
      case RelScriptParser::Return:
      case RelScriptParser::RParen:
      case RelScriptParser::RCurly:
      case RelScriptParser::RSquare:
      case RelScriptParser::Const:
      case RelScriptParser::TableType:
      case RelScriptParser::ColumnTupe:
      case RelScriptParser::RowType:
      case RelScriptParser::NumberType:
      case RelScriptParser::TupleType:
      case RelScriptParser::StringWord:
      case RelScriptParser::While:
      case RelScriptParser::For:
      case RelScriptParser::Switch:
      case RelScriptParser::If:
      case RelScriptParser::ID:
      case RelScriptParser::NEWLINE: {
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

//----------------- BinarySignContext ------------------------------------------------------------------

RelScriptParser::BinarySignContext::BinarySignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RelScriptParser::BinarySignContext::Plus() {
  return getToken(RelScriptParser::Plus, 0);
}

tree::TerminalNode* RelScriptParser::BinarySignContext::Minus() {
  return getToken(RelScriptParser::Minus, 0);
}

tree::TerminalNode* RelScriptParser::BinarySignContext::Divide() {
  return getToken(RelScriptParser::Divide, 0);
}

tree::TerminalNode* RelScriptParser::BinarySignContext::LessEqual() {
  return getToken(RelScriptParser::LessEqual, 0);
}

tree::TerminalNode* RelScriptParser::BinarySignContext::MoreEqual() {
  return getToken(RelScriptParser::MoreEqual, 0);
}

tree::TerminalNode* RelScriptParser::BinarySignContext::Less() {
  return getToken(RelScriptParser::Less, 0);
}

tree::TerminalNode* RelScriptParser::BinarySignContext::More() {
  return getToken(RelScriptParser::More, 0);
}

tree::TerminalNode* RelScriptParser::BinarySignContext::Equal() {
  return getToken(RelScriptParser::Equal, 0);
}


size_t RelScriptParser::BinarySignContext::getRuleIndex() const {
  return RelScriptParser::RuleBinarySign;
}

void RelScriptParser::BinarySignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinarySign(this);
}

void RelScriptParser::BinarySignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinarySign(this);
}

RelScriptParser::BinarySignContext* RelScriptParser::binarySign() {
  BinarySignContext *_localctx = _tracker.createInstance<BinarySignContext>(_ctx, getState());
  enterRule(_localctx, 18, RelScriptParser::RuleBinarySign);
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
    setState(147);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4219469824) != 0)) {
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

//----------------- InBracesExpressionContext ------------------------------------------------------------------

RelScriptParser::InBracesExpressionContext::InBracesExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RelScriptParser::InCurlyExpressionContext* RelScriptParser::InBracesExpressionContext::inCurlyExpression() {
  return getRuleContext<RelScriptParser::InCurlyExpressionContext>(0);
}

RelScriptParser::InSquareExpressionContext* RelScriptParser::InBracesExpressionContext::inSquareExpression() {
  return getRuleContext<RelScriptParser::InSquareExpressionContext>(0);
}

RelScriptParser::InParenExpressionContext* RelScriptParser::InBracesExpressionContext::inParenExpression() {
  return getRuleContext<RelScriptParser::InParenExpressionContext>(0);
}


size_t RelScriptParser::InBracesExpressionContext::getRuleIndex() const {
  return RelScriptParser::RuleInBracesExpression;
}

void RelScriptParser::InBracesExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInBracesExpression(this);
}

void RelScriptParser::InBracesExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInBracesExpression(this);
}

RelScriptParser::InBracesExpressionContext* RelScriptParser::inBracesExpression() {
  InBracesExpressionContext *_localctx = _tracker.createInstance<InBracesExpressionContext>(_ctx, getState());
  enterRule(_localctx, 20, RelScriptParser::RuleInBracesExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(152);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RelScriptParser::LCurly: {
        enterOuterAlt(_localctx, 1);
        setState(149);
        inCurlyExpression();
        break;
      }

      case RelScriptParser::LSquare: {
        enterOuterAlt(_localctx, 2);
        setState(150);
        inSquareExpression();
        break;
      }

      case RelScriptParser::LParen: {
        enterOuterAlt(_localctx, 3);
        setState(151);
        inParenExpression();
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

//----------------- InCurlyExpressionContext ------------------------------------------------------------------

RelScriptParser::InCurlyExpressionContext::InCurlyExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RelScriptParser::InCurlyExpressionContext::LCurly() {
  return getToken(RelScriptParser::LCurly, 0);
}

RelScriptParser::ExpressionInsideBracesContext* RelScriptParser::InCurlyExpressionContext::expressionInsideBraces() {
  return getRuleContext<RelScriptParser::ExpressionInsideBracesContext>(0);
}

tree::TerminalNode* RelScriptParser::InCurlyExpressionContext::RCurly() {
  return getToken(RelScriptParser::RCurly, 0);
}


size_t RelScriptParser::InCurlyExpressionContext::getRuleIndex() const {
  return RelScriptParser::RuleInCurlyExpression;
}

void RelScriptParser::InCurlyExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInCurlyExpression(this);
}

void RelScriptParser::InCurlyExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInCurlyExpression(this);
}

RelScriptParser::InCurlyExpressionContext* RelScriptParser::inCurlyExpression() {
  InCurlyExpressionContext *_localctx = _tracker.createInstance<InCurlyExpressionContext>(_ctx, getState());
  enterRule(_localctx, 22, RelScriptParser::RuleInCurlyExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    match(RelScriptParser::LCurly);
    setState(155);
    expressionInsideBraces();
    setState(156);
    match(RelScriptParser::RCurly);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InSquareExpressionContext ------------------------------------------------------------------

RelScriptParser::InSquareExpressionContext::InSquareExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RelScriptParser::InSquareExpressionContext::LSquare() {
  return getToken(RelScriptParser::LSquare, 0);
}

RelScriptParser::ExpressionInsideBracesContext* RelScriptParser::InSquareExpressionContext::expressionInsideBraces() {
  return getRuleContext<RelScriptParser::ExpressionInsideBracesContext>(0);
}

tree::TerminalNode* RelScriptParser::InSquareExpressionContext::RSquare() {
  return getToken(RelScriptParser::RSquare, 0);
}


size_t RelScriptParser::InSquareExpressionContext::getRuleIndex() const {
  return RelScriptParser::RuleInSquareExpression;
}

void RelScriptParser::InSquareExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInSquareExpression(this);
}

void RelScriptParser::InSquareExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInSquareExpression(this);
}

RelScriptParser::InSquareExpressionContext* RelScriptParser::inSquareExpression() {
  InSquareExpressionContext *_localctx = _tracker.createInstance<InSquareExpressionContext>(_ctx, getState());
  enterRule(_localctx, 24, RelScriptParser::RuleInSquareExpression);

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
    match(RelScriptParser::LSquare);
    setState(159);
    expressionInsideBraces();
    setState(160);
    match(RelScriptParser::RSquare);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InParenExpressionContext ------------------------------------------------------------------

RelScriptParser::InParenExpressionContext::InParenExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RelScriptParser::InParenExpressionContext::LParen() {
  return getToken(RelScriptParser::LParen, 0);
}

RelScriptParser::ExpressionInsideBracesContext* RelScriptParser::InParenExpressionContext::expressionInsideBraces() {
  return getRuleContext<RelScriptParser::ExpressionInsideBracesContext>(0);
}

tree::TerminalNode* RelScriptParser::InParenExpressionContext::RParen() {
  return getToken(RelScriptParser::RParen, 0);
}


size_t RelScriptParser::InParenExpressionContext::getRuleIndex() const {
  return RelScriptParser::RuleInParenExpression;
}

void RelScriptParser::InParenExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInParenExpression(this);
}

void RelScriptParser::InParenExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInParenExpression(this);
}

RelScriptParser::InParenExpressionContext* RelScriptParser::inParenExpression() {
  InParenExpressionContext *_localctx = _tracker.createInstance<InParenExpressionContext>(_ctx, getState());
  enterRule(_localctx, 26, RelScriptParser::RuleInParenExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    match(RelScriptParser::LParen);
    setState(163);
    expressionInsideBraces();
    setState(164);
    match(RelScriptParser::RParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionInsideBracesContext ------------------------------------------------------------------

RelScriptParser::ExpressionInsideBracesContext::ExpressionInsideBracesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RelScriptParser::ExpressionContext* RelScriptParser::ExpressionInsideBracesContext::expression() {
  return getRuleContext<RelScriptParser::ExpressionContext>(0);
}

tree::TerminalNode* RelScriptParser::ExpressionInsideBracesContext::Comma() {
  return getToken(RelScriptParser::Comma, 0);
}

RelScriptParser::ExpressionInsideBracesContext* RelScriptParser::ExpressionInsideBracesContext::expressionInsideBraces() {
  return getRuleContext<RelScriptParser::ExpressionInsideBracesContext>(0);
}


size_t RelScriptParser::ExpressionInsideBracesContext::getRuleIndex() const {
  return RelScriptParser::RuleExpressionInsideBraces;
}

void RelScriptParser::ExpressionInsideBracesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionInsideBraces(this);
}

void RelScriptParser::ExpressionInsideBracesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionInsideBraces(this);
}

RelScriptParser::ExpressionInsideBracesContext* RelScriptParser::expressionInsideBraces() {
  ExpressionInsideBracesContext *_localctx = _tracker.createInstance<ExpressionInsideBracesContext>(_ctx, getState());
  enterRule(_localctx, 28, RelScriptParser::RuleExpressionInsideBraces);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(171);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(166);
      expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(167);
      expression();
      setState(168);
      match(RelScriptParser::Comma);
      setState(169);
      expressionInsideBraces();
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

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

RelScriptParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RelScriptParser::TypeContext* RelScriptParser::FunctionDeclarationContext::type() {
  return getRuleContext<RelScriptParser::TypeContext>(0);
}

tree::TerminalNode* RelScriptParser::FunctionDeclarationContext::ID() {
  return getToken(RelScriptParser::ID, 0);
}

RelScriptParser::FunctionDeclarationBracesContext* RelScriptParser::FunctionDeclarationContext::functionDeclarationBraces() {
  return getRuleContext<RelScriptParser::FunctionDeclarationBracesContext>(0);
}

tree::TerminalNode* RelScriptParser::FunctionDeclarationContext::BlockStart() {
  return getToken(RelScriptParser::BlockStart, 0);
}

tree::TerminalNode* RelScriptParser::FunctionDeclarationContext::NEWLINE() {
  return getToken(RelScriptParser::NEWLINE, 0);
}

RelScriptParser::BlockContext* RelScriptParser::FunctionDeclarationContext::block() {
  return getRuleContext<RelScriptParser::BlockContext>(0);
}


size_t RelScriptParser::FunctionDeclarationContext::getRuleIndex() const {
  return RelScriptParser::RuleFunctionDeclaration;
}

void RelScriptParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void RelScriptParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}

RelScriptParser::FunctionDeclarationContext* RelScriptParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 30, RelScriptParser::RuleFunctionDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
    type();
    setState(174);
    match(RelScriptParser::ID);
    setState(175);
    functionDeclarationBraces();
    setState(176);
    match(RelScriptParser::BlockStart);
    setState(177);
    match(RelScriptParser::NEWLINE);
    setState(178);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

RelScriptParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RelScriptParser::BlockContext::INDENT() {
  return getToken(RelScriptParser::INDENT, 0);
}

tree::TerminalNode* RelScriptParser::BlockContext::DEDENT() {
  return getToken(RelScriptParser::DEDENT, 0);
}

std::vector<RelScriptParser::StatementContext *> RelScriptParser::BlockContext::statement() {
  return getRuleContexts<RelScriptParser::StatementContext>();
}

RelScriptParser::StatementContext* RelScriptParser::BlockContext::statement(size_t i) {
  return getRuleContext<RelScriptParser::StatementContext>(i);
}

RelScriptParser::ReturnExpressionContext* RelScriptParser::BlockContext::returnExpression() {
  return getRuleContext<RelScriptParser::ReturnExpressionContext>(0);
}


size_t RelScriptParser::BlockContext::getRuleIndex() const {
  return RelScriptParser::RuleBlock;
}

void RelScriptParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void RelScriptParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

RelScriptParser::BlockContext* RelScriptParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 32, RelScriptParser::RuleBlock);
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
    setState(180);
    match(RelScriptParser::INDENT);
    setState(184);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1267023675392) != 0) {
      setState(181);
      statement();
      setState(186);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(188);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RelScriptParser::Return) {
      setState(187);
      returnExpression();
    }
    setState(190);
    match(RelScriptParser::DEDENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnExpressionContext ------------------------------------------------------------------

RelScriptParser::ReturnExpressionContext::ReturnExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RelScriptParser::ReturnExpressionContext::Return() {
  return getToken(RelScriptParser::Return, 0);
}

tree::TerminalNode* RelScriptParser::ReturnExpressionContext::NEWLINE() {
  return getToken(RelScriptParser::NEWLINE, 0);
}

RelScriptParser::ExpressionContext* RelScriptParser::ReturnExpressionContext::expression() {
  return getRuleContext<RelScriptParser::ExpressionContext>(0);
}


size_t RelScriptParser::ReturnExpressionContext::getRuleIndex() const {
  return RelScriptParser::RuleReturnExpression;
}

void RelScriptParser::ReturnExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnExpression(this);
}

void RelScriptParser::ReturnExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnExpression(this);
}

RelScriptParser::ReturnExpressionContext* RelScriptParser::returnExpression() {
  ReturnExpressionContext *_localctx = _tracker.createInstance<ReturnExpressionContext>(_ctx, getState());
  enterRule(_localctx, 34, RelScriptParser::RuleReturnExpression);
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
    setState(192);
    match(RelScriptParser::Return);
    setState(194);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16492682695680) != 0) {
      setState(193);
      expression();
    }
    setState(196);
    match(RelScriptParser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationBracesContext ------------------------------------------------------------------

RelScriptParser::FunctionDeclarationBracesContext::FunctionDeclarationBracesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RelScriptParser::FunctionDeclarationBracesContext::LParen() {
  return getToken(RelScriptParser::LParen, 0);
}

tree::TerminalNode* RelScriptParser::FunctionDeclarationBracesContext::RParen() {
  return getToken(RelScriptParser::RParen, 0);
}

RelScriptParser::FunctionDeclarationArgsContext* RelScriptParser::FunctionDeclarationBracesContext::functionDeclarationArgs() {
  return getRuleContext<RelScriptParser::FunctionDeclarationArgsContext>(0);
}


size_t RelScriptParser::FunctionDeclarationBracesContext::getRuleIndex() const {
  return RelScriptParser::RuleFunctionDeclarationBraces;
}

void RelScriptParser::FunctionDeclarationBracesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclarationBraces(this);
}

void RelScriptParser::FunctionDeclarationBracesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclarationBraces(this);
}

RelScriptParser::FunctionDeclarationBracesContext* RelScriptParser::functionDeclarationBraces() {
  FunctionDeclarationBracesContext *_localctx = _tracker.createInstance<FunctionDeclarationBracesContext>(_ctx, getState());
  enterRule(_localctx, 36, RelScriptParser::RuleFunctionDeclarationBraces);
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
    match(RelScriptParser::LParen);
    setState(200);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8257536) != 0) {
      setState(199);
      functionDeclarationArgs();
    }
    setState(202);
    match(RelScriptParser::RParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationArgsContext ------------------------------------------------------------------

RelScriptParser::FunctionDeclarationArgsContext::FunctionDeclarationArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RelScriptParser::TypeContext* RelScriptParser::FunctionDeclarationArgsContext::type() {
  return getRuleContext<RelScriptParser::TypeContext>(0);
}

tree::TerminalNode* RelScriptParser::FunctionDeclarationArgsContext::ID() {
  return getToken(RelScriptParser::ID, 0);
}

tree::TerminalNode* RelScriptParser::FunctionDeclarationArgsContext::Comma() {
  return getToken(RelScriptParser::Comma, 0);
}

RelScriptParser::FunctionDeclarationArgsContext* RelScriptParser::FunctionDeclarationArgsContext::functionDeclarationArgs() {
  return getRuleContext<RelScriptParser::FunctionDeclarationArgsContext>(0);
}


size_t RelScriptParser::FunctionDeclarationArgsContext::getRuleIndex() const {
  return RelScriptParser::RuleFunctionDeclarationArgs;
}

void RelScriptParser::FunctionDeclarationArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclarationArgs(this);
}

void RelScriptParser::FunctionDeclarationArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclarationArgs(this);
}

RelScriptParser::FunctionDeclarationArgsContext* RelScriptParser::functionDeclarationArgs() {
  FunctionDeclarationArgsContext *_localctx = _tracker.createInstance<FunctionDeclarationArgsContext>(_ctx, getState());
  enterRule(_localctx, 38, RelScriptParser::RuleFunctionDeclarationArgs);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(212);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(204);
      type();
      setState(205);
      match(RelScriptParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(207);
      type();
      setState(208);
      match(RelScriptParser::ID);
      setState(209);
      match(RelScriptParser::Comma);
      setState(210);
      functionDeclarationArgs();
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

//----------------- FunctionUsageContext ------------------------------------------------------------------

RelScriptParser::FunctionUsageContext::FunctionUsageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RelScriptParser::FunctionUsageContext::ID() {
  return getToken(RelScriptParser::ID, 0);
}

tree::TerminalNode* RelScriptParser::FunctionUsageContext::LParen() {
  return getToken(RelScriptParser::LParen, 0);
}

tree::TerminalNode* RelScriptParser::FunctionUsageContext::RParen() {
  return getToken(RelScriptParser::RParen, 0);
}

RelScriptParser::InParenExpressionContext* RelScriptParser::FunctionUsageContext::inParenExpression() {
  return getRuleContext<RelScriptParser::InParenExpressionContext>(0);
}


size_t RelScriptParser::FunctionUsageContext::getRuleIndex() const {
  return RelScriptParser::RuleFunctionUsage;
}

void RelScriptParser::FunctionUsageContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionUsage(this);
}

void RelScriptParser::FunctionUsageContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionUsage(this);
}

RelScriptParser::FunctionUsageContext* RelScriptParser::functionUsage() {
  FunctionUsageContext *_localctx = _tracker.createInstance<FunctionUsageContext>(_ctx, getState());
  enterRule(_localctx, 40, RelScriptParser::RuleFunctionUsage);

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
    match(RelScriptParser::ID);
    setState(218);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(215);
      match(RelScriptParser::LParen);
      setState(216);
      match(RelScriptParser::RParen);
      break;
    }

    case 2: {
      setState(217);
      inParenExpression();
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

//----------------- TypeContext ------------------------------------------------------------------

RelScriptParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RelScriptParser::TypeContext::TableType() {
  return getToken(RelScriptParser::TableType, 0);
}

tree::TerminalNode* RelScriptParser::TypeContext::ColumnTupe() {
  return getToken(RelScriptParser::ColumnTupe, 0);
}

tree::TerminalNode* RelScriptParser::TypeContext::RowType() {
  return getToken(RelScriptParser::RowType, 0);
}

RelScriptParser::StringTypeContext* RelScriptParser::TypeContext::stringType() {
  return getRuleContext<RelScriptParser::StringTypeContext>(0);
}

tree::TerminalNode* RelScriptParser::TypeContext::NumberType() {
  return getToken(RelScriptParser::NumberType, 0);
}

tree::TerminalNode* RelScriptParser::TypeContext::TupleType() {
  return getToken(RelScriptParser::TupleType, 0);
}


size_t RelScriptParser::TypeContext::getRuleIndex() const {
  return RelScriptParser::RuleType;
}

void RelScriptParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void RelScriptParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

RelScriptParser::TypeContext* RelScriptParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 42, RelScriptParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(226);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RelScriptParser::TableType: {
        enterOuterAlt(_localctx, 1);
        setState(220);
        match(RelScriptParser::TableType);
        break;
      }

      case RelScriptParser::ColumnTupe: {
        enterOuterAlt(_localctx, 2);
        setState(221);
        match(RelScriptParser::ColumnTupe);
        break;
      }

      case RelScriptParser::RowType: {
        enterOuterAlt(_localctx, 3);
        setState(222);
        match(RelScriptParser::RowType);
        break;
      }

      case RelScriptParser::StringWord: {
        enterOuterAlt(_localctx, 4);
        setState(223);
        stringType();
        break;
      }

      case RelScriptParser::NumberType: {
        enterOuterAlt(_localctx, 5);
        setState(224);
        match(RelScriptParser::NumberType);
        break;
      }

      case RelScriptParser::TupleType: {
        enterOuterAlt(_localctx, 6);
        setState(225);
        match(RelScriptParser::TupleType);
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

//----------------- StringTypeContext ------------------------------------------------------------------

RelScriptParser::StringTypeContext::StringTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RelScriptParser::StringTypeContext::StringWord() {
  return getToken(RelScriptParser::StringWord, 0);
}

tree::TerminalNode* RelScriptParser::StringTypeContext::LParen() {
  return getToken(RelScriptParser::LParen, 0);
}

tree::TerminalNode* RelScriptParser::StringTypeContext::IntNumber() {
  return getToken(RelScriptParser::IntNumber, 0);
}

tree::TerminalNode* RelScriptParser::StringTypeContext::RParen() {
  return getToken(RelScriptParser::RParen, 0);
}


size_t RelScriptParser::StringTypeContext::getRuleIndex() const {
  return RelScriptParser::RuleStringType;
}

void RelScriptParser::StringTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringType(this);
}

void RelScriptParser::StringTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringType(this);
}

RelScriptParser::StringTypeContext* RelScriptParser::stringType() {
  StringTypeContext *_localctx = _tracker.createInstance<StringTypeContext>(_ctx, getState());
  enterRule(_localctx, 44, RelScriptParser::RuleStringType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(228);
    match(RelScriptParser::StringWord);
    setState(229);
    match(RelScriptParser::LParen);
    setState(230);
    match(RelScriptParser::IntNumber);
    setState(231);
    match(RelScriptParser::RParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

RelScriptParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RelScriptParser::WhileStatementContext::While() {
  return getToken(RelScriptParser::While, 0);
}

tree::TerminalNode* RelScriptParser::WhileStatementContext::LParen() {
  return getToken(RelScriptParser::LParen, 0);
}

RelScriptParser::LogicExpressionContext* RelScriptParser::WhileStatementContext::logicExpression() {
  return getRuleContext<RelScriptParser::LogicExpressionContext>(0);
}

tree::TerminalNode* RelScriptParser::WhileStatementContext::RParen() {
  return getToken(RelScriptParser::RParen, 0);
}

tree::TerminalNode* RelScriptParser::WhileStatementContext::BlockStart() {
  return getToken(RelScriptParser::BlockStart, 0);
}

tree::TerminalNode* RelScriptParser::WhileStatementContext::NEWLINE() {
  return getToken(RelScriptParser::NEWLINE, 0);
}

RelScriptParser::BlockContext* RelScriptParser::WhileStatementContext::block() {
  return getRuleContext<RelScriptParser::BlockContext>(0);
}


size_t RelScriptParser::WhileStatementContext::getRuleIndex() const {
  return RelScriptParser::RuleWhileStatement;
}

void RelScriptParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void RelScriptParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}

RelScriptParser::WhileStatementContext* RelScriptParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 46, RelScriptParser::RuleWhileStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    match(RelScriptParser::While);
    setState(234);
    match(RelScriptParser::LParen);
    setState(235);
    logicExpression();
    setState(236);
    match(RelScriptParser::RParen);
    setState(237);
    match(RelScriptParser::BlockStart);
    setState(238);
    match(RelScriptParser::NEWLINE);
    setState(239);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

RelScriptParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RelScriptParser::ForStatementContext::For() {
  return getToken(RelScriptParser::For, 0);
}

tree::TerminalNode* RelScriptParser::ForStatementContext::LParen() {
  return getToken(RelScriptParser::LParen, 0);
}

std::vector<tree::TerminalNode *> RelScriptParser::ForStatementContext::Semi() {
  return getTokens(RelScriptParser::Semi);
}

tree::TerminalNode* RelScriptParser::ForStatementContext::Semi(size_t i) {
  return getToken(RelScriptParser::Semi, i);
}

tree::TerminalNode* RelScriptParser::ForStatementContext::RParen() {
  return getToken(RelScriptParser::RParen, 0);
}

tree::TerminalNode* RelScriptParser::ForStatementContext::BlockStart() {
  return getToken(RelScriptParser::BlockStart, 0);
}

tree::TerminalNode* RelScriptParser::ForStatementContext::NEWLINE() {
  return getToken(RelScriptParser::NEWLINE, 0);
}

RelScriptParser::BlockContext* RelScriptParser::ForStatementContext::block() {
  return getRuleContext<RelScriptParser::BlockContext>(0);
}

std::vector<RelScriptParser::AssignExpressionContext *> RelScriptParser::ForStatementContext::assignExpression() {
  return getRuleContexts<RelScriptParser::AssignExpressionContext>();
}

RelScriptParser::AssignExpressionContext* RelScriptParser::ForStatementContext::assignExpression(size_t i) {
  return getRuleContext<RelScriptParser::AssignExpressionContext>(i);
}

RelScriptParser::LogicExpressionContext* RelScriptParser::ForStatementContext::logicExpression() {
  return getRuleContext<RelScriptParser::LogicExpressionContext>(0);
}


size_t RelScriptParser::ForStatementContext::getRuleIndex() const {
  return RelScriptParser::RuleForStatement;
}

void RelScriptParser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}

void RelScriptParser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}

RelScriptParser::ForStatementContext* RelScriptParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 48, RelScriptParser::RuleForStatement);
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
    setState(241);
    match(RelScriptParser::For);
    setState(242);
    match(RelScriptParser::LParen);
    setState(244);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1099519950848) != 0) {
      setState(243);
      assignExpression();
    }
    setState(246);
    match(RelScriptParser::Semi);
    setState(248);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16492674438144) != 0) {
      setState(247);
      logicExpression();
    }
    setState(250);
    match(RelScriptParser::Semi);
    setState(252);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1099519950848) != 0) {
      setState(251);
      assignExpression();
    }
    setState(254);
    match(RelScriptParser::RParen);
    setState(255);
    match(RelScriptParser::BlockStart);
    setState(256);
    match(RelScriptParser::NEWLINE);
    setState(257);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchStatementContext ------------------------------------------------------------------

RelScriptParser::SwitchStatementContext::SwitchStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RelScriptParser::SwitchStatementContext::Switch() {
  return getToken(RelScriptParser::Switch, 0);
}

tree::TerminalNode* RelScriptParser::SwitchStatementContext::LParen() {
  return getToken(RelScriptParser::LParen, 0);
}

tree::TerminalNode* RelScriptParser::SwitchStatementContext::ID() {
  return getToken(RelScriptParser::ID, 0);
}

tree::TerminalNode* RelScriptParser::SwitchStatementContext::RParen() {
  return getToken(RelScriptParser::RParen, 0);
}

tree::TerminalNode* RelScriptParser::SwitchStatementContext::BlockStart() {
  return getToken(RelScriptParser::BlockStart, 0);
}

tree::TerminalNode* RelScriptParser::SwitchStatementContext::NEWLINE() {
  return getToken(RelScriptParser::NEWLINE, 0);
}

tree::TerminalNode* RelScriptParser::SwitchStatementContext::INDENT() {
  return getToken(RelScriptParser::INDENT, 0);
}

RelScriptParser::DefaultStatementContext* RelScriptParser::SwitchStatementContext::defaultStatement() {
  return getRuleContext<RelScriptParser::DefaultStatementContext>(0);
}

tree::TerminalNode* RelScriptParser::SwitchStatementContext::DEDENT() {
  return getToken(RelScriptParser::DEDENT, 0);
}

std::vector<RelScriptParser::CaseStatementContext *> RelScriptParser::SwitchStatementContext::caseStatement() {
  return getRuleContexts<RelScriptParser::CaseStatementContext>();
}

RelScriptParser::CaseStatementContext* RelScriptParser::SwitchStatementContext::caseStatement(size_t i) {
  return getRuleContext<RelScriptParser::CaseStatementContext>(i);
}


size_t RelScriptParser::SwitchStatementContext::getRuleIndex() const {
  return RelScriptParser::RuleSwitchStatement;
}

void RelScriptParser::SwitchStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchStatement(this);
}

void RelScriptParser::SwitchStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchStatement(this);
}

RelScriptParser::SwitchStatementContext* RelScriptParser::switchStatement() {
  SwitchStatementContext *_localctx = _tracker.createInstance<SwitchStatementContext>(_ctx, getState());
  enterRule(_localctx, 50, RelScriptParser::RuleSwitchStatement);
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
    setState(259);
    match(RelScriptParser::Switch);
    setState(260);
    match(RelScriptParser::LParen);
    setState(261);
    match(RelScriptParser::ID);
    setState(262);
    match(RelScriptParser::RParen);
    setState(263);
    match(RelScriptParser::BlockStart);
    setState(264);
    match(RelScriptParser::NEWLINE);
    setState(265);
    match(RelScriptParser::INDENT);
    setState(269);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RelScriptParser::Case) {
      setState(266);
      caseStatement();
      setState(271);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(272);
    defaultStatement();
    setState(273);
    match(RelScriptParser::DEDENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseStatementContext ------------------------------------------------------------------

RelScriptParser::CaseStatementContext::CaseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RelScriptParser::CaseStatementContext::Case() {
  return getToken(RelScriptParser::Case, 0);
}

tree::TerminalNode* RelScriptParser::CaseStatementContext::BlockStart() {
  return getToken(RelScriptParser::BlockStart, 0);
}

tree::TerminalNode* RelScriptParser::CaseStatementContext::NEWLINE() {
  return getToken(RelScriptParser::NEWLINE, 0);
}

RelScriptParser::BlockContext* RelScriptParser::CaseStatementContext::block() {
  return getRuleContext<RelScriptParser::BlockContext>(0);
}

tree::TerminalNode* RelScriptParser::CaseStatementContext::StringLiteral() {
  return getToken(RelScriptParser::StringLiteral, 0);
}

RelScriptParser::NumberContext* RelScriptParser::CaseStatementContext::number() {
  return getRuleContext<RelScriptParser::NumberContext>(0);
}


size_t RelScriptParser::CaseStatementContext::getRuleIndex() const {
  return RelScriptParser::RuleCaseStatement;
}

void RelScriptParser::CaseStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaseStatement(this);
}

void RelScriptParser::CaseStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaseStatement(this);
}

RelScriptParser::CaseStatementContext* RelScriptParser::caseStatement() {
  CaseStatementContext *_localctx = _tracker.createInstance<CaseStatementContext>(_ctx, getState());
  enterRule(_localctx, 52, RelScriptParser::RuleCaseStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(275);
    match(RelScriptParser::Case);
    setState(278);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RelScriptParser::StringLiteral: {
        setState(276);
        match(RelScriptParser::StringLiteral);
        break;
      }

      case RelScriptParser::IntNumber:
      case RelScriptParser::FloatNumber: {
        setState(277);
        number();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(280);
    match(RelScriptParser::BlockStart);
    setState(281);
    match(RelScriptParser::NEWLINE);
    setState(282);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefaultStatementContext ------------------------------------------------------------------

RelScriptParser::DefaultStatementContext::DefaultStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RelScriptParser::DefaultStatementContext::Default() {
  return getToken(RelScriptParser::Default, 0);
}

tree::TerminalNode* RelScriptParser::DefaultStatementContext::BlockStart() {
  return getToken(RelScriptParser::BlockStart, 0);
}

tree::TerminalNode* RelScriptParser::DefaultStatementContext::NEWLINE() {
  return getToken(RelScriptParser::NEWLINE, 0);
}

RelScriptParser::BlockContext* RelScriptParser::DefaultStatementContext::block() {
  return getRuleContext<RelScriptParser::BlockContext>(0);
}


size_t RelScriptParser::DefaultStatementContext::getRuleIndex() const {
  return RelScriptParser::RuleDefaultStatement;
}

void RelScriptParser::DefaultStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultStatement(this);
}

void RelScriptParser::DefaultStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultStatement(this);
}

RelScriptParser::DefaultStatementContext* RelScriptParser::defaultStatement() {
  DefaultStatementContext *_localctx = _tracker.createInstance<DefaultStatementContext>(_ctx, getState());
  enterRule(_localctx, 54, RelScriptParser::RuleDefaultStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
    match(RelScriptParser::Default);
    setState(285);
    match(RelScriptParser::BlockStart);
    setState(286);
    match(RelScriptParser::NEWLINE);
    setState(287);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

RelScriptParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RelScriptParser::IfStatementContext::If() {
  return getToken(RelScriptParser::If, 0);
}

tree::TerminalNode* RelScriptParser::IfStatementContext::LParen() {
  return getToken(RelScriptParser::LParen, 0);
}

RelScriptParser::LogicExpressionContext* RelScriptParser::IfStatementContext::logicExpression() {
  return getRuleContext<RelScriptParser::LogicExpressionContext>(0);
}

tree::TerminalNode* RelScriptParser::IfStatementContext::RParen() {
  return getToken(RelScriptParser::RParen, 0);
}

std::vector<tree::TerminalNode *> RelScriptParser::IfStatementContext::BlockStart() {
  return getTokens(RelScriptParser::BlockStart);
}

tree::TerminalNode* RelScriptParser::IfStatementContext::BlockStart(size_t i) {
  return getToken(RelScriptParser::BlockStart, i);
}

std::vector<tree::TerminalNode *> RelScriptParser::IfStatementContext::NEWLINE() {
  return getTokens(RelScriptParser::NEWLINE);
}

tree::TerminalNode* RelScriptParser::IfStatementContext::NEWLINE(size_t i) {
  return getToken(RelScriptParser::NEWLINE, i);
}

std::vector<RelScriptParser::BlockContext *> RelScriptParser::IfStatementContext::block() {
  return getRuleContexts<RelScriptParser::BlockContext>();
}

RelScriptParser::BlockContext* RelScriptParser::IfStatementContext::block(size_t i) {
  return getRuleContext<RelScriptParser::BlockContext>(i);
}

tree::TerminalNode* RelScriptParser::IfStatementContext::Else() {
  return getToken(RelScriptParser::Else, 0);
}


size_t RelScriptParser::IfStatementContext::getRuleIndex() const {
  return RelScriptParser::RuleIfStatement;
}

void RelScriptParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void RelScriptParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}

RelScriptParser::IfStatementContext* RelScriptParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 56, RelScriptParser::RuleIfStatement);
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
    setState(289);
    match(RelScriptParser::If);
    setState(290);
    match(RelScriptParser::LParen);
    setState(291);
    logicExpression();
    setState(292);
    match(RelScriptParser::RParen);
    setState(293);
    match(RelScriptParser::BlockStart);
    setState(294);
    match(RelScriptParser::NEWLINE);
    setState(295);
    block();
    setState(300);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RelScriptParser::Else) {
      setState(296);
      match(RelScriptParser::Else);
      setState(297);
      match(RelScriptParser::BlockStart);
      setState(298);
      match(RelScriptParser::NEWLINE);
      setState(299);
      block();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void RelScriptParser::initialize() {
  ::antlr4::internal::call_once(relscriptparserParserOnceFlag, relscriptparserParserInitialize);
}
