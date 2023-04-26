#pragma once
#include "antlr4-runtime.h"

#include "../generated/RelScriptParserBaseListener.h"
#include "RelScriptErrorListener.h"

using namespace antlr4;

struct VisibilityScope {
  std::map<std::string, std::string> variableTypeTable;
  std::vector<std::string> constants;
  std::map<std::string, std::string> functionTypeTable;

};

class RelScriptSemanticListener : public RelScriptParserBaseListener {
private:
  std::vector<VisibilityScope> scopes;

  std::map<std::string, std::string> variableTypeTable;
  std::vector<std::string> constants;
  std::map<std::string, std::string> functionTypeTable;

  std::string getType(RelScriptParser::FunctionUsageContext * ctx) {
    return functionTypeTable[ctx->ID()->getText()];
  } 

  std::string getType(RelScriptParser::ExpressionInsideBracesContext * ctx) {
    std::vector<RelScriptParser::ExpressionContext *> exprs;
    while (ctx != nullptr) {
      exprs.emplace_back(ctx->expression());
      ctx = ctx->expressionInsideBraces();
    }
    std::string type = getType(exprs.front());
    for (auto & expr : exprs) {
      if (type != getType(expr)) {
        return "";
      }
    }
    return type;
  }

  std::string getType(RelScriptParser::MethodUsageContext * ctx) {
    return "table";
  }

  std::string getType(RelScriptParser::InParenExpressionContext * ctx) {
    auto type = getType(ctx->expressionInsideBraces());
    if (!type.empty()) {
      return type;
    } else {
      return "tuple";
    }
  }

  std::string getType(RelScriptParser::InSquareExpressionContext * ctx) {
    auto type = getType(ctx->expressionInsideBraces());
    if (!type.empty() && type == "column") {
      return "table";
    }
    return "row";
  }

  std::string getType(RelScriptParser::InBracesExpressionContext * ctx) {
    if (ctx->columnConstructor()) {
      return "column";
    }

    if (ctx->inParenExpression()) {
      return getType(ctx->inParenExpression());
    }

    if (ctx->inSquareExpression()) {
      return getType(ctx->inSquareExpression());
    }

    return "";
  }


  std::string getType(RelScriptParser::AtomContext * ctx) {
    if (ctx->StringLiteral()) {
      return "string";
    }
    if (ctx->functionUsage()) {
      return getType(ctx->functionUsage());
    }
    if (ctx->methodUsage()) {
      return getType(ctx->methodUsage());
    }
    if (ctx->number()) {
      return "number";
    }
    if (ctx->inBracesExpression()) {
      return getType(ctx->inBracesExpression());
    }
    if (ctx->ID()) {
      return variableTypeTable[ctx->ID()->getText()];
    }
    return "";
  }

  std::string getType(RelScriptParser::MulExpressionContext * ctx) {
    auto atoms = ctx->atom();    
    std::vector<std::string> types;
    for (auto& atom : atoms) {
      types.emplace_back(getType(atom));
    }    
    return types[0];
  }

  std::string getType(RelScriptParser::ExpressionContext * ctx) {
    if (auto logicCtx = ctx->logicExpression()) {
      return "logic";
    }
    auto mulExprs = ctx->mulExpression();    
    std::vector<std::string> types;
    for (auto& mulExpr : mulExprs) {
      types.emplace_back(getType(mulExpr));
    }
    return types[0];
  }

  RelScriptErrorListener * errorListener;

  bool searchVariableInScopes(std::string id, VisibilityScope& out) {
    for (int i = scopes.size() - 1; i >= 0; i--) {
      if (scopes[i].variableTypeTable.find(id) != variableTypeTable.end()) {
        out = scopes[i];
        return true;
      }
    }
    return false;
  }

  bool searchFunctionInScopes(std::string id, VisibilityScope& out) {
    for (int i = scopes.size() - 1; i >= 0; i--) {
      if (scopes[i].functionTypeTable.find(id) != functionTypeTable.end()) {
        out = scopes[i];
        return true;
      }
    }
    return false;
  }

public:

  RelScriptSemanticListener(RelScriptErrorListener * errorListener) : errorListener(errorListener) {

  }

  virtual void exitAssignExpression(RelScriptParser::AssignExpressionContext * ctx) override {
    if (errorListener->isErrorDid()) {
      return;
    }
    std::string ID = ctx->ID()->getText();
    bool isConst = ctx->Const() ? true : false;
    std::string type = ctx->typeSpecifier() ? ctx->typeSpecifier()->getText() : "";

    if (functionTypeTable.find(ID) != functionTypeTable.end()) {
      auto token = ctx->ID()->getSymbol();
      std::cerr << "Error at line " << token->getLine() << " : '" << ID << "' defined as function" << std::endl;
      return;
    }

    if (variableTypeTable.find(ID) == variableTypeTable.end()){
      if (type.empty()) {
        variableTypeTable[ID] = getType(ctx->expression());
      } else {
        auto targetType = getType(ctx->expression());
        if (type == targetType) {
          variableTypeTable[ID] = type;
        } else {
          auto token = ctx->ID()->getSymbol();
          std::cerr << "Error at line " << token->getLine() << " : incorrect type of variable '" << ID << "'" << std::endl;
          return;
        }
      }

      if (isConst) {
        constants.emplace_back(ID);
      }
      std::cout << ID << " - " <<variableTypeTable[ID] << std::endl;

    } else {
      if(!type.empty() || isConst) {
        auto token = ctx->ID()->getSymbol();
        std::cerr << "Error at line " << token->getLine() << " : redefinition of variable '" << ID << "'" << std::endl;
        return;
      }

      if (std::find(constants.begin(), constants.end(), ID) != constants.end()) {
        auto token = ctx->ID()->getSymbol();
        std::cerr << "Error at line " << token->getLine() << " : try to change constant variable '" << ID << "'" << std::endl;
        return;
      }
      if (variableTypeTable[ID] != getType(ctx->expression())) {
        auto token = ctx->ID()->getSymbol();
        std::cerr << "Error at line " << token->getLine() << " : uncorrect type of variable '" << ID << "'" << std::endl;
        return;
      }
    } 
  }

  virtual void exitExpression(RelScriptParser::ExpressionContext * ctx) override {
    if (errorListener->isErrorDid()) {
      return;
    }
    auto mulExpr = ctx->mulExpression();
  }

  virtual void exitMulExpression(RelScriptParser::MulExpressionContext * ctx) override {
    if (errorListener->isErrorDid()) {
      return;
    }

    auto atoms = ctx->atom();
    std::string type = getType(atoms.front());
    if (atoms.size() == 1) {
      return;
    }
    for (auto atom : atoms) {
      if (getType(atom) != type) { 
        auto token = atom->getStart();
        std::cerr << "Error at line " << token->getLine() << " : incompatible types '" << type << "' and '" << getType(atom) << "' for multiplication or division" << std::endl;
        return;
      }
    }

    if (type != "number" && type != "table") {
      auto token = atoms.front()->getStart();
      std::cerr << "Error at line " << token->getLine() << " : incompatible type '" << type << "' for multiplication or division" << std::endl;
      return;
    }
  }

  virtual void exitAtom(RelScriptParser::AtomContext * ctx) override {
    if (errorListener->isErrorDid()) {
      return;
    }
    if (auto id = ctx->ID()) {
      VisibilityScope vis;
      if (variableTypeTable.find(id->getText()) == variableTypeTable.end() && !searchVariableInScopes(id->getText(), vis)) {
        auto token = id->getSymbol();
        std::cerr << "Error at line " << token->getLine() << " : usage variable '" << id->getText() << "' without declaration" << std::endl;
        return;
      }
    }
    // if (auto functionUsage = ctx->functionUsage()) {
    //   VisibilityScope scope;
    //   if (functionTypeTable.find(functionUsage->ID()->getText()) == functionTypeTable.end() && !searchFunctionInScopes(functionUsage->ID()->getText(), scope)) {
    //     auto token = functionUsage->ID()->getSymbol();
    //     std::cerr << "Error at line " << token->getLine() << " : usage function '" << functionUsage->ID()->getText() << "' without declaration" << std::endl;
    //     return;
    //   }
    // }
  }

  virtual void enterBlock(RelScriptParser::BlockContext * ctx) override { 
    VisibilityScope scope;
    scope.constants = constants;
    scope.variableTypeTable = variableTypeTable;
    scope.functionTypeTable = functionTypeTable;
    constants.clear();
    variableTypeTable.clear();
    functionTypeTable.clear();
    scopes.emplace_back(scope);
  }
  virtual void exitBlock(RelScriptParser::BlockContext * ctx) override { 
    auto lastScope = scopes[scopes.size() - 1];
    constants = lastScope.constants;
    variableTypeTable = lastScope.variableTypeTable;
    functionTypeTable = lastScope.functionTypeTable;
    scopes.pop_back();
  }
};