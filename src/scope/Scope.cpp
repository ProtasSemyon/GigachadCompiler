#include "Scope.hpp"

llvm::Value *Scope::setVariable(const std::string &name, llvm::Value *value, bool isConst) {
	if (std::find(const_variables.begin(), const_variables.end(), name) != const_variables.end()) {
		return nullptr;
	}
	variables[name] = value;
	if (isConst) {
		const_variables.insert(name);
	}
	return value;
}

llvm::Value *Scope::getVariable(const std::string &name) {
	try {
		return variables.at(name);
	}
	catch (std::out_of_range) {
		return nullptr;
	}
}
