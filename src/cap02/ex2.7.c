/**
 * @file ex2.7.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 2.7.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float num1;
    float num2;

    printf("Entre com um numero: ");
    scanf("%f", &num1);

    printf("Entre com outro numero: ");
    scanf("%f", &num2);

    if((num1 + num2) >= 10){
        printf("\nOs numeros fornecidos foram %.2f e %.2f", num1,num2);
    }

    else{
        printf("\nA subtracao entre %.2f e %.2f e igual a %.2f", num1,num2,num1-num2);
    }

    return 0;

}