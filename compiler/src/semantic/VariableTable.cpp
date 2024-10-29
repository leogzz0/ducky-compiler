// VariableTable.cpp

#include "../../include/semantic/VariableTable.h"

// enters a new scope by pushing an empty map onto the scope stack
void VariableTable::enterScope() {
	scopes.push_back({});
}

// exits the current scope by popping the last map from the scope stack
void VariableTable::exitScope() {
    if (!scopes.empty()) {
        scopes.pop_back();
    }
}


// checks if a variable exists in the current or any outer scope
bool VariableTable::exists(const std::string &varName) const {
	for (auto it = scopes.rbegin(); it != scopes.rend(); ++it) {
		if (it->count(varName)) return true;
	}
	return false;
}

// adds a variable to the current scope
void VariableTable::addVariable(const std::string &varName, const std::string &varType) {
	if (!scopes.empty()) {
		scopes.back()[varName] = varType;
	}
}

// gets the type of a variable if it exists, searching from the innermost to outermost scope
std::string VariableTable::getType(const std::string &varName) const {
	for (auto it = scopes.rbegin(); it != scopes.rend(); ++it) {
		if (it->count(varName)) return it->at(varName);
	}
	return "";
}