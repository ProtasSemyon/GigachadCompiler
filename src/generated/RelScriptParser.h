
// Generated from RelScriptParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  RelScriptParser : public antlr4::Parser {
public:
  enum {
    INDENT = 1, DEDENT = 2, Assign = 3, Comma = 4, Semi = 5, Quot = 6, Return = 7, 
    BlockStart = 8, Point = 9, LParen = 10, RParen = 11, LCurly = 12, RCurly = 13, 
    LSquare = 14, RSquare = 15, Const = 16, TableType = 17, ColumnType = 18, 
    RowType = 19, NumberType = 20, TupleType = 21, StringType = 22, LogicType = 23, 
    Plus = 24, Minus = 25, Divide = 26, Multiplication = 27, Less = 28, 
    Equal = 29, More = 30, LessEqual = 31, MoreEqual = 32, While = 33, For = 34, 
    Switch = 35, Case = 36, Default = 37, If = 38, Else = 39, Break = 40, 
    ID = 41, IntNumber = 42, FloatNumber = 43, StringLiteral = 44, UnterminatedStringLiteral = 45, 
    NEWLINE = 46, WS = 47, BlockComment = 48, LineComment = 49
  };

  enum {
    RuleProgram = 0, RuleStatement = 1, RuleMethodUsage = 2, RuleAssignExpression = 3, 
    RuleNumber = 4, RuleAtom = 5, RuleExpression = 6, RulePlusMinusExpr = 7, 
    RuleMulExpression = 8, RuleMulDivExpr = 9, RuleLogicExpression = 10, 
    RuleInBracesExpression = 11, RuleColumnConstructor = 12, RuleTableConstructor = 13, 
    RuleIdColumnConstr = 14, RuleInCurlyExpression = 15, RuleInSquareExpression = 16, 
    RuleInParenExpression = 17, RuleExpressionInsideBraces = 18, RuleFunctionDeclaration = 19, 
    RuleBlock = 20, RuleReturnExpression = 21, RuleFunctionDeclarationBraces = 22, 
    RuleFunctionDeclarationArgs = 23, RuleFunctionUsage = 24, RuleTypeSpecifier = 25, 
    RuleWhileStatement = 26, RuleForStatement = 27, RuleSwitchStatement = 28, 
    RuleCaseStatement = 29, RuleDefaultStatement = 30, RuleIfStatement = 31
  };

  explicit RelScriptParser(antlr4::TokenStream *input);

  RelScriptParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~RelScriptParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class StatementContext;
  class MethodUsageContext;
  class AssignExpressionContext;
  class NumberContext;
  class AtomContext;
  class ExpressionContext;
  class PlusMinusExprContext;
  class MulExpressionContext;
  class MulDivExprContext;
  class LogicExpressionContext;
  class InBracesExpressionContext;
  class ColumnConstructorContext;
  class TableConstructorContext;
  class IdColumnConstrContext;
  class InCurlyExpressionContext;
  class InSquareExpressionContext;
  class InParenExpressionContext;
  class ExpressionInsideBracesContext;
  class FunctionDeclarationContext;
  class BlockContext;
  class ReturnExpressionContext;
  class FunctionDeclarationBracesContext;
  class FunctionDeclarationArgsContext;
  class FunctionUsageContext;
  class TypeSpecifierContext;
  class WhileStatementContext;
  class ForStatementContext;
  class SwitchStatementContext;
  class CaseStatementContext;
  class DefaultStatementContext;
  class IfStatementContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgramContext* program();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignExpressionContext *assignExpression();
    FunctionDeclarationContext *functionDeclaration();
    FunctionUsageContext *functionUsage();
    MethodUsageContext *methodUsage();
    WhileStatementContext *whileStatement();
    ForStatementContext *forStatement();
    SwitchStatementContext *switchStatement();
    IfStatementContext *ifStatement();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  MethodUsageContext : public antlr4::ParserRuleContext {
  public:
    MethodUsageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    std::vector<FunctionUsageContext *> functionUsage();
    FunctionUsageContext* functionUsage(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Point();
    antlr4::tree::TerminalNode* Point(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MethodUsageContext* methodUsage();

  class  AssignExpressionContext : public antlr4::ParserRuleContext {
  public:
    AssignExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *Assign();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Const();
    TypeSpecifierContext *typeSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignExpressionContext* assignExpression();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntNumber();
    antlr4::tree::TerminalNode *FloatNumber();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumberContext* number();

  class  AtomContext : public antlr4::ParserRuleContext {
  public:
    AtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    NumberContext *number();
    antlr4::tree::TerminalNode *StringLiteral();
    FunctionUsageContext *functionUsage();
    MethodUsageContext *methodUsage();
    InBracesExpressionContext *inBracesExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AtomContext* atom();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MulExpressionContext *mulExpression();
    std::vector<PlusMinusExprContext *> plusMinusExpr();
    PlusMinusExprContext* plusMinusExpr(size_t i);
    LogicExpressionContext *logicExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();

  class  PlusMinusExprContext : public antlr4::ParserRuleContext {
  public:
    PlusMinusExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MulExpressionContext *mulExpression();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PlusMinusExprContext* plusMinusExpr();

  class  MulExpressionContext : public antlr4::ParserRuleContext {
  public:
    MulExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AtomContext *atom();
    std::vector<MulDivExprContext *> mulDivExpr();
    MulDivExprContext* mulDivExpr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MulExpressionContext* mulExpression();

  class  MulDivExprContext : public antlr4::ParserRuleContext {
  public:
    MulDivExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AtomContext *atom();
    antlr4::tree::TerminalNode *Multiplication();
    antlr4::tree::TerminalNode *Divide();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MulDivExprContext* mulDivExpr();

  class  LogicExpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AtomContext *> atom();
    AtomContext* atom(size_t i);
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *More();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *MoreEqual();
    antlr4::tree::TerminalNode *LessEqual();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LogicExpressionContext* logicExpression();

  class  InBracesExpressionContext : public antlr4::ParserRuleContext {
  public:
    InBracesExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InCurlyExpressionContext *inCurlyExpression();
    ColumnConstructorContext *columnConstructor();
    TableConstructorContext *tableConstructor();
    InSquareExpressionContext *inSquareExpression();
    InParenExpressionContext *inParenExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InBracesExpressionContext* inBracesExpression();

  class  ColumnConstructorContext : public antlr4::ParserRuleContext {
  public:
    ColumnConstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LParen();
    antlr4::tree::TerminalNode *RParen();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ColumnConstructorContext* columnConstructor();

  class  TableConstructorContext : public antlr4::ParserRuleContext {
  public:
    TableConstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LSquare();
    std::vector<IdColumnConstrContext *> idColumnConstr();
    IdColumnConstrContext* idColumnConstr(size_t i);
    antlr4::tree::TerminalNode *RSquare();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TableConstructorContext* tableConstructor();

  class  IdColumnConstrContext : public antlr4::ParserRuleContext {
  public:
    IdColumnConstrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    ColumnConstructorContext *columnConstructor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdColumnConstrContext* idColumnConstr();

  class  InCurlyExpressionContext : public antlr4::ParserRuleContext {
  public:
    InCurlyExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCurly();
    ExpressionInsideBracesContext *expressionInsideBraces();
    antlr4::tree::TerminalNode *RCurly();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InCurlyExpressionContext* inCurlyExpression();

  class  InSquareExpressionContext : public antlr4::ParserRuleContext {
  public:
    InSquareExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LSquare();
    ExpressionInsideBracesContext *expressionInsideBraces();
    antlr4::tree::TerminalNode *RSquare();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InSquareExpressionContext* inSquareExpression();

  class  InParenExpressionContext : public antlr4::ParserRuleContext {
  public:
    InParenExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LParen();
    ExpressionInsideBracesContext *expressionInsideBraces();
    antlr4::tree::TerminalNode *RParen();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InParenExpressionContext* inParenExpression();

  class  ExpressionInsideBracesContext : public antlr4::ParserRuleContext {
  public:
    ExpressionInsideBracesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Comma();
    ExpressionInsideBracesContext *expressionInsideBraces();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionInsideBracesContext* expressionInsideBraces();

  class  FunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierContext *typeSpecifier();
    antlr4::tree::TerminalNode *ID();
    FunctionDeclarationBracesContext *functionDeclarationBraces();
    antlr4::tree::TerminalNode *BlockStart();
    antlr4::tree::TerminalNode *NEWLINE();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionDeclarationContext* functionDeclaration();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INDENT();
    antlr4::tree::TerminalNode *DEDENT();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    ReturnExpressionContext *returnExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockContext* block();

  class  ReturnExpressionContext : public antlr4::ParserRuleContext {
  public:
    ReturnExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Return();
    antlr4::tree::TerminalNode *NEWLINE();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnExpressionContext* returnExpression();

  class  FunctionDeclarationBracesContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclarationBracesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LParen();
    antlr4::tree::TerminalNode *RParen();
    FunctionDeclarationArgsContext *functionDeclarationArgs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionDeclarationBracesContext* functionDeclarationBraces();

  class  FunctionDeclarationArgsContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclarationArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierContext *typeSpecifier();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *Comma();
    FunctionDeclarationArgsContext *functionDeclarationArgs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionDeclarationArgsContext* functionDeclarationArgs();

  class  FunctionUsageContext : public antlr4::ParserRuleContext {
  public:
    FunctionUsageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LParen();
    antlr4::tree::TerminalNode *RParen();
    InParenExpressionContext *inParenExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionUsageContext* functionUsage();

  class  TypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TableType();
    antlr4::tree::TerminalNode *ColumnType();
    antlr4::tree::TerminalNode *RowType();
    antlr4::tree::TerminalNode *StringType();
    antlr4::tree::TerminalNode *NumberType();
    antlr4::tree::TerminalNode *TupleType();
    antlr4::tree::TerminalNode *LogicType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeSpecifierContext* typeSpecifier();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *LParen();
    LogicExpressionContext *logicExpression();
    antlr4::tree::TerminalNode *RParen();
    antlr4::tree::TerminalNode *BlockStart();
    antlr4::tree::TerminalNode *NEWLINE();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhileStatementContext* whileStatement();

  class  ForStatementContext : public antlr4::ParserRuleContext {
  public:
    ForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *LParen();
    std::vector<antlr4::tree::TerminalNode *> Semi();
    antlr4::tree::TerminalNode* Semi(size_t i);
    antlr4::tree::TerminalNode *RParen();
    antlr4::tree::TerminalNode *BlockStart();
    antlr4::tree::TerminalNode *NEWLINE();
    BlockContext *block();
    std::vector<AssignExpressionContext *> assignExpression();
    AssignExpressionContext* assignExpression(size_t i);
    LogicExpressionContext *logicExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForStatementContext* forStatement();

  class  SwitchStatementContext : public antlr4::ParserRuleContext {
  public:
    SwitchStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Switch();
    antlr4::tree::TerminalNode *LParen();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *RParen();
    antlr4::tree::TerminalNode *BlockStart();
    antlr4::tree::TerminalNode *NEWLINE();
    antlr4::tree::TerminalNode *INDENT();
    DefaultStatementContext *defaultStatement();
    antlr4::tree::TerminalNode *DEDENT();
    std::vector<CaseStatementContext *> caseStatement();
    CaseStatementContext* caseStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SwitchStatementContext* switchStatement();

  class  CaseStatementContext : public antlr4::ParserRuleContext {
  public:
    CaseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Case();
    antlr4::tree::TerminalNode *BlockStart();
    antlr4::tree::TerminalNode *NEWLINE();
    BlockContext *block();
    antlr4::tree::TerminalNode *StringLiteral();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CaseStatementContext* caseStatement();

  class  DefaultStatementContext : public antlr4::ParserRuleContext {
  public:
    DefaultStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Default();
    antlr4::tree::TerminalNode *BlockStart();
    antlr4::tree::TerminalNode *NEWLINE();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefaultStatementContext* defaultStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *LParen();
    LogicExpressionContext *logicExpression();
    antlr4::tree::TerminalNode *RParen();
    std::vector<antlr4::tree::TerminalNode *> BlockStart();
    antlr4::tree::TerminalNode* BlockStart(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);
    antlr4::tree::TerminalNode *Else();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfStatementContext* ifStatement();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

