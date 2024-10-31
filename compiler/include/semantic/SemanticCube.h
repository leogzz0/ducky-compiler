// SemanticCube.h

#include "../../include/utils/ErrorHandler.h"

#ifndef SEMANTIC_CUBE_H
#define SEMANTIC_CUBE_H

#include <string>
#include <unordered_map>

class SemanticCube {
	public:
		SemanticCube(ErrorHandler &errorHandler);
		std::string getResultType(const std::string &type1, const std::string &type2, const std::string &operation) const;

	private:
		std::unordered_map<std::string, std::unordered_map<std::string, std::unordered_map<std::string, std::string>>> cube;
		ErrorHandler &errorHandler;
};

#endif // SEMANTIC_CUBE_H
