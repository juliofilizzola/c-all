#include <stdio.h>

#define LARGURA 50 // Não se pode colocar ponto-e-vírgula depois do valor
#define TAMANHO 1.70

int main(void) {

    printf("%d\n", LARGURA);

    printf("%f\n", TAMANHO);

    printf("%.2f\n", TAMANHO);

    return 0;

}