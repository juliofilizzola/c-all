//
// Created by julio-filizzola on 09/01/25.
//

#include <stdlib.h>

int main(void) {
    int *p = (int *) malloc(sizeof(int));
    free(p);
    return 0;
}
