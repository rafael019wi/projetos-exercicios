/**
 * @file ex4.8.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 4.8.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int array[5];
    int t = (int) (sizeof(array)/sizeof(array[0]));
    int contador;

    for(int i = 0; i<t;i++){
        printf("array[%d]: ",i);
        scanf("%d", &array[i]);
    }
    printf("\nNumeros pares:");
    contador = 0;
    for(int i = 0; i<t;i++){
        if(array[i]%2== 0){
            printf(" %d", array[i]);
            contador ++;
        }
        if(contador == 0 && i == t-1){
            printf(" nao ha");
        }
       
        
    }
    printf(".");
    contador = 0;
    printf("\nNumeros impares:");
    for(int i = 0; i<t;i++){
        if(array[i]%2== 0){
            
        }
        else{
            printf(" %d", array[i]);
            contador++;
        }
        if(contador == 0 && i == t-1){
            printf(" nao ha");
        }
    }
    printf(".");
    return 0;

}