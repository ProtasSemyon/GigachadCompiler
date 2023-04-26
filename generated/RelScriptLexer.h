
// Generated from RelScriptLexer.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


#include <queue>
#include <stack>
#include <string>




using namespace antlr4;

using TokenPtr = std::unique_ptr<Token>;

using CommonTokenPtr = std::unique_ptr<CommonToken>;



class  RelScriptLexer : public antlr4::Lexer {
public:
  enum {
    INDENT = 1, DEDENT = 2, Assign = 3, Comma = 4, Semi = 5, Quot = 6, Return = 7, 
    BlockStart = 8, Point = 9, LParen = 10, RParen = 11, LCurly = 12, RCurly = 13, 
    LSquare = 14, RSquare = 15, Const = 16, TableType = 17, ColumnType = 18, 
    RowType = 19, NumberType = 20, TupleType = 21, StringWord = 22, LogicType = 23, 
    Plus = 24, Minus = 25, Divide = 26, Multiplication = 27, Less = 28, 
    Equal = 29, More = 30, LessEqual = 31, MoreEqual = 32, While = 33, For = 34, 
    Switch = 35, Case = 36, Default = 37, If = 38, Else = 39, Break = 40, 
    ID = 41, IntNumber = 42, FloatNumber = 43, StringLiteral = 44, UnterminatedStringLiteral = 45, 
    NEWLINE = 46, WS = 47, BlockComment = 48, LineComment = 49
  };

  explicit RelScriptLexer(antlr4::CharStream *input);

  ~RelScriptLexer() override;


  std::unique_ptr<Token> nextToken() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:


  bool pendingDent = false;

  int indentCount = 0;

  std::queue<Token*> tokenQueue;

  std::stack<int> indentStack;

  Token * initialIndentToken = nullptr;

  int getSavedIndent();

  CommonTokenPtr createToken(int type, std::string text, Token* next);
    


  // Individual action functions triggered by action() above.
  void NEWLINEAction(antlr4::RuleContext *context, size_t actionIndex);
  void WSAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.

};

