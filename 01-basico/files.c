//
// Created by julio-filizzola on 13/01/25.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Número de valores armazenados no valores.txt
    int n = 10;
    int i;
    // Inicia um array alocado dinâmicamente com tamanho n
    int *valores = (int*) malloc(sizeof(int)*n);

    // Cria a variável do tipo FILE* e abre o arquivo para leitura em seguida
    FILE *arquivo;
    arquivo = fopen("valores.txt", "r");

    if (arquivo == NULL) {
        printf("ERRO AO ABRIR O ARQUIVO\n");
        exit(-1);
    }

    // Faz a leitura do arquivo para encontrar os valores indicados pelo formato da string
    for (i = 0; i < n; i++) {
        fscanf(arquivo, "%d ", &valores[i]);
    }

    // Exibe os valores obtidos e armazenados anteriormente
    for (i = 0; i < n; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    int sucesso = fclose(arquivo);
    if (sucesso != 0) {
        printf("ERRO AO ENCERRAR O ARQUIVO\n");
        exit(-1);
    }

    // Libera os valores da memória
    free(valores);
    return 0;
}