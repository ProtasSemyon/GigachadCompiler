#include "antlr4-runtime.h"

using namespace antlr4;

class RelScriptErrorStrategy : public antlr4::DefaultErrorStrategy {
public:
  void reportNoViableAlternative(Parser *recognizer, const NoViableAltException &e);

  void reportInputMismatch(Parser *recognizer, const InputMismatchException &e);

  void reportFailedPredicate(Parser *recognizer, const FailedPredicateException &e);

  void reportUnwantedToken(Parser *recognizer);

  void reportMissingToken(Parser *recognizer);
};

