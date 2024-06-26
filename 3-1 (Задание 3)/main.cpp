#include <iostream>
#include <vector>
#include "ex3.h"

int main() {
    std::vector<std::string> words = {
        "apple", "banana", "cherry", "date", "fig", "grape", "kiwi", "lemon", "mango",
        "orange", "pear", "pineapple", "quince", "strawberry"
    };

    char letter;
    std::cout << "Enter a letter to find words starting with that letter: ";
    std::cin >> letter;

    std::vector<std::string> found_words = findWords(words, letter);

    std::cout << "Words starting with '" << letter << "':" << std::endl;
    for (const auto& word : found_words) {
        std::cout << word << std::endl;
    }

    return 0;
}