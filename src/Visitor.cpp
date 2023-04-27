#include "Visitor.hpp"

#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "RelScriptLexer.h"
#include "RelScriptParser.h"
#include "RelScriptErrorListener.h"
#include "RelScriptErrorStrategy.h"

void Visitor::fromFile(const std::string &path)
{
  std::ifstream stream;
  stream.open(path);

  auto input = new ANTLRInputStream(stream);
  auto lexer = new RelScriptLexer(input);
  auto tokens = new CommonTokenStream(lexer);
  auto parser = new RelScriptParser(tokens);

  RelScriptErrorListener listener;
  parser->removeErrorListeners();
  parser->addErrorListener(&listener);
  parser->setErrorHandler(std::make_shared<RelScriptErrorStrategy>());

  tree::ParseTree *context = parser->program();

  if (listener.isErrorDid()) {
    return;
  }
  RelScriptParser::ProgramContext *ctx = parser->program();
  visitProgram(ctx);
}

void Visitor::visitProgram(RelScriptParser::ProgramContext *ctx) {
  auto functionType = FunctionType::get(Type::getInt32Ty(*this->llvm_context), {}, false);
  auto function = Function::Create(functionType, GlobalValue::LinkageTypes::ExternalLinkage, "main", this->module.get());
  auto block = BasicBlock::Create(builder.getContext());

  //this->scopes.push_back(Scope(function));

  block->insertInto(function);
  this->builder.SetInsertPoint(block);

  this->visitStatements(ctx->statement());

  this->builder.CreateRet(llvm::ConstantInt::get(llvm::Type::getInt32Ty(*this->llvm_context), 0, true));
}

void Visitor::visitStatements(const std::vector<RelScriptParser::StatementContext *> &statements) {
  for (auto &statement : statements) {
    visitStatement(statement);
  }
}


