/**
 * @file ex1.9.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 1.9.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int base;
    int altura;
    int area;
    
    printf("Valor da base: ");
    scanf("%d", &base);

    printf("Valor da altura: ");
    scanf("%d", &altura);

    area = base*altura/2;

    printf("\nArea = %d", area);

    return 0;

}