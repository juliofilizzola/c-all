#include <stdio.h>
#include "functions/some.h"

void print_sum(int a, int b) {
    int sum = a + b;
    printf("Sum: %d\n", sum);
}


void print_subtraction(int a, int b) {
    int subtraction = a - b;
    printf("Subtraction: %d\n", subtraction);
}

int main(void) {
    int a = 5;
    int b = 5;
    print_sum(a, b);
    print_sum_file(a, b);
    print_subtraction(a, b);
    return 0;
}
