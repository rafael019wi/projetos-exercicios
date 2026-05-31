/**
 * @file ex7.14.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 7.14.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void classificaDupla(int n1, int n2,bool emOrdemCrescente);

int main( void ) {
    int n1[5];
    int n2[5];
    for(int i = 0 ; i<5 ; i++){
        printf("n1[%d]: ",i);
        scanf("%d",&n1[i]);
        printf("n2[%d]: ",i);
        scanf("%d",&n2[i]);
    }
    for(int i = 0 ; i<5 ; i++){
        printf("\n%d e %d: ",n1[i],n2[i]);
        classificaDupla(n1[i],n2[i],i%2==0);
    }
    return 0;

}

void classificaDupla(int n1, int n2,bool emOrdemCrescente){
    if(emOrdemCrescente){
        if(n1>n2){
            printf("%d <= %d",n2,n1);
        }
        else{
            printf("%d <= %d",n1,n2);
        }
    }
    else{
        if(n1>n2){
            printf("%d >= %d",n1,n2);
        }
        else{
            printf("%d >= %d",n2,n1);
        }
    }
    
}