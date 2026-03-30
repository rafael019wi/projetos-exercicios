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
    printf("digite o valor do lado: ");
    scanf("%d", &lado);
    printf("digite o valor da altura: ");
    scanf("%d", &altura);
    perimetro = lado*2 + altura*2;
    area = lado*altura;
    printf("Perimetro = %d\n", perimetro);
    printf("Area = %d", area);
    return 0;
    return 0;

}