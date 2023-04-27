
// Generated from RelScriptParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "RelScriptParserVisitor.h"


/**
 * This class provides an empty implementation of RelScriptParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  RelScriptParserBaseVisitor : public RelScriptParserVisitor {
public:

  virtual std::any visitProgram(RelScriptParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(RelScriptParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethodUsage(RelScriptParser::MethodUsageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignExpression(RelScriptParser::AssignExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(RelScriptParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtom(RelScriptParser::AtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(RelScriptParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulExpression(RelScriptParser::MulExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicExpression(RelScriptParser::LogicExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBinarySign(RelScriptParser::BinarySignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInBracesExpression(RelScriptParser::InBracesExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnConstructor(RelScriptParser::ColumnConstructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInCurlyExpression(RelScriptParser::InCurlyExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInSquareExpression(RelScriptParser::InSquareExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInParenExpression(RelScriptParser::InParenExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionInsideBraces(RelScriptParser::ExpressionInsideBracesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDeclaration(RelScriptParser::FunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(RelScriptParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnExpression(RelScriptParser::ReturnExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDeclarationBraces(RelScriptParser::FunctionDeclarationBracesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDeclarationArgs(RelScriptParser::FunctionDeclarationArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionUsage(RelScriptParser::FunctionUsageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeSpecifier(RelScriptParser::TypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStatement(RelScriptParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForStatement(RelScriptParser::ForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitchStatement(RelScriptParser::SwitchStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCaseStatement(RelScriptParser::CaseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefaultStatement(RelScriptParser::DefaultStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStatement(RelScriptParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }


};

