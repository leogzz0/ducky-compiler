
// Utils.cpp

#include "../../include/utils/Utils.h"
#include <iostream>

namespace Utils {

    // escapes double quotes in a string to make it safe for .dot output or similar
    std::string escapeQuotes(const std::string &label) {
        std::string escapedLabel = label;
        size_t pos = 0;
        while ((pos = escapedLabel.find("\"", pos)) != std::string::npos) {
            escapedLabel.insert(pos, "\\");
            pos += 2; // move past the escaped quote
        }
        return escapedLabel;
    }

    // cleans an identifier to make it safe
    std::string sanitizeIdentifier(const std::string &identifier) {
        std::string sanitized = identifier;
        for (char &c : sanitized) {
            if (!isalnum(c) && c != '_') {
                c = '_'; // Replace non-alphanumeric characters with '_'
            }
        }
        return sanitized;
    }

    // logs a warning message to standard error
    void logWarning(const std::string &message) {
        std::cerr << "Warning: " << message << std::endl;
    }

    // logs an informational message to standard output
    void logInfo(const std::string &message) {
        std::cout << "Info: " << message << std::endl;
    }

}
