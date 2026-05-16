/**
 * @file ex7.1.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 7.1.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int absoluto(int n);

int main( void ) {
    int num[5];
    for (int  i = 0 ; i<5 ; i++){
        printf("n%d: ",i);
        scanf("%d",&num[i]);
    }
    for (int  i = 0 ; i<5 ; i++){
        printf("\nabsoluto(%d) = %d",num[i],absoluto(num[i]));
    }

    return 0;

}

int absoluto(int n){
    if (n< 0){
        return -n;
    }
    
    return n;
    
}