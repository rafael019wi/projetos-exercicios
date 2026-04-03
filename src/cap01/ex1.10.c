/**
 * @file ex1.10.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 1.10.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int baseMenor;
    int baseMaior;
    int altura;
    int area;
    
    printf("Valor da base maior: ");
    scanf("%d", &baseMaior);

    printf("Valor da base menor");
    scanf("%d", &baseMenor);

    printf("Valor da altura: ");
    scanf("%d", &altura);

    area = (baseMaior+baseMenor)*altura/2;

    printf("\nArea = %d", area);

    return 0;

}