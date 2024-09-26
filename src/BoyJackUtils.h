#ifndef BOYJACK_UTILS_H
#define BOYJACK_UTILS_H

#include <iostream>
#include <string>

namespace BoyJackUtils {
    inline void log(const std::string& message) {
        std::cout << "[LOG] " << message << std::endl;
    }

    inline void error(const std::string& errorMessage) {
        std::cerr << "[ERROR] " << errorMessage << std::endl;
    }
}

#endif // BOYJACK_UTILS_H
