#include <algorithm>
#include <cctype>
#include "ex3.h"

std::vector<std::string> findWords(const std::vector<std::string>& words, char letter) {
    std::vector<std::string> result;
    for (const auto& word : words) {
        if (std::isalpha(letter) && std::isalpha(word[0]) && std::tolower(letter) == std::tolower(word[0])) {
            result.push_back(word);
        }
    }
    return result;
}