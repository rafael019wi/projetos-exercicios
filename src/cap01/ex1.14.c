/**
 * @file ex1.14.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 1.14.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float lado,perimetro,area;
    printf("Digite o valor do lado: ");
    scanf("%f",&lado);
    perimetro = lado*4;
    area = lado*lado;
    printf("\nPerimetro = %.2f", perimetro);
    printf("\nArea = %.2f", area);
    
    return 0;

}