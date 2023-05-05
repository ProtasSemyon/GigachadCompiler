#include "antlr4-runtime.h"


class SemanticErrorPrinter {
private:
  static void writeRowAndColumn(antlr4::Token * token);
public:
  static void callRedeclarationOfVar(antlr4::Token * token);

  static void callIncompatibleType(antlr4::Token * token, const std::string &tokenType, const std::string &incompatibleType);

  static void callChangeConstant(antlr4::Token * token);

  static void callUndefinedVariable(antlr4::Token * token);

};