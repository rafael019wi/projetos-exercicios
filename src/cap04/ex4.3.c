/**
 * @file ex4.3.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 4.3.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float array[5];
    float somatorio = 0.0f;
    float produtorio = 1;
    int t = (int) (sizeof(array)/sizeof(array[0]));
    for (int i = 0 ; i<t ; i++ ){

        printf("Array[%d]: ",i);
        scanf("%f", &array[i]);

        somatorio += array[i];
        produtorio = produtorio * array[i];

    }

    printf("\nSomatorio: %.2f",somatorio);
    printf("\nProdutorio: %.2f",produtorio);
    return 0;

}