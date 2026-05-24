/**
 * @file ex7.7.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 7.7.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool ehPrimo(int n);

int main( void ) {
    for(int i = 1 ; i<=20 ; i++){
        if(ehPrimo(i) && i>1){
            printf("\n%d: eh primo",i);
        }
        else{
            printf("\n%d: nao eh primo",i);
        }
    }
    return 0;

}

bool ehPrimo(int n){
    int div = 0 ;
    for(int i = 1 ; i <= n/2 ; i++){
        if(n%i == 0){
            div ++;
        }
    }
    if(div == 1){
        return true;
    }
    else{
        return false;
    }
}

