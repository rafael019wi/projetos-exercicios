/**
 * @file ex1.6.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 1.6.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int numero1 = 0;
    int numero2 = 0;
    int soma;
    int subtracao;
    int multiplicacao;
    int divisao;

    printf("primeiro numero: "); 
    scanf("%d", &numero1);

    printf("segundo numero: ");
    scanf("%d", &numero2);

    soma = numero1+numero2;
    subtracao = numero1-numero2;
    multiplicacao = numero1*numero2;
    divisao = numero1/numero2;

    printf("%d + %d = %d\n", numero1,numero2,soma); // o %d é o formato que é esperado em ordem
    printf("%d - %d = %d\n", numero1,numero2,subtracao);
    printf("%d * %d = %d\n", numero1,numero2,multiplicacao);
    printf("%d / %d = %d\n", numero1,numero2,divisao);
    
    return 0;

}