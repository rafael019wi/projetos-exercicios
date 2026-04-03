/**
 * @file ex1.11.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 1.11.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int diagonalMenor;
    int diagonalMaior;
    int area = 0;

    printf("Valor da diagonal menor: ");
    scanf("%d", &diagonalMenor);

    printf("Valor da diagonal maior: ");
    scanf("%d", &diagonalMaior);

    area = (diagonalMenor*diagonalMaior)/2;

    printf("Area = %d", area);

    return 0;

}