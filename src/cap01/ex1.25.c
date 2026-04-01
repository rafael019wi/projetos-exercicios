/**
 * @file ex1.25.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 1.25.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float tempC,tempF;

    printf("Temperatura em graus Fahrenheit: ");
    scanf("%f", &tempF);

    tempC = (tempF - 32)/1.8;

    printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", tempF,tempC);
    
    return 0;

}