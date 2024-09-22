#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <nlohmann/json.hpp>

class Utils {
public:
    static nlohmann::json loadConfig(const std::string& filePath);
};

#endif // UTILS_H
