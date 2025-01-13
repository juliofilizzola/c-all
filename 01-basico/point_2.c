//
// Created by julio-filizzola on 09/01/25.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *pointer;

    pointer = (int *) malloc(sizeof(int));

    scanf("%d", &pointer);
    printf("Endereço do ponteiro na memória: %p\n", pointer);
}
