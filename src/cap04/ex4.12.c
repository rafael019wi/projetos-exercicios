/**
 * @file ex4.12.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 4.12.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int array[5];
    int t = (int) (sizeof(array)/sizeof(array[0]));

    for(int i = 0 ; i<t; i++){
        printf("array[%d]: ",i);
        scanf("%d" , &array[i]);
    }
    for(int i = 1; i<t;i++){
        array[i-1] = array[i];
        
    }
    t--;
    for(int i = 0 ; i<t; i++){
        printf("\narray[%d] = %d",i,array[i]);
        
    }
    return 0;

}