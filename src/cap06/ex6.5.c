/**
 * @file ex6.5.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 6.5.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( void ) {
    float numero;

    printf("Numero: ");
    scanf("%f",&numero);
    if(numero>0){
        printf("\nRaiz quadrada de %.2f: %.2f",numero,sqrt(numero));
    }
    else{
        printf("\nQuadrado de %.2f: %.2f",numero,pow(numero,2));
    }
    
    return 0;

}