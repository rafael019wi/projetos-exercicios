/**
 * @file ex1.20.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 1.20.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int n1,n2,aritmetica;

    printf("Primeiro numero: ");
    scanf("%d", &n1);

    printf("\nSegundo numero: ");
    scanf("%d", &n2);

    aritmetica = (n1+n2)/2;

    printf("\nMedia aritmetica: %d",aritmetica);

    return 0;

}