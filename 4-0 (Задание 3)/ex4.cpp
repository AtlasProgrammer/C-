#include "ex4.h"

void removeLatinLetters(char str[], int length) {
    int i = 0;
    int j = 0;
    while (i < length) {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}