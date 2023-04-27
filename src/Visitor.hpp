#pragma once

#include <llvm/IR/IRBuilder.h>
#include <vector>
#include <RelScriptParser.h>

using namespace llvm;

class Visitor
{
public:
	std::unique_ptr<LLVMContext> llvm_context;
	llvm::IRBuilder<> builder;
	std::unique_ptr<Module> module;

	Visitor() : llvm_context(std::make_unique<llvm::LLVMContext>()),
							builder(*this->llvm_context),
							module(std::make_unique<Module>("output", *this->llvm_context)) {}

	void fromFile(const std::string &path);

	void visitProgram(RelScriptParser::ProgramContext *ctx);

  void visitStatements(const std::vector<RelScriptParser::StatementContext *> &statements);

  void visitStatement(RelScriptParser::StatementContext *ctx) {
    return ;
  }

  void visitMethodUsage(RelScriptParser::MethodUsageContext *ctx) {
    return ;
  }

  void visitAssignExpression(RelScriptParser::AssignExpressionContext *ctx) {
    return ;
  }

  void visitNumber(RelScriptParser::NumberContext *ctx) {
    return ;
  }

  void visitAtom(RelScriptParser::AtomContext *ctx) {
    return ;
  }

  void visitExpression(RelScriptParser::ExpressionContext *ctx) {
    return ;
  }

  void visitMulExpression(RelScriptParser::MulExpressionContext *ctx) {
    return ;
  }

  void visitLogicExpression(RelScriptParser::LogicExpressionContext *ctx) {
    return ;
  }

  void visitBinarySign(RelScriptParser::BinarySignContext *ctx) {
    return ;
  }

  void visitInBracesExpression(RelScriptParser::InBracesExpressionContext *ctx) {
    return ;
  }

  void visitColumnConstructor(RelScriptParser::ColumnConstructorContext *ctx) {
    return ;
  }

  void visitInCurlyExpression(RelScriptParser::InCurlyExpressionContext *ctx) {
    return ;
  }

  void visitInSquareExpression(RelScriptParser::InSquareExpressionContext *ctx) {
    return ;
  }

  void visitInParenExpression(RelScriptParser::InParenExpressionContext *ctx) {
    return ;
  }

  void visitExpressionInsideBraces(RelScriptParser::ExpressionInsideBracesContext *ctx) {
    return ;
  }

  void visitFunctionDeclaration(RelScriptParser::FunctionDeclarationContext *ctx) {
    return ;
  }

  void visitBlock(RelScriptParser::BlockContext *ctx) {
    return ;
  }

  void visitReturnExpression(RelScriptParser::ReturnExpressionContext *ctx) {
    return ;
  }

  void visitFunctionDeclarationBraces(RelScriptParser::FunctionDeclarationBracesContext *ctx) {
    return ;
  }

  void visitFunctionDeclarationArgs(RelScriptParser::FunctionDeclarationArgsContext *ctx) {
    return ;
  }

  void visitFunctionUsage(RelScriptParser::FunctionUsageContext *ctx) {
    return ;
  }

  void visitTypeSpecifier(RelScriptParser::TypeSpecifierContext *ctx) {
    return ;
  }

  void visitWhileStatement(RelScriptParser::WhileStatementContext *ctx) {
    return ;
  }

  void visitForStatement(RelScriptParser::ForStatementContext *ctx) {
    return ;
  }

  void visitSwitchStatement(RelScriptParser::SwitchStatementContext *ctx) {
    return ;
  }

  void visitCaseStatement(RelScriptParser::CaseStatementContext *ctx) {
    return ;
  }

  void visitDefaultStatement(RelScriptParser::DefaultStatementContext *ctx) {
    return ;
  }

  void visitIfStatement(RelScriptParser::IfStatementContext *ctx) {
    return ;
  }
};
