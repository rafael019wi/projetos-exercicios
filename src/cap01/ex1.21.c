/**
 * @file ex1.21.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 1.21.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int n1,sucessor,antecessor;

    printf("Forneca um numero inteiro: ");
    scanf("%d", &n1);

    sucessor = n1 + 1;
    antecessor = n1 - 1;

    printf("\nSucessor de %d: %d",n1,sucessor);

    printf("\nAntecessor de %d: %d",n1,antecessor);

    return 0;

}