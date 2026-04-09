/**
 * @file ex3.18.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.18.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int linhas = 5;
    for(int i = 1; i<=linhas; i++){
        for (int j = 0; j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}