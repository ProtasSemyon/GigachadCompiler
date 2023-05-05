#pragma once

#include <llvm/IR/IRBuilder.h>
#include <llvm/Support/SourceMgr.h>
#include <llvm/IRReader/IRReader.h>

#include <vector>
#include <RelScriptParser.h>
#include "Scope.hpp"

using namespace llvm;

const std::string TYPES_DEFINE = "/home/smn/BSUIR_6/YAPIS/GigachadCompiler/src/types/types.bc";

class Visitor
{
public:
	std::unique_ptr<LLVMContext> llvm_context;
	llvm::IRBuilder<> builder;
	std::unique_ptr<Module> module;
  llvm::SMDiagnostic err;
  std::vector<Scope> scopes;

  Scope &currentScope();

  llvm::Value *getVariable(const std::string &name);

  Type * tableTy;
  Type * columnTy;
  Type * rowTy;

	Visitor() : llvm_context(std::make_unique<llvm::LLVMContext>()),
							builder(*this->llvm_context) {
    module = parseIRFile(TYPES_DEFINE, err, *llvm_context);
    module->setModuleIdentifier("output");

    auto allSctructs = module->getIdentifiedStructTypes();
    for (auto& t : allSctructs) {
      if (t->getName() == "struct.Table") {
        tableTy = t;
      }
      if (t->getName() == "struct.Column") {
        columnTy = t;
      }
      if (t->getName() == "struct.Row") {
        rowTy = t;
      }
    }
  }

	void fromFile(const std::string &path);

	void visitProgram(RelScriptParser::ProgramContext *ctx);

  void visitStatements(const std::vector<RelScriptParser::StatementContext *> &statements);

  void visitStatement(RelScriptParser::StatementContext *ctx);

  void visitMethodUsage(RelScriptParser::MethodUsageContext *ctx);

  void visitAssignExpression(RelScriptParser::AssignExpressionContext *ctx);

  void visitNumber(RelScriptParser::NumberContext *ctx);

  Value *visitAtom(RelScriptParser::AtomContext *ctx);

  Value *visitExpression(RelScriptParser::ExpressionContext *ctx);

  Value *visitMulExpression(RelScriptParser::MulExpressionContext *ctx);

  Value *visitLogicExpression(RelScriptParser::LogicExpressionContext *ctx);

  void visitInBracesExpression(RelScriptParser::InBracesExpressionContext *ctx);

  void visitColumnConstructor(RelScriptParser::ColumnConstructorContext *ctx);

  void visitInCurlyExpression(RelScriptParser::InCurlyExpressionContext *ctx);

  void visitInSquareExpression(RelScriptParser::InSquareExpressionContext *ctx);

  void visitInParenExpression(RelScriptParser::InParenExpressionContext *ctx);

  void visitExpressionInsideBraces(RelScriptParser::ExpressionInsideBracesContext *ctx);

  void visitFunctionDeclaration(RelScriptParser::FunctionDeclarationContext *ctx);

  void visitBlock(RelScriptParser::BlockContext *ctx);

  void visitReturnExpression(RelScriptParser::ReturnExpressionContext *ctx);

  void visitFunctionDeclarationBraces(RelScriptParser::FunctionDeclarationBracesContext *ctx);

  void visitFunctionDeclarationArgs(RelScriptParser::FunctionDeclarationArgsContext *ctx);

  void visitFunctionUsage(RelScriptParser::FunctionUsageContext *ctx);

  Type* visitTypeSpecifier(RelScriptParser::TypeSpecifierContext *ctx);

  void visitWhileStatement(RelScriptParser::WhileStatementContext *ctx);

  void visitForStatement(RelScriptParser::ForStatementContext *ctx);

  void visitSwitchStatement(RelScriptParser::SwitchStatementContext *ctx);

  void visitCaseStatement(RelScriptParser::CaseStatementContext *ctx);

  void visitDefaultStatement(RelScriptParser::DefaultStatementContext *ctx);

  void visitIfStatement(RelScriptParser::IfStatementContext *ctx);
};
