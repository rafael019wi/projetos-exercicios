/**
 * @file ex3.8.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.8.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int n1;

    printf("Forneca um numero menor ou igual a zero: ");
    scanf("%d", &n1);

    if(n1 > 0 ) {
        printf("Valor incorreto (positivo)");
    }
    else{
        for(int i = 0; i>=n1; i--){
            printf("%d ",i);
        }
    }

}