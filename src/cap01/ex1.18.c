/**
 * @file ex1.18.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 1.18.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float diagonalMenor,diagonalMaior,area;

    printf("Valor diagonal maior: ");
    scanf("%f", &diagonalMaior);

    printf("\nValor diagonal menor: ");
    scanf("%f", &diagonalMenor);

    area = diagonalMaior * diagonalMenor/2 ;

    printf("\nArea = %.2f", area);

    return 0;

}