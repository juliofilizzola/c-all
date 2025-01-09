//
// Created by julio-filizzola on 09/01/25.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
     int value = 30;
     int *pointer = NULL;

     pointer = &value;

     printf("Endereço do ponteiro na memória: %p\n", pointer);
     printf("O valor do ponteiro: %d\n", *pointer);

     (*pointer) = 60;

     printf("Endereço do ponteiro na memória: %p\n", pointer);
     printf("O valor do ponteiro: %d\n", *pointer);
}
