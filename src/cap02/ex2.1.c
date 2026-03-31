/**
 * @file ex2.1.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 2.1.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int a;
    scanf("%d",&a);
    if(a%2==1){
        printf("O numero %d e impar.",a);
    }
    else{
        printf("O numero %d e par.",a);
    }
    return 0;

}