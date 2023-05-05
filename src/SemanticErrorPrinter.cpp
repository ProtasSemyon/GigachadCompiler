#include "SemanticErrorPrinter.hpp"

void SemanticErrorPrinter::writeRowAndColumn(antlr4::Token * token) {
  std::cerr << "Error at line " << token->getLine() << ", column " << token->getCharPositionInLine() << ": ";
}

void SemanticErrorPrinter::callRedeclarationOfVar(antlr4::Token * token) {
  writeRowAndColumn(token);
  std::cerr << "variable " << token->getText() << " defined before\n";
}

void SemanticErrorPrinter::callIncompatibleType(antlr4::Token * token, const std::string &tokenType, const std::string &incompatibleType) {
  writeRowAndColumn(token);
  std::cerr << "variable " << token->getText() << " with type " << tokenType << " is incompatible with type " << incompatibleType << std::endl;
}

void SemanticErrorPrinter::callChangeConstant(antlr4::Token * token) {
  writeRowAndColumn(token);
  std::cerr << "variable " << token->getText() << " defined as constant\n";
}

void SemanticErrorPrinter::callUndefinedVariable(antlr4::Token * token) {
  writeRowAndColumn(token);
  std::cerr << "variable " << token->getText() << " undefined\n";
}



