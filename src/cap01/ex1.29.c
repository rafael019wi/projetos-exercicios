/**
 * @file ex1.29.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 1.29.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float peso,altura,imc;

    printf("Entre com seu peso em quilogramas: ");
    scanf("%f", &peso);

    printf("\nEntre com sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso/(altura*altura);

    printf("Seu IMC e: %.2f", imc);
    
    return 0;

}