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
    int array[5];
    int t = (int) (sizeof(array)/sizeof(array[0]));
    int ini = 0;
    int fim = t-1;
    for(int i = 0;i<t;i++){
        printf("array[%d]: ",i);
        scanf("%d",&array[i]);
    }
    while(ini<fim){
        int temp = array[ini];
        array[ini] = array[fim];
        array[fim] = temp;
        ini++;
        fim--;
    }
    for(int i = 0; i<t;i++){
        printf("arrayInv[%d] = %d\n",i,array[i]);
    }
    return 0;

}