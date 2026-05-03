/**
 * @file ex4.14.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 4.14.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int array[10];
    int t = (int) (sizeof(array)/sizeof(array[0]));
    int contador = 0;

    for(int i = 0 ; i<t; i++){
        printf("array[%d]: ",i);
        scanf("%d", &array[i] );
    }

    for(int i = 0; i<t;i++){
        if(array[i]%2==0){
            contador++;
            for (int j = i; j<t-1;j++){
                array[j] = array[j+1];
            }
            i--;
        }
    }
    t  = t-contador;

    for(int i = 0 ; i<t; i++){
        printf("\narray[%d] = %d",i,array[i]);
        
    }
    return 0;

}