/**
 * @file ex1.16.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 1.16.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float base,altura,area;

    printf("Valor da base: ");
    scanf("%f", &base);

    printf("\nValor da altura: ");
    scanf("%f", &altura);

    area = base*altura/2;

    printf("\nArea = %.2f",area);

    return 0;

}