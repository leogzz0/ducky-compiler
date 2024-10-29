// ErrorHandler.cpp

#include "../../include/semantic/ErrorHandler.h"

// reports an error message and stores it in the error list
void ErrorHandler::reportError(const std::string &message) {
    errors.push_back("Error: " + message);
}

// checks if any error has been reported
bool ErrorHandler::hasErrors() const {
    return !errors.empty();
}

// retrieves all error messages
std::vector<std::string> ErrorHandler::getErrors() const {
    return errors;
}

// outputs all error messages to the standard output
void ErrorHandler::printErrors() const {
    if (errors.empty()) return;

    std::cerr << "\nErrors found during compilation:" << std::endl;
    for (const auto &error : errors) {
        std::cerr << error << std::endl;
    }
}
