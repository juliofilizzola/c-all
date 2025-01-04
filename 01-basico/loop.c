//
// Created by Julio on 04/01/2025.
//
#include <stdio.h>

int main(void) {
    int i;

    for (i = 0; i < 10; i++) {
        printf("for: %d\n", i);
    }

    while (i < 20) {
        printf("while: %d\n", i);
        i++;
    }

    do {
        printf("do while: %d\n", i);
        i++;
    } while (i < 30);
    return 0;
}
