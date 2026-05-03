/**
 * @file ex4.7.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 4.7.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int array1[5];
    int array2[5];
    int arraySoma[5];
    int t1 = (int) (sizeof(array1)/sizeof(array1[0]));
    int t2 = (int) (sizeof(array2)/sizeof(array2[0]));
    int tsoma = (int) (sizeof(arraySoma)/sizeof(arraySoma[0]));
    printf("Forneca os valores do primeiro array: ");
    for(int i = 0; i<t1; i++){
        printf("array1[%d]: ",i);
        scanf("%d", &array1[i]);
    }

    printf("Forneca os valores do segundo array: ");
    for(int i = 0; i<t2; i++){
        printf("array2[%d]: ",i);
        scanf("%d", &array2[i]);
    }

    for(int i = 0; i<tsoma;i++){
        printf("arraySoma[%d] = %d\n",i,array1[i]+array2[i]);
    }
    return 0;

}