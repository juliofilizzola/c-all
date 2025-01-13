//
// Created by julio-filizzola on 13/01/25.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    // sem conversão do ponteiro retornado :0

    int *p = malloc(sizeof(int));

    if (p == NULL) {
        printf("Alocação mal sucedida!");
        exit(1);
    } else free(p);

    int *nums = (int *) malloc(5 * sizeof(int));
    if (nums == NULL) {
        printf("Alocação mal sucedida!");
        exit(1);
    }
    free(nums);

    return 0;
}
