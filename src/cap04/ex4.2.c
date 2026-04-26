/**
 * @file ex4.2.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 4.2.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int array[5];
    int arrayMult[5];
    int mult;
    int t = (int) (sizeof(array)/sizeof(array[0]));
    for (int i = 0; i<t; i++){
        printf("array[%d]: ",i);
        scanf("%d", &array[i]);

    }
    printf("Multiplicar por: ");
    scanf("%d", &mult);

    for(int i = 0; i<t; i++){
        arrayMult[i] = array[i]*mult;
        printf("\narrayMult[%d] = %d", i ,arrayMult[i]);
    }
    return 0;

}