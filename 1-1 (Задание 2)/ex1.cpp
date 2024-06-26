#include "ex1.h"
#include <iostream>

int* allocateArray(int& size) {
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    return new int[size];
}

void deallocateArray(int* arr) {
    delete[] arr;
}

int calculateAverage(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int countExceedingElements(int* arr, int size, int average) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > average) {
            count++;
        }
    }
    return count;
}

double calculatePercentage(int count, int size) {
    return static_cast<double>(count) / size * 100;
}