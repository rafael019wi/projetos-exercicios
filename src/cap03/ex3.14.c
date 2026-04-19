/**
 * @file ex3.14.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.14.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int n1;
    int n2;
    int somatorio = 0;

    

    printf("N1: ");
    scanf("%d", &n1);

    printf("\nN2: ");
    scanf("%d", &n2);

    if (n1> n2){
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    for (int i = n1; i<=n2; i++){
        somatorio += i;
    }

    printf("\nSomatorio entre %d e %d: %d", n1,n2,somatorio);
    return 0;

}