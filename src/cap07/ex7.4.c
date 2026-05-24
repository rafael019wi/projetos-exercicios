/**
 * @file ex7.4.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 7.4.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
int lePositivo();
int somatorio(int n);
int main( void ) {
     int n[5];

    for(int i = 0; i < 5; i++){
        printf("n[%d]: ", i);
        n[i] = lePositivo();
    }

    
    for(int i = 0; i < 5; i++){
        printf("\nSomatorio de 1 a %d: %d", n[i], somatorio(n[i]));
    }

    return 0;
}

int lePositivo(){
    int n;
    scanf("%d", &n);

    while(n<=0){
        printf("Entre com um valor positivo: ");
        scanf("%d", &n);
    }
    return n;
}

int somatorio(int n){
    int soma = 0;
    for(int i = 1; i<=n;i++){
        soma +=i;
    }
    return soma;
}