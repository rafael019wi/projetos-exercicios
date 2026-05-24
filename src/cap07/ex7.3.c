/**
 * @file ex7.3.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 7.3.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>


float maiorNumero(float n1, float n2);
int main( void ) {
    float n1[5];
    float n2[5];

    for(int i = 0 ; i < 5 ; i++){
        printf("n1[%d]: ",i);
        scanf("%f",&n1[i]);
        while(n1[i]<0){
            printf("\nEntre com um valor positivo!");
            printf("\nn1[%d]: ",i);
            scanf("%f",&n1[i]);
        }
        printf("n2[%d]: ",i);
        scanf("%f",&n2[i]);
        while(n2[i]<0){
            printf("\nEntre com um valor positivo!\n");
            printf("n2[%d]: ",i);
            scanf("%f",&n2[i]);
        }
    }

    for(int i = 0 ; i<5 ; i++){
        if(maiorNumero(n1[i],n2[i])>-1){
            printf("\n%.2f, %.2f: O maior valor e %.2f",n1[i],n2[i],maiorNumero(n1[i],n2[i]));
        }
        else{
            printf("\n%.2f, %.2f: Eles sao iguais",n1[i],n2[i]);
        }
    }

    return 0;
}

float maiorNumero(float n1, float n2){
    if(n1>n2){
        return n1;
    }
    else if(n1 == n2){
        return -1;
    }
    else{
        return n2;
    }
}