/**
 * @file ex1.26.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 1.26.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float tempC,tempF;

    printf("Temperatura em graus Celsius: ");
    scanf("%f", &tempC);

    tempF = (1.8*tempC)+32;

    printf("\n%.2f graus Celsius correspondem a %.2f graus Fahrenheit", tempC,tempF);
    return 0;

}