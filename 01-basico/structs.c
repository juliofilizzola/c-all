//
// Created by julio-filizzola on 13/01/25.
//


// Esse é um simples programa de cadastro, nesse caso de no máximo 5 pessoas

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int idade;
    float altura;
    float peso;
} Pessoa;


int main() {
    Pessoa listaDePessoas[5]; // Definimos um Array de 5 posições
    int indice = 0; // Define um indice inicial para controlar a estrutura de repetição;

    Pessoa p; // Variável Pessoa apenas para armazenar os dados da Pessoa durante o cadastro

    printf("Bem-vindo ao cadastro de pessoas!\n\n");
    do {
        printf("Digite a idade da pessoa %d: ", indice + 1);
        scanf("%d", &p.idade);

        printf("Digite a altura da pessoa %d: ", indice + 1);
        scanf("%f", &p.altura);

        printf("Digite o peso da pessoa %d: ", indice + 1);
        scanf("%f", &p.peso);

        system("cls"); // Mude para system("clear") se estiver no Linux!

        listaDePessoas[indice] = p; // Armazena os dados de p dentro do Array

        indice++;
    } while (indice < 5);

    // Estrutura de repetição simples para mostrar os dados de todas as pessoas do Array
    for (indice = 0; indice < 5; indice++) {
        printf("\n\nDados da pessoa %d:\n", indice + 1);
        printf("Idade: %d\n", listaDePessoas[indice].idade);
        printf("Altura: %.2f\n", listaDePessoas[indice].altura);
        printf("Peso: %.2f\n", listaDePessoas[indice].peso);
    }

    return 0;
}
