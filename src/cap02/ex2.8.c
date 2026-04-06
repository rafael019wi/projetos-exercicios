/**
 * @file ex2.8.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 2.8.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float n1,n2,n3,temp;

    printf("N1: ");
    scanf("%f", &n1);

    printf("N2: ");
    scanf("%f", &n2);

    printf("N3: ");
    scanf("%f", &n3);

    if (n1>n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    if (n2> n3){
        temp = n2;
        n2 = n3;
        n3 = temp;
    }

    if (n1>n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    printf("\nA soma dos dois numeros maiores fornecidos e %.2f",n2+n3);
    
    return 0;

}