/**
 * @file ex4.9.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 4.9.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int array1[5];
    int arrayInversp[5];
    int t = (int) (sizeof(array1)/sizeof(array1[0]));
    for(int i = 0; i<t; i++){
        printf("array[%d]: ",i);
        scanf("%d", &array1[i]);
    }
    for(int i = 0;i<t; i++){
        int t = array1[i];
        array[i] = array[i+1]

    }
    return 0;

}