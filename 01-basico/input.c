/**
%c	Imprime um caractere simples
%d	Imprime um número inteiro com sinal
%f	Imprime um ponto flutuante (número real)
%.3f	Imprime um ponto flutuante com 3 casas decimais
%o	Imprime um decimal como octal
%x	Imprime um decimal como hexadecimal
%s	Imprime uma string de caracteres
%%	Imprime um caractere %
%ld	Imprime um número inteiro longo com sinal
%p	ponteiro (endereço da memória)

*/

#include <stdio.h>

int main(void){
    int a, b, soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &a);

    printf("Digite um numero inteiro: ");
    scanf("%d", &b);

    soma = a + b;

    printf("O valor da soma = %d\n", soma);

    return 0;
}
