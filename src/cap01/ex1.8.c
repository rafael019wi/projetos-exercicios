/**
 * @file ex1.8.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 1.8.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int lado;
    int altura;
    int perimetro;
    int area;

    printf("Valor da largura: ");
    scanf("%d", &lado);

    printf("Valor da altura: ");
    scanf("%d", &altura);

    perimetro = lado*2 + altura*2;
    area = lado*altura;

    printf("Perimetro = %d\n", perimetro);
    printf("Area = %d", area);

    return 0;

}