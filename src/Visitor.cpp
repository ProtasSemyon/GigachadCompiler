#include "Visitor.hpp"

#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "RelScriptLexer.h"
#include "RelScriptParser.h"
#include "RelScriptErrorListener.h"
#include "RelScriptErrorStrategy.h"
#include "SemanticErrorPrinter.hpp"
#include "llvm/Support/raw_ostream.h"

llvm::Value *Visitor::getVariable(const std::string &name){
  for (auto it = scopes.rbegin(); it != scopes.rend(); it++){
    auto variable = it->getVariable(name);

    if (variable){
      return variable;
    }
  }

  return nullptr;
}

Scope &Visitor::currentScope() {
  return scopes.back();
}


void Visitor::fromFile(const std::string &path){
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

  RelScriptParser::ProgramContext *ctx = parser->program();
  if (listener.isErrorDid()) {
    return;
  }
  visitProgram(ctx);
}

void Visitor::visitProgram(RelScriptParser::ProgramContext *ctx) {
  auto functionType = FunctionType::get(Type::getInt32Ty(*llvm_context), {}, false);
  auto function = Function::Create(functionType, GlobalValue::LinkageTypes::ExternalLinkage, "main", module.get());
  auto block = BasicBlock::Create(builder.getContext());

  scopes.push_back(Scope(function));

  block->insertInto(function);
  builder.SetInsertPoint(block);

  visitStatements(ctx->statement());

  builder.CreateRet(llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), 0, true));
}

void Visitor::visitStatements(const std::vector<RelScriptParser::StatementContext *> &statements) {
  for (auto &statement : statements) {
    visitStatement(statement);
  }
}

void Visitor::visitStatement(RelScriptParser::StatementContext *ctx) {
  if (auto assExpr = ctx->assignExpression()) {
    visitAssignExpression(ctx->assignExpression());
  }
  if (auto funcDeclExpr = ctx->functionDeclaration()) {

  }
  if (auto funcUseExpr = ctx->functionUsage()) {

  }
  if (auto methUseExpr = ctx->methodUsage()) {

  }
  if (auto whileExpr = ctx->whileStatement()) {

  }
  if (auto forExpr = ctx->forStatement()) {

  }
  if (auto switchExpr = ctx->switchStatement()) {

  }
  if (auto ifExpr = ctx->ifStatement()) {

  }  
}

void Visitor::visitAssignExpression(RelScriptParser::AssignExpressionContext *ctx) {
  bool constant = ctx->Const();
  Type *varTy = visitTypeSpecifier(ctx->typeSpecifier());

  Value * exprVal = visitExpression(ctx->expression());

  if (varTy) {
    std::cout << varTy->getStructName().str();
    if (varTy == exprVal->getType()) {
      if (auto var = getVariable(ctx->ID()->getText())) {
        SemanticErrorPrinter::callRedeclarationOfVar(ctx->ID()->getSymbol());
        return;
      } else {
        auto alloca = builder.CreateAlloca(varTy, nullptr, ctx->ID()->getText());
        builder.CreateStore(exprVal, alloca);
        currentScope().setVariable(ctx->ID()->getText(), alloca, constant);
      }
    } else {
      //TODO: add check for type conversion
      SemanticErrorPrinter::callIncompatibleType(ctx->ID()->getSymbol(), varTy->getStructName().str(), exprVal->getType()->getStructName().str());
      return;
    }
  } else {
    varTy = exprVal->getType();
    if (auto var = getVariable(ctx->ID()->getText())) {
      auto savedVarTy = var->getType();
      if (varTy != savedVarTy) {
        //TODO: add check for type conversion
        SemanticErrorPrinter::callIncompatibleType(ctx->ID()->getSymbol(), varTy->getStructName().str(), savedVarTy->getStructName().str());
        return;
      } else {
        if (currentScope().setVariable(ctx->ID()->getText(), var, constant)) {
          builder.CreateStore(exprVal, var);
        } else {
          SemanticErrorPrinter::callChangeConstant(ctx->ID()->getSymbol());
          return;
        }
      }
    } else {
      auto alloca = builder.CreateAlloca(varTy, nullptr, ctx->ID()->getText());
      builder.CreateStore(exprVal, alloca);
      currentScope().setVariable(ctx->ID()->getText(), alloca, constant);
    }
  }
}



void Visitor::visitFunctionDeclaration(RelScriptParser::FunctionDeclarationContext *ctx) {

}

Type* Visitor::visitTypeSpecifier(RelScriptParser::TypeSpecifierContext *ctx) {
  if (!ctx) {
    return nullptr;
  }

  if (auto tableType = ctx->TableType()) {
    return tableTy;
  }
  if (auto columnType = ctx->ColumnType()) {
    return columnTy;
  }
  if (auto rowType = ctx->RowType()) {
    return rowTy;
  }
  if (auto stringType = ctx->StringType()) {

  }
  if (auto numberType = ctx->NumberType()) {
    return Type::getInt64Ty(module->getContext());
  }
  if (auto tupleType = ctx->TupleType()) {
    
  }
  if (auto logicType = ctx->LogicType()) {
    return Type::getInt1Ty(module->getContext());
  }

  return nullptr;
}

Value *Visitor::visitExpression(RelScriptParser::ExpressionContext *ctx) {
  if (auto logicExpr = ctx->logicExpression()) {
    return visitLogicExpression(logicExpr);
  }
  Value *exprVal = visitMulExpression(ctx->mulExpression());
  for (auto &plusMinusExpr : ctx->plusMinusExpr()) {
    Value *rhsVal = visitMulExpression(plusMinusExpr->mulExpression());
    if (plusMinusExpr->Plus()) {
      //TODO: create + instruction
    } else if (plusMinusExpr->Minus()) {
      //TODO : create - instruction
    }
  }
  return exprVal;
}

Value *Visitor::visitLogicExpression(RelScriptParser::LogicExpressionContext *ctx) {
  return nullptr;
}

Value *Visitor::visitMulExpression(RelScriptParser::MulExpressionContext *ctx) {
  Value *exprVal = visitAtom(ctx->atom());

  for (auto &mulDivExpr : ctx->mulDivExpr()) {
    Value *rhsVal = visitAtom(mulDivExpr->atom());
    if (!rhsVal) {
      continue;
    }
    if (mulDivExpr->Multiplication()) {
      //TODO: create * instruction
    } else if (mulDivExpr->Divide()) {
      //TODO: create / instruction
    }
  }
  return exprVal;
}

Value *Visitor::visitAtom(RelScriptParser::AtomContext *ctx) {
  if (auto id = ctx->ID()) {
    if (getVariable(ctx->ID()->getText())) {
      SemanticErrorPrinter::callUndefinedVariable(ctx->ID()->getSymbol());
      return nullptr;
    }
  }
  if (auto number = ctx->number()) {
    if (number->IntNumber()) {
      return ConstantInt::get(Type::getInt64Ty(*llvm_context), std::stol(number->IntNumber()->getText()), true);
    }
    if (number->FloatNumber()) {
      return ConstantFP::get(Type::getDoubleTy(*llvm_context), std::stod(number->FloatNumber()->getText()));
    }
  }
  if (auto str = ctx->StringLiteral()) {
    return ConstantDataArray::getString(*llvm_context, ctx->StringLiteral()->toString());
  }
  if (auto func = ctx->functionUsage()) {

  }
  if (auto method = ctx->methodUsage()) {

  }
  if (auto inBraces = ctx->inBracesExpression()) {

  }
  return nullptr;
}








