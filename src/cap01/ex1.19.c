/**
 * @file ex1.19.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 1.19.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float raio, pi, diametro,circunferencia,area;
    pi = 3.141592;

    printf("Valor do raio do circulo: ");
    scanf("%f", &raio);

    diametro = raio*2;
    circunferencia = 2*pi*raio;
    area = pi*raio*raio;

    printf("\nDiametro = %.2f", diametro);
    printf("\nCircunferencia = %.2f", circunferencia);
    printf("\nArea = %.2f", area);

    return 0;

}