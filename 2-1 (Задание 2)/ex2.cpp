#include <iostream>
#include "ex2.h"

int calculateProduct(int** matrix, int size) {
    int product = 1;
    for (int i = 1; i < size; i++) {
        for (int j = 0; j < i; j++) {
            product *= matrix[i][j];
        }
    }
    return product;
}

void readMatrix(int** matrix, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << "Enter element [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }
}