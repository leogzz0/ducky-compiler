// SemanticCube.h

#ifndef SEMANTIC_CUBE_H
#define SEMANTIC_CUBE_H

#include <string>
#include <unordered_map>

class SemanticCube {
	public:
		SemanticCube();
		std::string getResultType(const std::string &type1, const std::string &type2, const std::string &operation) const;

	private:
		std::unordered_map<std::string, std::unordered_map<std::string, std::unordered_map<std::string, std::string>>> cube;
};

#endif // SEMANTIC_CUBE_H
