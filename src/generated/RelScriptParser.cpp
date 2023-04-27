
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
      "inBracesExpression", "columnConstructor", "inCurlyExpression", "inSquareExpression", 
      "inParenExpression", "expressionInsideBraces", "functionDeclaration", 
      "block", "returnExpression", "functionDeclarationBraces", "functionDeclarationArgs", 
      "functionUsage", "typeSpecifier", "whileStatement", "forStatement", 
      "switchStatement", "caseStatement", "defaultStatement", "ifStatement"
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
  	4,1,49,298,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,1,0,1,0,5,0,61,8,0,10,0,12,0,64,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,3,1,76,8,1,1,1,3,1,79,8,1,1,2,1,2,3,2,83,8,2,1,2,1,2,4,2,87,
  	8,2,11,2,12,2,88,1,3,3,3,92,8,3,1,3,3,3,95,8,3,1,3,1,3,1,3,1,3,1,4,1,
  	4,1,5,1,5,1,5,1,5,1,5,1,5,3,5,109,8,5,1,6,1,6,1,6,1,6,1,6,5,6,116,8,6,
  	10,6,12,6,119,9,6,1,6,3,6,122,8,6,1,7,1,7,1,7,1,7,1,7,5,7,129,8,7,10,
  	7,12,7,132,9,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,3,8,145,8,
  	8,1,9,1,9,1,10,1,10,1,10,1,10,3,10,153,8,10,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,15,
  	1,15,1,15,1,15,1,15,3,15,178,8,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,
  	1,17,1,17,5,17,189,8,17,10,17,12,17,192,9,17,1,17,3,17,195,8,17,1,17,
  	1,17,1,18,1,18,3,18,201,8,18,1,18,1,18,1,19,1,19,3,19,207,8,19,1,19,1,
  	19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,3,20,219,8,20,1,21,1,21,1,
  	21,1,21,3,21,225,8,21,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,
  	23,1,24,1,24,1,24,3,24,240,8,24,1,24,1,24,3,24,244,8,24,1,24,1,24,3,24,
  	248,8,24,1,24,1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,25,1,25,1,25,1,25,
  	1,25,5,25,263,8,25,10,25,12,25,266,9,25,1,25,1,25,1,25,1,26,1,26,1,26,
  	3,26,274,8,26,1,26,1,26,1,26,1,26,1,27,1,27,1,27,1,27,1,27,1,28,1,28,
  	1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,3,28,296,8,28,1,28,0,0,29,
  	0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,
  	50,52,54,56,0,4,1,0,42,43,2,0,24,26,28,32,2,0,41,41,44,44,1,0,17,23,313,
  	0,62,1,0,0,0,2,75,1,0,0,0,4,82,1,0,0,0,6,91,1,0,0,0,8,100,1,0,0,0,10,
  	108,1,0,0,0,12,121,1,0,0,0,14,123,1,0,0,0,16,133,1,0,0,0,18,146,1,0,0,
  	0,20,152,1,0,0,0,22,154,1,0,0,0,24,160,1,0,0,0,26,164,1,0,0,0,28,168,
  	1,0,0,0,30,177,1,0,0,0,32,179,1,0,0,0,34,186,1,0,0,0,36,198,1,0,0,0,38,
  	204,1,0,0,0,40,218,1,0,0,0,42,220,1,0,0,0,44,226,1,0,0,0,46,228,1,0,0,
  	0,48,236,1,0,0,0,50,254,1,0,0,0,52,270,1,0,0,0,54,279,1,0,0,0,56,284,
  	1,0,0,0,58,61,5,46,0,0,59,61,3,2,1,0,60,58,1,0,0,0,60,59,1,0,0,0,61,64,
  	1,0,0,0,62,60,1,0,0,0,62,63,1,0,0,0,63,65,1,0,0,0,64,62,1,0,0,0,65,66,
  	5,0,0,1,66,1,1,0,0,0,67,76,3,6,3,0,68,76,3,32,16,0,69,76,3,42,21,0,70,
  	76,3,4,2,0,71,76,3,46,23,0,72,76,3,48,24,0,73,76,3,50,25,0,74,76,3,56,
  	28,0,75,67,1,0,0,0,75,68,1,0,0,0,75,69,1,0,0,0,75,70,1,0,0,0,75,71,1,
  	0,0,0,75,72,1,0,0,0,75,73,1,0,0,0,75,74,1,0,0,0,76,78,1,0,0,0,77,79,5,
  	46,0,0,78,77,1,0,0,0,78,79,1,0,0,0,79,3,1,0,0,0,80,83,5,41,0,0,81,83,
  	3,42,21,0,82,80,1,0,0,0,82,81,1,0,0,0,83,86,1,0,0,0,84,85,5,9,0,0,85,
  	87,3,42,21,0,86,84,1,0,0,0,87,88,1,0,0,0,88,86,1,0,0,0,88,89,1,0,0,0,
  	89,5,1,0,0,0,90,92,5,16,0,0,91,90,1,0,0,0,91,92,1,0,0,0,92,94,1,0,0,0,
  	93,95,3,44,22,0,94,93,1,0,0,0,94,95,1,0,0,0,95,96,1,0,0,0,96,97,5,41,
  	0,0,97,98,5,3,0,0,98,99,3,12,6,0,99,7,1,0,0,0,100,101,7,0,0,0,101,9,1,
  	0,0,0,102,109,5,41,0,0,103,109,3,8,4,0,104,109,5,44,0,0,105,109,3,42,
  	21,0,106,109,3,4,2,0,107,109,3,20,10,0,108,102,1,0,0,0,108,103,1,0,0,
  	0,108,104,1,0,0,0,108,105,1,0,0,0,108,106,1,0,0,0,108,107,1,0,0,0,109,
  	11,1,0,0,0,110,117,3,14,7,0,111,112,5,24,0,0,112,116,3,14,7,0,113,114,
  	5,25,0,0,114,116,3,14,7,0,115,111,1,0,0,0,115,113,1,0,0,0,116,119,1,0,
  	0,0,117,115,1,0,0,0,117,118,1,0,0,0,118,122,1,0,0,0,119,117,1,0,0,0,120,
  	122,3,16,8,0,121,110,1,0,0,0,121,120,1,0,0,0,122,13,1,0,0,0,123,130,3,
  	10,5,0,124,125,5,27,0,0,125,129,3,10,5,0,126,127,5,26,0,0,127,129,3,10,
  	5,0,128,124,1,0,0,0,128,126,1,0,0,0,129,132,1,0,0,0,130,128,1,0,0,0,130,
  	131,1,0,0,0,131,15,1,0,0,0,132,130,1,0,0,0,133,144,3,10,5,0,134,135,5,
  	29,0,0,135,145,3,10,5,0,136,137,5,30,0,0,137,145,3,10,5,0,138,139,5,28,
  	0,0,139,145,3,10,5,0,140,141,5,32,0,0,141,145,3,10,5,0,142,143,5,31,0,
  	0,143,145,3,10,5,0,144,134,1,0,0,0,144,136,1,0,0,0,144,138,1,0,0,0,144,
  	140,1,0,0,0,144,142,1,0,0,0,144,145,1,0,0,0,145,17,1,0,0,0,146,147,7,
  	1,0,0,147,19,1,0,0,0,148,153,3,24,12,0,149,153,3,22,11,0,150,153,3,26,
  	13,0,151,153,3,28,14,0,152,148,1,0,0,0,152,149,1,0,0,0,152,150,1,0,0,
  	0,152,151,1,0,0,0,153,21,1,0,0,0,154,155,5,10,0,0,155,156,7,2,0,0,156,
  	157,5,4,0,0,157,158,3,44,22,0,158,159,5,11,0,0,159,23,1,0,0,0,160,161,
  	5,12,0,0,161,162,3,30,15,0,162,163,5,13,0,0,163,25,1,0,0,0,164,165,5,
  	14,0,0,165,166,3,30,15,0,166,167,5,15,0,0,167,27,1,0,0,0,168,169,5,10,
  	0,0,169,170,3,30,15,0,170,171,5,11,0,0,171,29,1,0,0,0,172,178,3,12,6,
  	0,173,174,3,12,6,0,174,175,5,4,0,0,175,176,3,30,15,0,176,178,1,0,0,0,
  	177,172,1,0,0,0,177,173,1,0,0,0,178,31,1,0,0,0,179,180,3,44,22,0,180,
  	181,5,41,0,0,181,182,3,38,19,0,182,183,5,8,0,0,183,184,5,46,0,0,184,185,
  	3,34,17,0,185,33,1,0,0,0,186,190,5,1,0,0,187,189,3,2,1,0,188,187,1,0,
  	0,0,189,192,1,0,0,0,190,188,1,0,0,0,190,191,1,0,0,0,191,194,1,0,0,0,192,
  	190,1,0,0,0,193,195,3,36,18,0,194,193,1,0,0,0,194,195,1,0,0,0,195,196,
  	1,0,0,0,196,197,5,2,0,0,197,35,1,0,0,0,198,200,5,7,0,0,199,201,3,12,6,
  	0,200,199,1,0,0,0,200,201,1,0,0,0,201,202,1,0,0,0,202,203,5,46,0,0,203,
  	37,1,0,0,0,204,206,5,10,0,0,205,207,3,40,20,0,206,205,1,0,0,0,206,207,
  	1,0,0,0,207,208,1,0,0,0,208,209,5,11,0,0,209,39,1,0,0,0,210,211,3,44,
  	22,0,211,212,5,41,0,0,212,219,1,0,0,0,213,214,3,44,22,0,214,215,5,41,
  	0,0,215,216,5,4,0,0,216,217,3,40,20,0,217,219,1,0,0,0,218,210,1,0,0,0,
  	218,213,1,0,0,0,219,41,1,0,0,0,220,224,5,41,0,0,221,222,5,10,0,0,222,
  	225,5,11,0,0,223,225,3,28,14,0,224,221,1,0,0,0,224,223,1,0,0,0,225,43,
  	1,0,0,0,226,227,7,3,0,0,227,45,1,0,0,0,228,229,5,33,0,0,229,230,5,10,
  	0,0,230,231,3,16,8,0,231,232,5,11,0,0,232,233,5,8,0,0,233,234,5,46,0,
  	0,234,235,3,34,17,0,235,47,1,0,0,0,236,237,5,34,0,0,237,239,5,10,0,0,
  	238,240,3,6,3,0,239,238,1,0,0,0,239,240,1,0,0,0,240,241,1,0,0,0,241,243,
  	5,5,0,0,242,244,3,16,8,0,243,242,1,0,0,0,243,244,1,0,0,0,244,245,1,0,
  	0,0,245,247,5,5,0,0,246,248,3,6,3,0,247,246,1,0,0,0,247,248,1,0,0,0,248,
  	249,1,0,0,0,249,250,5,11,0,0,250,251,5,8,0,0,251,252,5,46,0,0,252,253,
  	3,34,17,0,253,49,1,0,0,0,254,255,5,35,0,0,255,256,5,10,0,0,256,257,5,
  	41,0,0,257,258,5,11,0,0,258,259,5,8,0,0,259,260,5,46,0,0,260,264,5,1,
  	0,0,261,263,3,52,26,0,262,261,1,0,0,0,263,266,1,0,0,0,264,262,1,0,0,0,
  	264,265,1,0,0,0,265,267,1,0,0,0,266,264,1,0,0,0,267,268,3,54,27,0,268,
  	269,5,2,0,0,269,51,1,0,0,0,270,273,5,36,0,0,271,274,5,44,0,0,272,274,
  	3,8,4,0,273,271,1,0,0,0,273,272,1,0,0,0,274,275,1,0,0,0,275,276,5,8,0,
  	0,276,277,5,46,0,0,277,278,3,34,17,0,278,53,1,0,0,0,279,280,5,37,0,0,
  	280,281,5,8,0,0,281,282,5,46,0,0,282,283,3,34,17,0,283,55,1,0,0,0,284,
  	285,5,38,0,0,285,286,5,10,0,0,286,287,3,16,8,0,287,288,5,11,0,0,288,289,
  	5,8,0,0,289,290,5,46,0,0,290,295,3,34,17,0,291,292,5,39,0,0,292,293,5,
  	8,0,0,293,294,5,46,0,0,294,296,3,34,17,0,295,291,1,0,0,0,295,296,1,0,
  	0,0,296,57,1,0,0,0,29,60,62,75,78,82,88,91,94,108,115,117,121,128,130,
  	144,152,177,190,194,200,206,218,224,239,243,247,264,273,295
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
      ((1ULL << _la) & 72902791593984) != 0) {
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
      ((1ULL << _la) & 16646144) != 0) {
      setState(93);
      typeSpecifier();
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
    setState(121);
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
    setState(123);
    atom();
    setState(130);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RelScriptParser::Divide

    || _la == RelScriptParser::Multiplication) {
      setState(128);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case RelScriptParser::Multiplication: {
          setState(124);
          match(RelScriptParser::Multiplication);
          setState(125);
          atom();
          break;
        }

        case RelScriptParser::Divide: {
          setState(126);
          match(RelScriptParser::Divide);
          setState(127);
          atom();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(132);
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
    setState(133);
    atom();
    setState(144);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RelScriptParser::Equal: {
        setState(134);
        match(RelScriptParser::Equal);
        setState(135);
        atom();
        break;
      }

      case RelScriptParser::More: {
        setState(136);
        match(RelScriptParser::More);
        setState(137);
        atom();
        break;
      }

      case RelScriptParser::Less: {
        setState(138);
        match(RelScriptParser::Less);
        setState(139);
        atom();
        break;
      }

      case RelScriptParser::MoreEqual: {
        setState(140);
        match(RelScriptParser::MoreEqual);
        setState(141);
        atom();
        break;
      }

      case RelScriptParser::LessEqual: {
        setState(142);
        match(RelScriptParser::LessEqual);
        setState(143);
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
    setState(146);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8438939648) != 0)) {
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

RelScriptParser::ColumnConstructorContext* RelScriptParser::InBracesExpressionContext::columnConstructor() {
  return getRuleContext<RelScriptParser::ColumnConstructorContext>(0);
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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(148);
      inCurlyExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(149);
      columnConstructor();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(150);
      inSquareExpression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(151);
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

tree::TerminalNode* RelScriptParser::ColumnConstructorContext::Comma() {
  return getToken(RelScriptParser::Comma, 0);
}

RelScriptParser::TypeSpecifierContext* RelScriptParser::ColumnConstructorContext::typeSpecifier() {
  return getRuleContext<RelScriptParser::TypeSpecifierContext>(0);
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
  enterRule(_localctx, 22, RelScriptParser::RuleColumnConstructor);
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
    setState(154);
    match(RelScriptParser::LParen);
    setState(155);
    _la = _input->LA(1);
    if (!(_la == RelScriptParser::ID

    || _la == RelScriptParser::StringLiteral)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(156);
    match(RelScriptParser::Comma);
    setState(157);
    typeSpecifier();
    setState(158);
    match(RelScriptParser::RParen);
   
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
  enterRule(_localctx, 24, RelScriptParser::RuleInCurlyExpression);

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
    match(RelScriptParser::LCurly);
    setState(161);
    expressionInsideBraces();
    setState(162);
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
  enterRule(_localctx, 26, RelScriptParser::RuleInSquareExpression);

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
    match(RelScriptParser::LSquare);
    setState(165);
    expressionInsideBraces();
    setState(166);
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
  enterRule(_localctx, 28, RelScriptParser::RuleInParenExpression);

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
    match(RelScriptParser::LParen);
    setState(169);
    expressionInsideBraces();
    setState(170);
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
  enterRule(_localctx, 30, RelScriptParser::RuleExpressionInsideBraces);

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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(172);
      expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(173);
      expression();
      setState(174);
      match(RelScriptParser::Comma);
      setState(175);
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
  enterRule(_localctx, 32, RelScriptParser::RuleFunctionDeclaration);

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
    typeSpecifier();
    setState(180);
    match(RelScriptParser::ID);
    setState(181);
    functionDeclarationBraces();
    setState(182);
    match(RelScriptParser::BlockStart);
    setState(183);
    match(RelScriptParser::NEWLINE);
    setState(184);
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
  enterRule(_localctx, 34, RelScriptParser::RuleBlock);
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
    setState(186);
    match(RelScriptParser::INDENT);
    setState(190);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2534047416320) != 0) {
      setState(187);
      statement();
      setState(192);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(194);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RelScriptParser::Return) {
      setState(193);
      returnExpression();
    }
    setState(196);
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
  enterRule(_localctx, 36, RelScriptParser::RuleReturnExpression);
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
    match(RelScriptParser::Return);
    setState(200);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32985348854784) != 0) {
      setState(199);
      expression();
    }
    setState(202);
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
  enterRule(_localctx, 38, RelScriptParser::RuleFunctionDeclarationBraces);
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
    match(RelScriptParser::LParen);
    setState(206);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16646144) != 0) {
      setState(205);
      functionDeclarationArgs();
    }
    setState(208);
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
  enterRule(_localctx, 40, RelScriptParser::RuleFunctionDeclarationArgs);

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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(210);
      typeSpecifier();
      setState(211);
      match(RelScriptParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(213);
      typeSpecifier();
      setState(214);
      match(RelScriptParser::ID);
      setState(215);
      match(RelScriptParser::Comma);
      setState(216);
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
  enterRule(_localctx, 42, RelScriptParser::RuleFunctionUsage);

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
    match(RelScriptParser::ID);
    setState(224);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(221);
      match(RelScriptParser::LParen);
      setState(222);
      match(RelScriptParser::RParen);
      break;
    }

    case 2: {
      setState(223);
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
  enterRule(_localctx, 44, RelScriptParser::RuleTypeSpecifier);
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
    setState(226);
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
    setState(228);
    match(RelScriptParser::While);
    setState(229);
    match(RelScriptParser::LParen);
    setState(230);
    logicExpression();
    setState(231);
    match(RelScriptParser::RParen);
    setState(232);
    match(RelScriptParser::BlockStart);
    setState(233);
    match(RelScriptParser::NEWLINE);
    setState(234);
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
    setState(236);
    match(RelScriptParser::For);
    setState(237);
    match(RelScriptParser::LParen);
    setState(239);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2199039967232) != 0) {
      setState(238);
      assignExpression();
    }
    setState(241);
    match(RelScriptParser::Semi);
    setState(243);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32985348854784) != 0) {
      setState(242);
      logicExpression();
    }
    setState(245);
    match(RelScriptParser::Semi);
    setState(247);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2199039967232) != 0) {
      setState(246);
      assignExpression();
    }
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
    setState(254);
    match(RelScriptParser::Switch);
    setState(255);
    match(RelScriptParser::LParen);
    setState(256);
    match(RelScriptParser::ID);
    setState(257);
    match(RelScriptParser::RParen);
    setState(258);
    match(RelScriptParser::BlockStart);
    setState(259);
    match(RelScriptParser::NEWLINE);
    setState(260);
    match(RelScriptParser::INDENT);
    setState(264);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RelScriptParser::Case) {
      setState(261);
      caseStatement();
      setState(266);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(267);
    defaultStatement();
    setState(268);
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
    setState(270);
    match(RelScriptParser::Case);
    setState(273);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RelScriptParser::StringLiteral: {
        setState(271);
        match(RelScriptParser::StringLiteral);
        break;
      }

      case RelScriptParser::IntNumber:
      case RelScriptParser::FloatNumber: {
        setState(272);
        number();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(275);
    match(RelScriptParser::BlockStart);
    setState(276);
    match(RelScriptParser::NEWLINE);
    setState(277);
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
    setState(279);
    match(RelScriptParser::Default);
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
    setState(284);
    match(RelScriptParser::If);
    setState(285);
    match(RelScriptParser::LParen);
    setState(286);
    logicExpression();
    setState(287);
    match(RelScriptParser::RParen);
    setState(288);
    match(RelScriptParser::BlockStart);
    setState(289);
    match(RelScriptParser::NEWLINE);
    setState(290);
    block();
    setState(295);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RelScriptParser::Else) {
      setState(291);
      match(RelScriptParser::Else);
      setState(292);
      match(RelScriptParser::BlockStart);
      setState(293);
      match(RelScriptParser::NEWLINE);
      setState(294);
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