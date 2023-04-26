
// Generated from RelScriptParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "RelScriptParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by RelScriptParser.
 */
class  RelScriptParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(RelScriptParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(RelScriptParser::ProgramContext *ctx) = 0;

  virtual void enterStatement(RelScriptParser::StatementContext *ctx) = 0;
  virtual void exitStatement(RelScriptParser::StatementContext *ctx) = 0;

  virtual void enterMethodUsage(RelScriptParser::MethodUsageContext *ctx) = 0;
  virtual void exitMethodUsage(RelScriptParser::MethodUsageContext *ctx) = 0;

  virtual void enterAssignExpression(RelScriptParser::AssignExpressionContext *ctx) = 0;
  virtual void exitAssignExpression(RelScriptParser::AssignExpressionContext *ctx) = 0;

  virtual void enterNumber(RelScriptParser::NumberContext *ctx) = 0;
  virtual void exitNumber(RelScriptParser::NumberContext *ctx) = 0;

  virtual void enterAtom(RelScriptParser::AtomContext *ctx) = 0;
  virtual void exitAtom(RelScriptParser::AtomContext *ctx) = 0;

  virtual void enterExpression(RelScriptParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(RelScriptParser::ExpressionContext *ctx) = 0;

  virtual void enterMulExpression(RelScriptParser::MulExpressionContext *ctx) = 0;
  virtual void exitMulExpression(RelScriptParser::MulExpressionContext *ctx) = 0;

  virtual void enterLogicExpression(RelScriptParser::LogicExpressionContext *ctx) = 0;
  virtual void exitLogicExpression(RelScriptParser::LogicExpressionContext *ctx) = 0;

  virtual void enterBinarySign(RelScriptParser::BinarySignContext *ctx) = 0;
  virtual void exitBinarySign(RelScriptParser::BinarySignContext *ctx) = 0;

  virtual void enterInBracesExpression(RelScriptParser::InBracesExpressionContext *ctx) = 0;
  virtual void exitInBracesExpression(RelScriptParser::InBracesExpressionContext *ctx) = 0;

  virtual void enterColumnConstructor(RelScriptParser::ColumnConstructorContext *ctx) = 0;
  virtual void exitColumnConstructor(RelScriptParser::ColumnConstructorContext *ctx) = 0;

  virtual void enterInCurlyExpression(RelScriptParser::InCurlyExpressionContext *ctx) = 0;
  virtual void exitInCurlyExpression(RelScriptParser::InCurlyExpressionContext *ctx) = 0;

  virtual void enterInSquareExpression(RelScriptParser::InSquareExpressionContext *ctx) = 0;
  virtual void exitInSquareExpression(RelScriptParser::InSquareExpressionContext *ctx) = 0;

  virtual void enterInParenExpression(RelScriptParser::InParenExpressionContext *ctx) = 0;
  virtual void exitInParenExpression(RelScriptParser::InParenExpressionContext *ctx) = 0;

  virtual void enterExpressionInsideBraces(RelScriptParser::ExpressionInsideBracesContext *ctx) = 0;
  virtual void exitExpressionInsideBraces(RelScriptParser::ExpressionInsideBracesContext *ctx) = 0;

  virtual void enterFunctionDeclaration(RelScriptParser::FunctionDeclarationContext *ctx) = 0;
  virtual void exitFunctionDeclaration(RelScriptParser::FunctionDeclarationContext *ctx) = 0;

  virtual void enterBlock(RelScriptParser::BlockContext *ctx) = 0;
  virtual void exitBlock(RelScriptParser::BlockContext *ctx) = 0;

  virtual void enterReturnExpression(RelScriptParser::ReturnExpressionContext *ctx) = 0;
  virtual void exitReturnExpression(RelScriptParser::ReturnExpressionContext *ctx) = 0;

  virtual void enterFunctionDeclarationBraces(RelScriptParser::FunctionDeclarationBracesContext *ctx) = 0;
  virtual void exitFunctionDeclarationBraces(RelScriptParser::FunctionDeclarationBracesContext *ctx) = 0;

  virtual void enterFunctionDeclarationArgs(RelScriptParser::FunctionDeclarationArgsContext *ctx) = 0;
  virtual void exitFunctionDeclarationArgs(RelScriptParser::FunctionDeclarationArgsContext *ctx) = 0;

  virtual void enterFunctionUsage(RelScriptParser::FunctionUsageContext *ctx) = 0;
  virtual void exitFunctionUsage(RelScriptParser::FunctionUsageContext *ctx) = 0;

  virtual void enterTypeSpecifier(RelScriptParser::TypeSpecifierContext *ctx) = 0;
  virtual void exitTypeSpecifier(RelScriptParser::TypeSpecifierContext *ctx) = 0;

  virtual void enterStringType(RelScriptParser::StringTypeContext *ctx) = 0;
  virtual void exitStringType(RelScriptParser::StringTypeContext *ctx) = 0;

  virtual void enterWhileStatement(RelScriptParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(RelScriptParser::WhileStatementContext *ctx) = 0;

  virtual void enterForStatement(RelScriptParser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(RelScriptParser::ForStatementContext *ctx) = 0;

  virtual void enterSwitchStatement(RelScriptParser::SwitchStatementContext *ctx) = 0;
  virtual void exitSwitchStatement(RelScriptParser::SwitchStatementContext *ctx) = 0;

  virtual void enterCaseStatement(RelScriptParser::CaseStatementContext *ctx) = 0;
  virtual void exitCaseStatement(RelScriptParser::CaseStatementContext *ctx) = 0;

  virtual void enterDefaultStatement(RelScriptParser::DefaultStatementContext *ctx) = 0;
  virtual void exitDefaultStatement(RelScriptParser::DefaultStatementContext *ctx) = 0;

  virtual void enterIfStatement(RelScriptParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(RelScriptParser::IfStatementContext *ctx) = 0;


};

