/**
 * @file ex1.15.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 1.15.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float altura,largura,perimetro,area;

    printf("Valor da largura: ");
    scanf("%f", &altura);

    printf("\nValor da altura: ");
    scanf("%f", &largura);

    perimetro = altura * 2 + largura * 2;
    area = altura * largura;

    printf("\nPerimetro = %.2f", perimetro);
    printf("\nArea = %.2f", area);
    
    return 0;

}