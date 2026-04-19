/**
 * @file ex3.17.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.17.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int n1;
    int inicio = 1;
    int anterior = 0;

    int numeroDesejado;

    printf("Numero desejado: ");
    scanf("%d", &numeroDesejado);


    for (int i = 0;i<=numeroDesejado;i++){
        n1 = inicio + anterior;
        anterior = inicio;
        inicio = n1;
    }

    printf("Fibonacci de %d e %d", numeroDesejado,anterior);


    return 0;

}