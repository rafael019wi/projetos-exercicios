/**
 * @file ex1.17.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 1.17.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float baseMaior,baseMenor,altura,area;

    printf("Valor base maior: ");
    scanf("%f", &baseMaior);

    printf("\nValor base menor: ");
    scanf("%f", &baseMenor);

    printf("\nValor altura: ");
    scanf("%f", &altura);

    area = (baseMaior+baseMenor)*altura/2;

    printf("Area = %.2f",area);
    
    return 0;

}