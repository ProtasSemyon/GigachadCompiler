#include "RelScriptErrorListener.h"

void RelScriptErrorListener::syntaxError(antlr4::Recognizer* recognizer, antlr4::Token* offendingSymbol, size_t line, size_t charPositionInLine, const std::string& msg, std::exception_ptr e) {
  std::vector<std::string> stack = ((antlr4::Parser*)recognizer)->getRuleInvocationStack();
  std::cerr << "Syntax error at line " << line << ", column " << charPositionInLine << ": " << msg << std::endl;
  isError = true;
}