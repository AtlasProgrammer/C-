#include <iostream>
#include "ex4.h"

int main() {
    char inputStr[100];
    std::cout << "Enter a string: ";
    std::cin.getline(inputStr, 100);
    int length = strlen(inputStr);
    removeLatinLetters(inputStr, length);
    std::cout << "Resulting string: " << inputStr << std::endl;
    return 0;
}