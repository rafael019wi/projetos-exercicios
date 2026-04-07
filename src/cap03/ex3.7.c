/**
 * @file ex3.7.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.7.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int n1;

    printf("Forneca um numero maior ou igual a zero: ");
    scanf("%d", &n1);

    if(n1 > 0 ) {
        printf("Valor incorreto (positivo)");
    }
    else{
        for(int i = n1; i<=0; i++){
            printf("%d ",i);
        }
    }
    
    return 0;

}