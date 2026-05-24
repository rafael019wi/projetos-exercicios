/**
 * @file ex7.8.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 7.8.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool saoAmigos(int n1, int n2);
int somaDivisores(int n);
int lePositivo();
int main( void ) {
    int n1[5];
    int n2[5];
    for(int i = 0 ; i <5 ; i++){
        printf("n1[%d]: ",i);
        n1[i] = lePositivo();

        printf("n2[%d]: ",i);
        n2[i] = lePositivo();

    }
    
    for(int i = 0 ; i <5 ; i++){
        // printf("\nsoma1: %d",somaDivisores(n1[i]));
        // printf("\nsoma2: %d",somaDivisores(n2[i]));
        if(saoAmigos(n1[i],n2[i])){
            
            printf("\n%d e %d sao amigos",n1[i],n2[i]);
        }
        else{
            printf("\n%d e %d nao sao amigos",n1[i],n2[i]);
        }

    }

    

    return 0;

}
bool saoAmigos(int n1, int n2){
    return (somaDivisores(n1) == n2 && somaDivisores(n2) == n1);
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

int lePositivo(){
    int n;
    scanf("%d", &n);

    while(n<=0){
        printf("Entre com um valor positivo: ");
        scanf("%d", &n);
    }
    return n;
}