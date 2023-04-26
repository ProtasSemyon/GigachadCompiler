#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "RelScriptLexer.h"
#include "RelScriptParser.h"
#include "RelScriptErrorListener.h"
#include "RelScriptErrorStrategy.h"
#include "RelScriptSemanticListener.h"

using namespace antlr4;

const std::string FILENAME = "../test.rels";

int main(int , const char **) {
  std::ifstream inputFile(FILENAME);
  if (!inputFile.is_open()){
    std::cout << "Error: Could not open " << FILENAME << std::endl;
    return 1;
  }
  ANTLRInputStream input(inputFile);
  RelScriptLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
  // for (auto token : tokens.getTokens()) {
  //   std::cout << token->toString() << std::endl;
  // }

  RelScriptErrorListener listener;
  RelScriptSemanticListener parserListener(&listener);

  RelScriptParser parser(&tokens);

  parser.removeErrorListeners();
  parser.addErrorListener(&listener);

  parser.removeParseListeners();
  parser.addParseListener(&parserListener);

  parser.setErrorHandler(std::make_shared<RelScriptErrorStrategy>());

  tree::ParseTree* tree = parser.program();

  //std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

  return 0;
}
