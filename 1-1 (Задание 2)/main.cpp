#include <iostream>
#include "ex1.h"

int main() {
    int* arr = nullptr;
    int size = 0;

    arr = allocateArray(size);

    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    int average = calculateAverage(arr, size);
    int count = countExceedingElements(arr, size, average);
    double percentage = calculatePercentage(count, size);

    std::cout << "Average: " << average << std::endl;
    std::cout << "Count of exceeding elements: " << count << std::endl;
    std::cout << "Percentage of exceeding elements: " << percentage << "%" << std::endl;

    deallocateArray(arr);

    return 0;
}