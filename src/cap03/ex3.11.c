/**
 * @file ex3.11.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.11.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int n1;
    int n2;

    printf("N1: ");
    scanf("%d",&n1);

    printf("\nN2: \n");
    scanf("%d",&n2);
    
    if (n2>n1){
        for (int i = n1; i<= n2; i++ ){
            printf("%d ",i);
        }
    }
    else{
        for (int i = n1; i>= n2; i-- ){
            printf("%d ",i);
        }
    }
    
    return 0;

}