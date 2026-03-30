/**
 * @file ex1.13.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 1.13.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float a;
    float b;
    float soma;
    float subtracao;
    float divisao;
    float multiplicacao;
    scanf("%f",a);
    scanf("%f",b);
    soma = a+b;
    subtracao = a-b;
    multiplicacao = a*b;
    divisao = a/b;

    printf("%.2f + %.2f = %.2f", a,b,soma);
    printf("%.2f + %.2f = %.2f", a,b,subtracao);
    printf("%.2f + %.2f = %.2f", a,b,multiplicacao);
    printf("%.2f + %.2f = %.2f", a,b,divisao);
    
    
    return 0;

}