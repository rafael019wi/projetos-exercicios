/**
 * @file ex3.12.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.12.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main(void ) {
    int n1;
    int n2;
    int contador = 0;

    printf("N1: ");
    scanf("%d",&n1);

    printf("N2: ");
    scanf("%d", &n2);

    if (n2 < n1){
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    for(int i = n1; i<=n2; i++){
        if (i%2 == 0){
            contador++;
        } 
    }
    printf("\nNumeros pares entre %d e %d: %d",n1,n2,contador);
    return 0;

}