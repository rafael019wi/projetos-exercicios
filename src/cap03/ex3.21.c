/**
 * @file ex3.21.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.21.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int altura;

    printf("Altura: ");
    scanf("%d", &altura);
    printf("\n");

    if (altura> 0 ){
        for(int i = 0; i<=altura; i++){
            for(int j = 1; j<=altura-i; j++){
                printf(" ");
            }
            for(int k = 1; k<= 2*i-1 ;  k++){
                printf("*");
            }
            printf("\n");
        }
    }
    else{
       for(int i = altura; i<0; i++){
            for(int j = 0; j>altura-i; j--){
                printf(" ");
            }
            for(int k = -1; k>= 2*i+1 ;  k--){
                printf("*");
            }
            
            printf("\n");
        }
    }
    
    return 0;

}