
// Generated from RelScriptParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "RelScriptParserListener.h"


/**
 * This class provides an empty implementation of RelScriptParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  RelScriptParserBaseListener : public RelScriptParserListener {
public:

  virtual void enterProgram(RelScriptParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(RelScriptParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(RelScriptParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(RelScriptParser::StatementContext * /*ctx*/) override { }

  virtual void enterMethodUsage(RelScriptParser::MethodUsageContext * /*ctx*/) override { }
  virtual void exitMethodUsage(RelScriptParser::MethodUsageContext * /*ctx*/) override { }

  virtual void enterAssignExpression(RelScriptParser::AssignExpressionContext * /*ctx*/) override { }
  virtual void exitAssignExpression(RelScriptParser::AssignExpressionContext * /*ctx*/) override { }

  virtual void enterNumber(RelScriptParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(RelScriptParser::NumberContext * /*ctx*/) override { }

  virtual void enterAtom(RelScriptParser::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(RelScriptParser::AtomContext * /*ctx*/) override { }

  virtual void enterExpression(RelScriptParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(RelScriptParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterMulExpression(RelScriptParser::MulExpressionContext * /*ctx*/) override { }
  virtual void exitMulExpression(RelScriptParser::MulExpressionContext * /*ctx*/) override { }

  virtual void enterLogicExpression(RelScriptParser::LogicExpressionContext * /*ctx*/) override { }
  virtual void exitLogicExpression(RelScriptParser::LogicExpressionContext * /*ctx*/) override { }

  virtual void enterBinarySign(RelScriptParser::BinarySignContext * /*ctx*/) override { }
  virtual void exitBinarySign(RelScriptParser::BinarySignContext * /*ctx*/) override { }

  virtual void enterInBracesExpression(RelScriptParser::InBracesExpressionContext * /*ctx*/) override { }
  virtual void exitInBracesExpression(RelScriptParser::InBracesExpressionContext * /*ctx*/) override { }

  virtual void enterInCurlyExpression(RelScriptParser::InCurlyExpressionContext * /*ctx*/) override { }
  virtual void exitInCurlyExpression(RelScriptParser::InCurlyExpressionContext * /*ctx*/) override { }

  virtual void enterInSquareExpression(RelScriptParser::InSquareExpressionContext * /*ctx*/) override { }
  virtual void exitInSquareExpression(RelScriptParser::InSquareExpressionContext * /*ctx*/) override { }

  virtual void enterInParenExpression(RelScriptParser::InParenExpressionContext * /*ctx*/) override { }
  virtual void exitInParenExpression(RelScriptParser::InParenExpressionContext * /*ctx*/) override { }

  virtual void enterExpressionInsideBraces(RelScriptParser::ExpressionInsideBracesContext * /*ctx*/) override { }
  virtual void exitExpressionInsideBraces(RelScriptParser::ExpressionInsideBracesContext * /*ctx*/) override { }

  virtual void enterFunctionDeclaration(RelScriptParser::FunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionDeclaration(RelScriptParser::FunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterBlock(RelScriptParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(RelScriptParser::BlockContext * /*ctx*/) override { }

  virtual void enterReturnExpression(RelScriptParser::ReturnExpressionContext * /*ctx*/) override { }
  virtual void exitReturnExpression(RelScriptParser::ReturnExpressionContext * /*ctx*/) override { }

  virtual void enterFunctionDeclarationBraces(RelScriptParser::FunctionDeclarationBracesContext * /*ctx*/) override { }
  virtual void exitFunctionDeclarationBraces(RelScriptParser::FunctionDeclarationBracesContext * /*ctx*/) override { }

  virtual void enterFunctionDeclarationArgs(RelScriptParser::FunctionDeclarationArgsContext * /*ctx*/) override { }
  virtual void exitFunctionDeclarationArgs(RelScriptParser::FunctionDeclarationArgsContext * /*ctx*/) override { }

  virtual void enterFunctionUsage(RelScriptParser::FunctionUsageContext * /*ctx*/) override { }
  virtual void exitFunctionUsage(RelScriptParser::FunctionUsageContext * /*ctx*/) override { }

  virtual void enterType(RelScriptParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(RelScriptParser::TypeContext * /*ctx*/) override { }

  virtual void enterStringType(RelScriptParser::StringTypeContext * /*ctx*/) override { }
  virtual void exitStringType(RelScriptParser::StringTypeContext * /*ctx*/) override { }

  virtual void enterWhileStatement(RelScriptParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(RelScriptParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterForStatement(RelScriptParser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(RelScriptParser::ForStatementContext * /*ctx*/) override { }

  virtual void enterSwitchStatement(RelScriptParser::SwitchStatementContext * /*ctx*/) override { }
  virtual void exitSwitchStatement(RelScriptParser::SwitchStatementContext * /*ctx*/) override { }

  virtual void enterCaseStatement(RelScriptParser::CaseStatementContext * /*ctx*/) override { }
  virtual void exitCaseStatement(RelScriptParser::CaseStatementContext * /*ctx*/) override { }

  virtual void enterDefaultStatement(RelScriptParser::DefaultStatementContext * /*ctx*/) override { }
  virtual void exitDefaultStatement(RelScriptParser::DefaultStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(RelScriptParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(RelScriptParser::IfStatementContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

