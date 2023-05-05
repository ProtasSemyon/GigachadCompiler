#include <llvm/IR/Value.h>
#include <string>
#include <unordered_map>
#include <unordered_set>

class Scope
{
public:
    std::unordered_map<std::string, llvm::Value *> variables;

    std::unordered_set<std::string> const_variables;

    std::unordered_map<std::string, llvm::Function *> functions;

    llvm::Function *currentFunction = nullptr;

    Scope(llvm::Function *_currentFunction = nullptr) : currentFunction(_currentFunction) {}

    llvm::Value *setVariable(const std::string &name, llvm::Value *value, bool isConst);

    llvm::Value *getVariable(const std::string &name);

    llvm::Function *setFunction(const std::string &name, llvm::Function *);

    llvm::Function *getFunction(const std::string &name);

};
