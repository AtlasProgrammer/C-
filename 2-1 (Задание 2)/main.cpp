#include <iostream>
#include "ex2.h"

int main() {
    int size;
    std::cout << "Enter the size of the matrix: ";
    std::cin >> size;

    int** matrix = new int*[size];
    for (int i = 0; i < size; i++) {
        matrix[i] = new int[size];
    }

    readMatrix(matrix, size);

    int product = calculateProduct(matrix, size);

    std::cout << "Product of elements below the main diagonal: " << product << std::endl;

    for (int i = 0; i < size; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}