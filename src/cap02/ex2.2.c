/**
 * @file ex2.2.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 2.2.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int numero1;
    int numero2;
    scanf("%d", &numero1);
    scanf("%d",&numero2);
    if (numero1> numero2){
        printf("Ordem crescente: %d <= %d",numero2,numero1);
    }
    else{
        printf("Ordem crescente: %d <= %d",numero1,numero2);
    }
    return 0;

}