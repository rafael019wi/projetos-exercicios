/**
 * @file ex3.16.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.16.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int n1;
    int inicio = 1;
    int anterior = 0;
    for (int i = 0;i<=20;i++){
        printf("%d ", inicio);
        n1 = inicio + anterior;
        anterior = inicio;
        inicio = n1;
    }
    return 0;

}