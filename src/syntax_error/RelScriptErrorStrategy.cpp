#include "RelScriptErrorStrategy.h"

void RelScriptErrorStrategy::reportNoViableAlternative(Parser *recognizer, const NoViableAltException &e) {
  Token *t = e.getOffendingToken();
  std::string tokenName = getTokenErrorDisplay(t);
  std::string msg = "unexpected " + tokenName;
  recognizer->notifyErrorListeners(e.getOffendingToken(), msg, std::make_exception_ptr(e));
}

void RelScriptErrorStrategy::reportInputMismatch(Parser *recognizer, const InputMismatchException &e) {
  auto firstEl = e.getExpectedTokens().getMinElement();
  misc::IntervalSet firstElInt;
  firstElInt.add(firstEl);
  std::string msg = "expected " + firstElInt.toString(recognizer->getVocabulary());
  recognizer->notifyErrorListeners(e.getOffendingToken(), msg, std::make_exception_ptr(e));
}

void RelScriptErrorStrategy::reportFailedPredicate(Parser *recognizer, const FailedPredicateException &e) {
  const std::string& ruleName = recognizer->getRuleNames()[recognizer->getContext()->getRuleIndex()];
  std::string msg = "rule " + ruleName + " " + e.what();
  recognizer->notifyErrorListeners(e.getOffendingToken(), msg, std::make_exception_ptr(e));
}

void RelScriptErrorStrategy::reportUnwantedToken(Parser *recognizer) {
  if (inErrorRecoveryMode(recognizer)) {
    return;
  }

  beginErrorCondition(recognizer);

  Token *t = recognizer->getCurrentToken();
  std::string tokenName = getTokenErrorDisplay(t);
  std::string msg = "unexpected " + tokenName;
  recognizer->notifyErrorListeners(t, msg, nullptr);
}

void RelScriptErrorStrategy::reportMissingToken(Parser *recognizer) {
  if (inErrorRecoveryMode(recognizer)) {
    return;
  }

  beginErrorCondition(recognizer);

  Token *t = recognizer->getCurrentToken();
  misc::IntervalSet expecting = getExpectedTokens(recognizer);
  std::string expectedText = expecting.toString(recognizer->getVocabulary());
  std::string msg = "missing " + expectedText + " at " + getTokenErrorDisplay(t);

  recognizer->notifyErrorListeners(t, msg, nullptr);
}