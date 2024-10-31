// FunctionDirectory.h

#ifndef FUNCTIONDIRECTORY_H
#define FUNCTIONDIRECTORY_H

#include <string>
#include <unordered_map>
#include <vector>

class FunctionDirectory {
	public:
		bool exists(const std::string &funcName) const;
		void addFunction(const std::string &funcName, const std::vector<std::string> &paramTypes);
		std::vector<std::string> getParamTypes(const std::string &funcName) const;
		std::string getReturnType(const std::string &funcName) const;
		void setReturnType(const std::string &funcName, const std::string &returnType);
		void setCurrentFunction(const std::string &funcName);

	private:
		struct FunctionInfo {
			std::vector<std::string> paramTypes;
			std::string returnType;
		};

		std::unordered_map<std::string, FunctionInfo> functions;
		std::string currentFunction;
};

#endif // FUNCTIONDIRECTORY_H
