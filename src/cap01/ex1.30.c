/**
 * @file ex1.30.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 1.30.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int valor1,valor2,temp;

    printf("Primeiro numero: ");
    scanf("%d",&valor1);

    printf("\nSegundo numero: ");
    scanf("%d",&valor2);

    printf("\nValores antes da troca:");
    printf("\nPrimeiro numero: %d",valor1);
        printf("\nSegundo numero: %d",valor2);

    temp = valor1;
    valor1 = valor2;
    valor2 = temp;

    printf("\n\nValores depois da troca:");
    printf("\nPrimeiro numero: %d",valor1);
    printf("\nSegundo numero: %d",valor2);
    return 0;

}