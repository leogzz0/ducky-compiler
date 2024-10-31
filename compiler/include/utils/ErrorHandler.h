// ErrorHandler.h

#ifndef ERRORHANDLER_H
#define ERRORHANDLER_H

#include <string>
#include <iostream>
#include <vector>

class ErrorHandler {
	public:
		void reportError(const std::string &message);
		bool hasErrors() const;
		std::vector<std::string> getErrors() const;
		void printErrors() const;

	private:
		std::vector<std::string> errors;
};

#endif // ERRORHANDLER_H