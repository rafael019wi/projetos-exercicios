/**
 * @file ex3.19.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.19.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    for (int i = 1; i<=5; i++){
        for(int j = 0 ; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
    for (int i = 5; i>0; i--){
        for(int j = 1 ; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}