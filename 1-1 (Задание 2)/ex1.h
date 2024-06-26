#ifndef EX1_H
#define EX1_H

int* allocateArray(int& size);
void deallocateArray(int* arr);
int calculateAverage(int* arr, int size);
int countExceedingElements(int* arr, int size, int average);
double calculatePercentage(int count, int size);

#endif