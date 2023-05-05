
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
      "atom", "expression", "plusMinusExpr", "mulExpression", "mulDivExpr", 
      "logicExpression", "inBracesExpression", "columnConstructor", "tableConstructor", 
      "idColumnConstr", "inCurlyExpression", "inSquareExpression", "inParenExpression", 
      "expressionInsideBraces", "functionDeclaration", "block", "returnExpression", 
      "functionDeclarationBraces", "functionDeclarationArgs", "functionUsage", 
      "typeSpecifier", "whileStatement", "forStatement", "switchStatement", 
      "caseStatement", "defaultStatement", "ifStatement"
    },
    std::vector<std::string>{
      "", "", "", "'is'", "','", "';'", "'\"'", "'<<'", "'>>'", "'.'", "'('", 
      "')'", "'{'", "'}'", "'['", "']'", "'const'", "'table'", "'column'", 
      "'row'", "'number'", "'tuple'", "'string'", "'logic'", "'+'", "'-'", 
      "'/'", "'*'", "'less'", "'equal'", "'more'", "'lessEqual'", "'moreEqual'", 
      "'while'", "'for'", "'switch'", "'case'", "'default'", "'if'", "'else'", 
      "'break'"
    },
    std::vector<std::string>{
      "", "INDENT", "DEDENT", "Assign", "Comma", "Semi", "Quot", "Return", 
      "BlockStart", "Point", "LParen", "RParen", "LCurly", "RCurly", "LSquare", 
      "RSquare", "Const", "TableType", "ColumnType", "RowType", "NumberType", 
      "TupleType", "StringType", "LogicType", "Plus", "Minus", "Divide", 
      "Multiplication", "Less", "Equal", "More", "LessEqual", "MoreEqual", 
      "While", "For", "Switch", "Case", "Default", "If", "Else", "Break", 
      "ID", "IntNumber", "FloatNumber", "StringLiteral", "UnterminatedStringLiteral", 
      "NEWLINE", "WS", "BlockComment", "LineComment"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,49,316,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,1,0,1,0,5,0,67,8,0,10,0,12,0,70,9,0,
  	1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,82,8,1,1,1,3,1,85,8,1,1,2,
  	1,2,3,2,89,8,2,1,2,1,2,4,2,93,8,2,11,2,12,2,94,1,3,3,3,98,8,3,1,3,3,3,
  	101,8,3,1,3,1,3,1,3,1,3,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,3,5,115,8,5,1,
  	6,1,6,5,6,119,8,6,10,6,12,6,122,9,6,1,6,3,6,125,8,6,1,7,1,7,1,7,1,8,1,
  	8,5,8,132,8,8,10,8,12,8,135,9,8,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,
  	1,10,1,10,1,10,1,10,1,10,1,10,3,10,151,8,10,1,11,1,11,1,11,1,11,1,11,
  	3,11,158,8,11,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,5,13,168,8,13,10,
  	13,12,13,171,9,13,1,13,1,13,1,14,1,14,3,14,177,8,14,1,15,1,15,1,15,1,
  	15,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,3,
  	18,196,8,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,5,20,207,8,20,
  	10,20,12,20,210,9,20,1,20,3,20,213,8,20,1,20,1,20,1,21,1,21,3,21,219,
  	8,21,1,21,1,21,1,22,1,22,3,22,225,8,22,1,22,1,22,1,23,1,23,1,23,1,23,
  	1,23,1,23,1,23,1,23,3,23,237,8,23,1,24,1,24,1,24,1,24,3,24,243,8,24,1,
  	25,1,25,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,27,1,27,1,27,3,27,258,
  	8,27,1,27,1,27,3,27,262,8,27,1,27,1,27,3,27,266,8,27,1,27,1,27,1,27,1,
  	27,1,27,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,5,28,281,8,28,10,28,12,
  	28,284,9,28,1,28,1,28,1,28,1,29,1,29,1,29,3,29,292,8,29,1,29,1,29,1,29,
  	1,29,1,30,1,30,1,30,1,30,1,30,1,31,1,31,1,31,1,31,1,31,1,31,1,31,1,31,
  	1,31,1,31,1,31,3,31,314,8,31,1,31,0,0,32,0,2,4,6,8,10,12,14,16,18,20,
  	22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,0,5,1,
  	0,42,43,1,0,24,25,1,0,26,27,2,0,41,41,44,44,1,0,17,23,329,0,68,1,0,0,
  	0,2,81,1,0,0,0,4,88,1,0,0,0,6,97,1,0,0,0,8,106,1,0,0,0,10,114,1,0,0,0,
  	12,124,1,0,0,0,14,126,1,0,0,0,16,129,1,0,0,0,18,136,1,0,0,0,20,139,1,
  	0,0,0,22,157,1,0,0,0,24,159,1,0,0,0,26,163,1,0,0,0,28,176,1,0,0,0,30,
  	178,1,0,0,0,32,182,1,0,0,0,34,186,1,0,0,0,36,195,1,0,0,0,38,197,1,0,0,
  	0,40,204,1,0,0,0,42,216,1,0,0,0,44,222,1,0,0,0,46,236,1,0,0,0,48,238,
  	1,0,0,0,50,244,1,0,0,0,52,246,1,0,0,0,54,254,1,0,0,0,56,272,1,0,0,0,58,
  	288,1,0,0,0,60,297,1,0,0,0,62,302,1,0,0,0,64,67,5,46,0,0,65,67,3,2,1,
  	0,66,64,1,0,0,0,66,65,1,0,0,0,67,70,1,0,0,0,68,66,1,0,0,0,68,69,1,0,0,
  	0,69,71,1,0,0,0,70,68,1,0,0,0,71,72,5,0,0,1,72,1,1,0,0,0,73,82,3,6,3,
  	0,74,82,3,38,19,0,75,82,3,48,24,0,76,82,3,4,2,0,77,82,3,52,26,0,78,82,
  	3,54,27,0,79,82,3,56,28,0,80,82,3,62,31,0,81,73,1,0,0,0,81,74,1,0,0,0,
  	81,75,1,0,0,0,81,76,1,0,0,0,81,77,1,0,0,0,81,78,1,0,0,0,81,79,1,0,0,0,
  	81,80,1,0,0,0,82,84,1,0,0,0,83,85,5,46,0,0,84,83,1,0,0,0,84,85,1,0,0,
  	0,85,3,1,0,0,0,86,89,5,41,0,0,87,89,3,48,24,0,88,86,1,0,0,0,88,87,1,0,
  	0,0,89,92,1,0,0,0,90,91,5,9,0,0,91,93,3,48,24,0,92,90,1,0,0,0,93,94,1,
  	0,0,0,94,92,1,0,0,0,94,95,1,0,0,0,95,5,1,0,0,0,96,98,5,16,0,0,97,96,1,
  	0,0,0,97,98,1,0,0,0,98,100,1,0,0,0,99,101,3,50,25,0,100,99,1,0,0,0,100,
  	101,1,0,0,0,101,102,1,0,0,0,102,103,5,41,0,0,103,104,5,3,0,0,104,105,
  	3,12,6,0,105,7,1,0,0,0,106,107,7,0,0,0,107,9,1,0,0,0,108,115,5,41,0,0,
  	109,115,3,8,4,0,110,115,5,44,0,0,111,115,3,48,24,0,112,115,3,4,2,0,113,
  	115,3,22,11,0,114,108,1,0,0,0,114,109,1,0,0,0,114,110,1,0,0,0,114,111,
  	1,0,0,0,114,112,1,0,0,0,114,113,1,0,0,0,115,11,1,0,0,0,116,120,3,16,8,
  	0,117,119,3,14,7,0,118,117,1,0,0,0,119,122,1,0,0,0,120,118,1,0,0,0,120,
  	121,1,0,0,0,121,125,1,0,0,0,122,120,1,0,0,0,123,125,3,20,10,0,124,116,
  	1,0,0,0,124,123,1,0,0,0,125,13,1,0,0,0,126,127,7,1,0,0,127,128,3,16,8,
  	0,128,15,1,0,0,0,129,133,3,10,5,0,130,132,3,18,9,0,131,130,1,0,0,0,132,
  	135,1,0,0,0,133,131,1,0,0,0,133,134,1,0,0,0,134,17,1,0,0,0,135,133,1,
  	0,0,0,136,137,7,2,0,0,137,138,3,10,5,0,138,19,1,0,0,0,139,150,3,10,5,
  	0,140,141,5,29,0,0,141,151,3,10,5,0,142,143,5,30,0,0,143,151,3,10,5,0,
  	144,145,5,28,0,0,145,151,3,10,5,0,146,147,5,32,0,0,147,151,3,10,5,0,148,
  	149,5,31,0,0,149,151,3,10,5,0,150,140,1,0,0,0,150,142,1,0,0,0,150,144,
  	1,0,0,0,150,146,1,0,0,0,150,148,1,0,0,0,150,151,1,0,0,0,151,21,1,0,0,
  	0,152,158,3,30,15,0,153,158,3,24,12,0,154,158,3,26,13,0,155,158,3,32,
  	16,0,156,158,3,34,17,0,157,152,1,0,0,0,157,153,1,0,0,0,157,154,1,0,0,
  	0,157,155,1,0,0,0,157,156,1,0,0,0,158,23,1,0,0,0,159,160,5,10,0,0,160,
  	161,7,3,0,0,161,162,5,11,0,0,162,25,1,0,0,0,163,164,5,14,0,0,164,169,
  	3,28,14,0,165,166,5,4,0,0,166,168,3,28,14,0,167,165,1,0,0,0,168,171,1,
  	0,0,0,169,167,1,0,0,0,169,170,1,0,0,0,170,172,1,0,0,0,171,169,1,0,0,0,
  	172,173,5,15,0,0,173,27,1,0,0,0,174,177,5,41,0,0,175,177,3,24,12,0,176,
  	174,1,0,0,0,176,175,1,0,0,0,177,29,1,0,0,0,178,179,5,12,0,0,179,180,3,
  	36,18,0,180,181,5,13,0,0,181,31,1,0,0,0,182,183,5,14,0,0,183,184,3,36,
  	18,0,184,185,5,15,0,0,185,33,1,0,0,0,186,187,5,10,0,0,187,188,3,36,18,
  	0,188,189,5,11,0,0,189,35,1,0,0,0,190,196,3,12,6,0,191,192,3,12,6,0,192,
  	193,5,4,0,0,193,194,3,36,18,0,194,196,1,0,0,0,195,190,1,0,0,0,195,191,
  	1,0,0,0,196,37,1,0,0,0,197,198,3,50,25,0,198,199,5,41,0,0,199,200,3,44,
  	22,0,200,201,5,8,0,0,201,202,5,46,0,0,202,203,3,40,20,0,203,39,1,0,0,
  	0,204,208,5,1,0,0,205,207,3,2,1,0,206,205,1,0,0,0,207,210,1,0,0,0,208,
  	206,1,0,0,0,208,209,1,0,0,0,209,212,1,0,0,0,210,208,1,0,0,0,211,213,3,
  	42,21,0,212,211,1,0,0,0,212,213,1,0,0,0,213,214,1,0,0,0,214,215,5,2,0,
  	0,215,41,1,0,0,0,216,218,5,7,0,0,217,219,3,12,6,0,218,217,1,0,0,0,218,
  	219,1,0,0,0,219,220,1,0,0,0,220,221,5,46,0,0,221,43,1,0,0,0,222,224,5,
  	10,0,0,223,225,3,46,23,0,224,223,1,0,0,0,224,225,1,0,0,0,225,226,1,0,
  	0,0,226,227,5,11,0,0,227,45,1,0,0,0,228,229,3,50,25,0,229,230,5,41,0,
  	0,230,237,1,0,0,0,231,232,3,50,25,0,232,233,5,41,0,0,233,234,5,4,0,0,
  	234,235,3,46,23,0,235,237,1,0,0,0,236,228,1,0,0,0,236,231,1,0,0,0,237,
  	47,1,0,0,0,238,242,5,41,0,0,239,240,5,10,0,0,240,243,5,11,0,0,241,243,
  	3,34,17,0,242,239,1,0,0,0,242,241,1,0,0,0,243,49,1,0,0,0,244,245,7,4,
  	0,0,245,51,1,0,0,0,246,247,5,33,0,0,247,248,5,10,0,0,248,249,3,20,10,
  	0,249,250,5,11,0,0,250,251,5,8,0,0,251,252,5,46,0,0,252,253,3,40,20,0,
  	253,53,1,0,0,0,254,255,5,34,0,0,255,257,5,10,0,0,256,258,3,6,3,0,257,
  	256,1,0,0,0,257,258,1,0,0,0,258,259,1,0,0,0,259,261,5,5,0,0,260,262,3,
  	20,10,0,261,260,1,0,0,0,261,262,1,0,0,0,262,263,1,0,0,0,263,265,5,5,0,
  	0,264,266,3,6,3,0,265,264,1,0,0,0,265,266,1,0,0,0,266,267,1,0,0,0,267,
  	268,5,11,0,0,268,269,5,8,0,0,269,270,5,46,0,0,270,271,3,40,20,0,271,55,
  	1,0,0,0,272,273,5,35,0,0,273,274,5,10,0,0,274,275,5,41,0,0,275,276,5,
  	11,0,0,276,277,5,8,0,0,277,278,5,46,0,0,278,282,5,1,0,0,279,281,3,58,
  	29,0,280,279,1,0,0,0,281,284,1,0,0,0,282,280,1,0,0,0,282,283,1,0,0,0,
  	283,285,1,0,0,0,284,282,1,0,0,0,285,286,3,60,30,0,286,287,5,2,0,0,287,
  	57,1,0,0,0,288,291,5,36,0,0,289,292,5,44,0,0,290,292,3,8,4,0,291,289,
  	1,0,0,0,291,290,1,0,0,0,292,293,1,0,0,0,293,294,5,8,0,0,294,295,5,46,
  	0,0,295,296,3,40,20,0,296,59,1,0,0,0,297,298,5,37,0,0,298,299,5,8,0,0,
  	299,300,5,46,0,0,300,301,3,40,20,0,301,61,1,0,0,0,302,303,5,38,0,0,303,
  	304,5,10,0,0,304,305,3,20,10,0,305,306,5,11,0,0,306,307,5,8,0,0,307,308,
  	5,46,0,0,308,313,3,40,20,0,309,310,5,39,0,0,310,311,5,8,0,0,311,312,5,
  	46,0,0,312,314,3,40,20,0,313,309,1,0,0,0,313,314,1,0,0,0,314,63,1,0,0,
  	0,29,66,68,81,84,88,94,97,100,114,120,124,133,150,157,169,176,195,208,
  	212,218,224,236,242,257,261,265,282,291,313
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
    setState(68);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 72902791593984) != 0) {
      setState(66);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case RelScriptParser::NEWLINE: {
          setState(64);
          match(RelScriptParser::NEWLINE);
          break;
        }

        case RelScriptParser::Const:
        case RelScriptParser::TableType:
        case RelScriptParser::ColumnType:
        case RelScriptParser::RowType:
        case RelScriptParser::NumberType:
        case RelScriptParser::TupleType:
        case RelScriptParser::StringType:
        case RelScriptParser::LogicType:
        case RelScriptParser::While:
        case RelScriptParser::For:
        case RelScriptParser::Switch:
        case RelScriptParser::If:
        case RelScriptParser::ID: {
          setState(65);
          statement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(70);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(71);
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
    setState(81);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(73);
      assignExpression();
      break;
    }

    case 2: {
      setState(74);
      functionDeclaration();
      break;
    }

    case 3: {
      setState(75);
      functionUsage();
      break;
    }

    case 4: {
      setState(76);
      methodUsage();
      break;
    }

    case 5: {
      setState(77);
      whileStatement();
      break;
    }

    case 6: {
      setState(78);
      forStatement();
      break;
    }

    case 7: {
      setState(79);
      switchStatement();
      break;
    }

    case 8: {
      setState(80);
      ifStatement();
      break;
    }

    default:
      break;
    }
    setState(84);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(83);
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
    setState(88);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(86);
      match(RelScriptParser::ID);
      break;
    }

    case 2: {
      setState(87);
      functionUsage();
      break;
    }

    default:
      break;
    }
    setState(92); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(90);
      match(RelScriptParser::Point);
      setState(91);
      functionUsage();
      setState(94); 
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

RelScriptParser::TypeSpecifierContext* RelScriptParser::AssignExpressionContext::typeSpecifier() {
  return getRuleContext<RelScriptParser::TypeSpecifierContext>(0);
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
    setState(97);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RelScriptParser::Const) {
      setState(96);
      match(RelScriptParser::Const);
    }
    setState(100);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16646144) != 0) {
      setState(99);
      typeSpecifier();
    }
    setState(102);
    match(RelScriptParser::ID);
    setState(103);
    match(RelScriptParser::Assign);
    setState(104);
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
    setState(106);
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
    setState(114);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(108);
      match(RelScriptParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(109);
      number();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(110);
      match(RelScriptParser::StringLiteral);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(111);
      functionUsage();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(112);
      methodUsage();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(113);
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

RelScriptParser::MulExpressionContext* RelScriptParser::ExpressionContext::mulExpression() {
  return getRuleContext<RelScriptParser::MulExpressionContext>(0);
}

std::vector<RelScriptParser::PlusMinusExprContext *> RelScriptParser::ExpressionContext::plusMinusExpr() {
  return getRuleContexts<RelScriptParser::PlusMinusExprContext>();
}

RelScriptParser::PlusMinusExprContext* RelScriptParser::ExpressionContext::plusMinusExpr(size_t i) {
  return getRuleContext<RelScriptParser::PlusMinusExprContext>(i);
}

RelScriptParser::LogicExpressionContext* RelScriptParser::ExpressionContext::logicExpression() {
  return getRuleContext<RelScriptParser::LogicExpressionContext>(0);
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
    setState(124);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(116);
      mulExpression();
      setState(120);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == RelScriptParser::Plus

      || _la == RelScriptParser::Minus) {
        setState(117);
        plusMinusExpr();
        setState(122);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(123);
      logicExpression();
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

//----------------- PlusMinusExprContext ------------------------------------------------------------------

RelScriptParser::PlusMinusExprContext::PlusMinusExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RelScriptParser::MulExpressionContext* RelScriptParser::PlusMinusExprContext::mulExpression() {
  return getRuleContext<RelScriptParser::MulExpressionContext>(0);
}

tree::TerminalNode* RelScriptParser::PlusMinusExprContext::Plus() {
  return getToken(RelScriptParser::Plus, 0);
}

tree::TerminalNode* RelScriptParser::PlusMinusExprContext::Minus() {
  return getToken(RelScriptParser::Minus, 0);
}


size_t RelScriptParser::PlusMinusExprContext::getRuleIndex() const {
  return RelScriptParser::RulePlusMinusExpr;
}

void RelScriptParser::PlusMinusExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlusMinusExpr(this);
}

void RelScriptParser::PlusMinusExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlusMinusExpr(this);
}

RelScriptParser::PlusMinusExprContext* RelScriptParser::plusMinusExpr() {
  PlusMinusExprContext *_localctx = _tracker.createInstance<PlusMinusExprContext>(_ctx, getState());
  enterRule(_localctx, 14, RelScriptParser::RulePlusMinusExpr);
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
    _la = _input->LA(1);
    if (!(_la == RelScriptParser::Plus

    || _la == RelScriptParser::Minus)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(127);
    mulExpression();
   
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

RelScriptParser::AtomContext* RelScriptParser::MulExpressionContext::atom() {
  return getRuleContext<RelScriptParser::AtomContext>(0);
}

std::vector<RelScriptParser::MulDivExprContext *> RelScriptParser::MulExpressionContext::mulDivExpr() {
  return getRuleContexts<RelScriptParser::MulDivExprContext>();
}

RelScriptParser::MulDivExprContext* RelScriptParser::MulExpressionContext::mulDivExpr(size_t i) {
  return getRuleContext<RelScriptParser::MulDivExprContext>(i);
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
  enterRule(_localctx, 16, RelScriptParser::RuleMulExpression);
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
    setState(129);
    atom();
    setState(133);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RelScriptParser::Divide

    || _la == RelScriptParser::Multiplication) {
      setState(130);
      mulDivExpr();
      setState(135);
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

//----------------- MulDivExprContext ------------------------------------------------------------------

RelScriptParser::MulDivExprContext::MulDivExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RelScriptParser::AtomContext* RelScriptParser::MulDivExprContext::atom() {
  return getRuleContext<RelScriptParser::AtomContext>(0);
}

tree::TerminalNode* RelScriptParser::MulDivExprContext::Multiplication() {
  return getToken(RelScriptParser::Multiplication, 0);
}

tree::TerminalNode* RelScriptParser::MulDivExprContext::Divide() {
  return getToken(RelScriptParser::Divide, 0);
}


size_t RelScriptParser::MulDivExprContext::getRuleIndex() const {
  return RelScriptParser::RuleMulDivExpr;
}

void RelScriptParser::MulDivExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulDivExpr(this);
}

void RelScriptParser::MulDivExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulDivExpr(this);
}

RelScriptParser::MulDivExprContext* RelScriptParser::mulDivExpr() {
  MulDivExprContext *_localctx = _tracker.createInstance<MulDivExprContext>(_ctx, getState());
  enterRule(_localctx, 18, RelScriptParser::RuleMulDivExpr);
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
    setState(136);
    _la = _input->LA(1);
    if (!(_la == RelScriptParser::Divide

    || _la == RelScriptParser::Multiplication)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(137);
    atom();
   
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
  enterRule(_localctx, 20, RelScriptParser::RuleLogicExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    atom();
    setState(150);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RelScriptParser::Equal: {
        setState(140);
        match(RelScriptParser::Equal);
        setState(141);
        atom();
        break;
      }

      case RelScriptParser::More: {
        setState(142);
        match(RelScriptParser::More);
        setState(143);
        atom();
        break;
      }

      case RelScriptParser::Less: {
        setState(144);
        match(RelScriptParser::Less);
        setState(145);
        atom();
        break;
      }

      case RelScriptParser::MoreEqual: {
        setState(146);
        match(RelScriptParser::MoreEqual);
        setState(147);
        atom();
        break;
      }

      case RelScriptParser::LessEqual: {
        setState(148);
        match(RelScriptParser::LessEqual);
        setState(149);
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
      case RelScriptParser::ColumnType:
      case RelScriptParser::RowType:
      case RelScriptParser::NumberType:
      case RelScriptParser::TupleType:
      case RelScriptParser::StringType:
      case RelScriptParser::LogicType:
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

//----------------- InBracesExpressionContext ------------------------------------------------------------------

RelScriptParser::InBracesExpressionContext::InBracesExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RelScriptParser::InCurlyExpressionContext* RelScriptParser::InBracesExpressionContext::inCurlyExpression() {
  return getRuleContext<RelScriptParser::InCurlyExpressionContext>(0);
}

RelScriptParser::ColumnConstructorContext* RelScriptParser::InBracesExpressionContext::columnConstructor() {
  return getRuleContext<RelScriptParser::ColumnConstructorContext>(0);
}

RelScriptParser::TableConstructorContext* RelScriptParser::InBracesExpressionContext::tableConstructor() {
  return getRuleContext<RelScriptParser::TableConstructorContext>(0);
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
  enterRule(_localctx, 22, RelScriptParser::RuleInBracesExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(157);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(152);
      inCurlyExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(153);
      columnConstructor();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(154);
      tableConstructor();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(155);
      inSquareExpression();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(156);
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

//----------------- ColumnConstructorContext ------------------------------------------------------------------

RelScriptParser::ColumnConstructorContext::ColumnConstructorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RelScriptParser::ColumnConstructorContext::LParen() {
  return getToken(RelScriptParser::LParen, 0);
}

tree::TerminalNode* RelScriptParser::ColumnConstructorContext::RParen() {
  return getToken(RelScriptParser::RParen, 0);
}

tree::TerminalNode* RelScriptParser::ColumnConstructorContext::ID() {
  return getToken(RelScriptParser::ID, 0);
}

tree::TerminalNode* RelScriptParser::ColumnConstructorContext::StringLiteral() {
  return getToken(RelScriptParser::StringLiteral, 0);
}


size_t RelScriptParser::ColumnConstructorContext::getRuleIndex() const {
  return RelScriptParser::RuleColumnConstructor;
}

void RelScriptParser::ColumnConstructorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColumnConstructor(this);
}

void RelScriptParser::ColumnConstructorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColumnConstructor(this);
}

RelScriptParser::ColumnConstructorContext* RelScriptParser::columnConstructor() {
  ColumnConstructorContext *_localctx = _tracker.createInstance<ColumnConstructorContext>(_ctx, getState());
  enterRule(_localctx, 24, RelScriptParser::RuleColumnConstructor);
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
    setState(159);
    match(RelScriptParser::LParen);
    setState(160);
    _la = _input->LA(1);
    if (!(_la == RelScriptParser::ID

    || _la == RelScriptParser::StringLiteral)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(161);
    match(RelScriptParser::RParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TableConstructorContext ------------------------------------------------------------------

RelScriptParser::TableConstructorContext::TableConstructorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RelScriptParser::TableConstructorContext::LSquare() {
  return getToken(RelScriptParser::LSquare, 0);
}

std::vector<RelScriptParser::IdColumnConstrContext *> RelScriptParser::TableConstructorContext::idColumnConstr() {
  return getRuleContexts<RelScriptParser::IdColumnConstrContext>();
}

RelScriptParser::IdColumnConstrContext* RelScriptParser::TableConstructorContext::idColumnConstr(size_t i) {
  return getRuleContext<RelScriptParser::IdColumnConstrContext>(i);
}

tree::TerminalNode* RelScriptParser::TableConstructorContext::RSquare() {
  return getToken(RelScriptParser::RSquare, 0);
}

std::vector<tree::TerminalNode *> RelScriptParser::TableConstructorContext::Comma() {
  return getTokens(RelScriptParser::Comma);
}

tree::TerminalNode* RelScriptParser::TableConstructorContext::Comma(size_t i) {
  return getToken(RelScriptParser::Comma, i);
}


size_t RelScriptParser::TableConstructorContext::getRuleIndex() const {
  return RelScriptParser::RuleTableConstructor;
}

void RelScriptParser::TableConstructorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTableConstructor(this);
}

void RelScriptParser::TableConstructorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTableConstructor(this);
}

RelScriptParser::TableConstructorContext* RelScriptParser::tableConstructor() {
  TableConstructorContext *_localctx = _tracker.createInstance<TableConstructorContext>(_ctx, getState());
  enterRule(_localctx, 26, RelScriptParser::RuleTableConstructor);
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
    setState(163);
    match(RelScriptParser::LSquare);
    setState(164);
    idColumnConstr();
    setState(169);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RelScriptParser::Comma) {
      setState(165);
      match(RelScriptParser::Comma);
      setState(166);
      idColumnConstr();
      setState(171);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(172);
    match(RelScriptParser::RSquare);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdColumnConstrContext ------------------------------------------------------------------

RelScriptParser::IdColumnConstrContext::IdColumnConstrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RelScriptParser::IdColumnConstrContext::ID() {
  return getToken(RelScriptParser::ID, 0);
}

RelScriptParser::ColumnConstructorContext* RelScriptParser::IdColumnConstrContext::columnConstructor() {
  return getRuleContext<RelScriptParser::ColumnConstructorContext>(0);
}


size_t RelScriptParser::IdColumnConstrContext::getRuleIndex() const {
  return RelScriptParser::RuleIdColumnConstr;
}

void RelScriptParser::IdColumnConstrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdColumnConstr(this);
}

void RelScriptParser::IdColumnConstrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdColumnConstr(this);
}

RelScriptParser::IdColumnConstrContext* RelScriptParser::idColumnConstr() {
  IdColumnConstrContext *_localctx = _tracker.createInstance<IdColumnConstrContext>(_ctx, getState());
  enterRule(_localctx, 28, RelScriptParser::RuleIdColumnConstr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RelScriptParser::ID: {
        setState(174);
        match(RelScriptParser::ID);
        break;
      }

      case RelScriptParser::LParen: {
        setState(175);
        columnConstructor();
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
  enterRule(_localctx, 30, RelScriptParser::RuleInCurlyExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    match(RelScriptParser::LCurly);
    setState(179);
    expressionInsideBraces();
    setState(180);
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
  enterRule(_localctx, 32, RelScriptParser::RuleInSquareExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(182);
    match(RelScriptParser::LSquare);
    setState(183);
    expressionInsideBraces();
    setState(184);
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
  enterRule(_localctx, 34, RelScriptParser::RuleInParenExpression);

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
    match(RelScriptParser::LParen);
    setState(187);
    expressionInsideBraces();
    setState(188);
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
  enterRule(_localctx, 36, RelScriptParser::RuleExpressionInsideBraces);

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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(190);
      expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(191);
      expression();
      setState(192);
      match(RelScriptParser::Comma);
      setState(193);
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

RelScriptParser::TypeSpecifierContext* RelScriptParser::FunctionDeclarationContext::typeSpecifier() {
  return getRuleContext<RelScriptParser::TypeSpecifierContext>(0);
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
  enterRule(_localctx, 38, RelScriptParser::RuleFunctionDeclaration);

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
    typeSpecifier();
    setState(198);
    match(RelScriptParser::ID);
    setState(199);
    functionDeclarationBraces();
    setState(200);
    match(RelScriptParser::BlockStart);
    setState(201);
    match(RelScriptParser::NEWLINE);
    setState(202);
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
  enterRule(_localctx, 40, RelScriptParser::RuleBlock);
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
    match(RelScriptParser::INDENT);
    setState(208);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2534047416320) != 0) {
      setState(205);
      statement();
      setState(210);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(212);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RelScriptParser::Return) {
      setState(211);
      returnExpression();
    }
    setState(214);
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
  enterRule(_localctx, 42, RelScriptParser::RuleReturnExpression);
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
    setState(216);
    match(RelScriptParser::Return);
    setState(218);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32985348854784) != 0) {
      setState(217);
      expression();
    }
    setState(220);
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
  enterRule(_localctx, 44, RelScriptParser::RuleFunctionDeclarationBraces);
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
    setState(222);
    match(RelScriptParser::LParen);
    setState(224);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16646144) != 0) {
      setState(223);
      functionDeclarationArgs();
    }
    setState(226);
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

RelScriptParser::TypeSpecifierContext* RelScriptParser::FunctionDeclarationArgsContext::typeSpecifier() {
  return getRuleContext<RelScriptParser::TypeSpecifierContext>(0);
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
  enterRule(_localctx, 46, RelScriptParser::RuleFunctionDeclarationArgs);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(236);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(228);
      typeSpecifier();
      setState(229);
      match(RelScriptParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(231);
      typeSpecifier();
      setState(232);
      match(RelScriptParser::ID);
      setState(233);
      match(RelScriptParser::Comma);
      setState(234);
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
  enterRule(_localctx, 48, RelScriptParser::RuleFunctionUsage);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    match(RelScriptParser::ID);
    setState(242);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(239);
      match(RelScriptParser::LParen);
      setState(240);
      match(RelScriptParser::RParen);
      break;
    }

    case 2: {
      setState(241);
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

//----------------- TypeSpecifierContext ------------------------------------------------------------------

RelScriptParser::TypeSpecifierContext::TypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RelScriptParser::TypeSpecifierContext::TableType() {
  return getToken(RelScriptParser::TableType, 0);
}

tree::TerminalNode* RelScriptParser::TypeSpecifierContext::ColumnType() {
  return getToken(RelScriptParser::ColumnType, 0);
}

tree::TerminalNode* RelScriptParser::TypeSpecifierContext::RowType() {
  return getToken(RelScriptParser::RowType, 0);
}

tree::TerminalNode* RelScriptParser::TypeSpecifierContext::StringType() {
  return getToken(RelScriptParser::StringType, 0);
}

tree::TerminalNode* RelScriptParser::TypeSpecifierContext::NumberType() {
  return getToken(RelScriptParser::NumberType, 0);
}

tree::TerminalNode* RelScriptParser::TypeSpecifierContext::TupleType() {
  return getToken(RelScriptParser::TupleType, 0);
}

tree::TerminalNode* RelScriptParser::TypeSpecifierContext::LogicType() {
  return getToken(RelScriptParser::LogicType, 0);
}


size_t RelScriptParser::TypeSpecifierContext::getRuleIndex() const {
  return RelScriptParser::RuleTypeSpecifier;
}

void RelScriptParser::TypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeSpecifier(this);
}

void RelScriptParser::TypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RelScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeSpecifier(this);
}

RelScriptParser::TypeSpecifierContext* RelScriptParser::typeSpecifier() {
  TypeSpecifierContext *_localctx = _tracker.createInstance<TypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 50, RelScriptParser::RuleTypeSpecifier);
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
    setState(244);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16646144) != 0)) {
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
  enterRule(_localctx, 52, RelScriptParser::RuleWhileStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(246);
    match(RelScriptParser::While);
    setState(247);
    match(RelScriptParser::LParen);
    setState(248);
    logicExpression();
    setState(249);
    match(RelScriptParser::RParen);
    setState(250);
    match(RelScriptParser::BlockStart);
    setState(251);
    match(RelScriptParser::NEWLINE);
    setState(252);
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
  enterRule(_localctx, 54, RelScriptParser::RuleForStatement);
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
    setState(254);
    match(RelScriptParser::For);
    setState(255);
    match(RelScriptParser::LParen);
    setState(257);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2199039967232) != 0) {
      setState(256);
      assignExpression();
    }
    setState(259);
    match(RelScriptParser::Semi);
    setState(261);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32985348854784) != 0) {
      setState(260);
      logicExpression();
    }
    setState(263);
    match(RelScriptParser::Semi);
    setState(265);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2199039967232) != 0) {
      setState(264);
      assignExpression();
    }
    setState(267);
    match(RelScriptParser::RParen);
    setState(268);
    match(RelScriptParser::BlockStart);
    setState(269);
    match(RelScriptParser::NEWLINE);
    setState(270);
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
  enterRule(_localctx, 56, RelScriptParser::RuleSwitchStatement);
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
    setState(272);
    match(RelScriptParser::Switch);
    setState(273);
    match(RelScriptParser::LParen);
    setState(274);
    match(RelScriptParser::ID);
    setState(275);
    match(RelScriptParser::RParen);
    setState(276);
    match(RelScriptParser::BlockStart);
    setState(277);
    match(RelScriptParser::NEWLINE);
    setState(278);
    match(RelScriptParser::INDENT);
    setState(282);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RelScriptParser::Case) {
      setState(279);
      caseStatement();
      setState(284);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(285);
    defaultStatement();
    setState(286);
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
  enterRule(_localctx, 58, RelScriptParser::RuleCaseStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(288);
    match(RelScriptParser::Case);
    setState(291);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RelScriptParser::StringLiteral: {
        setState(289);
        match(RelScriptParser::StringLiteral);
        break;
      }

      case RelScriptParser::IntNumber:
      case RelScriptParser::FloatNumber: {
        setState(290);
        number();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(293);
    match(RelScriptParser::BlockStart);
    setState(294);
    match(RelScriptParser::NEWLINE);
    setState(295);
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
  enterRule(_localctx, 60, RelScriptParser::RuleDefaultStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
    match(RelScriptParser::Default);
    setState(298);
    match(RelScriptParser::BlockStart);
    setState(299);
    match(RelScriptParser::NEWLINE);
    setState(300);
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
  enterRule(_localctx, 62, RelScriptParser::RuleIfStatement);
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
    setState(302);
    match(RelScriptParser::If);
    setState(303);
    match(RelScriptParser::LParen);
    setState(304);
    logicExpression();
    setState(305);
    match(RelScriptParser::RParen);
    setState(306);
    match(RelScriptParser::BlockStart);
    setState(307);
    match(RelScriptParser::NEWLINE);
    setState(308);
    block();
    setState(313);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RelScriptParser::Else) {
      setState(309);
      match(RelScriptParser::Else);
      setState(310);
      match(RelScriptParser::BlockStart);
      setState(311);
      match(RelScriptParser::NEWLINE);
      setState(312);
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
