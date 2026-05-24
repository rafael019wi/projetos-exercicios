/**
 * @file ex6.2.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 6.2.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( void ) {
    float expo;
    float base;

    printf("Base: ");
    scanf("%f", &base);

    printf("Expoente: ");
    scanf("%f", &expo);

    printf("\n%.2f ^ %.2f = %.2f",base,expo,pow(base,expo));
    return 0;

}