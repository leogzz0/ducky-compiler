// Utils.h

#ifndef UTILS_H
#define UTILS_H

#include <string>

namespace Utils {
    std::string escapeQuotes(const std::string &label);
    std::string sanitizeIdentifier(const std::string &identifier);
    void logWarning(const std::string &message);
    void logInfo(const std::string &message);
}

#endif // UTILS_H
