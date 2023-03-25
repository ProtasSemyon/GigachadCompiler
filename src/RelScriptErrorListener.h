#include <antlr4-runtime.h>

class RelScriptErrorListener : public antlr4::BaseErrorListener {
public:
    virtual void syntaxError(antlr4::Recognizer* recognizer, antlr4::Token* offendingSymbol, size_t line, size_t charPositionInLine, const std::string& msg, std::exception_ptr e) override {
        std::vector<std::string> stack = ((antlr4::Parser*)recognizer)->getRuleInvocationStack();
        std::cerr << "Syntax error at line " << line << ", column " << charPositionInLine << ": " << msg << std::endl;
    }
};
