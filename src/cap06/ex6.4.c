/**
 * @file ex6.4.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 6.4.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( void ) {
    float numero;

    printf("Numero: ");
    scanf("%f",&numero);
    printf("%f",numero);
    printf("\nValor absoluto: %.2f",fabs(numero));
    return 0;

}