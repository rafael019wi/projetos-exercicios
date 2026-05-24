/**
 * @file ex7.6.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 7.6.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
int somaDivisores(int n);
int lePositivo();
int main( void ) {
    int n[5];
    for(int i = 0 ; i <5 ; i++){
        printf("n[%d]: ",i);
        n[i] = lePositivo();
    }

    for(int i = 0 ; i <5 ; i++){
        printf("\nSoma dos divisores de %d: %d",n[i],somaDivisores(n[i]));
        
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

int somaDivisores(int n){
    int div = 0 ;
    for(int i = 1 ; i <= n/2 ; i++){
        if(n%i == 0){
            div +=i;
        }
    }
    return div;
}