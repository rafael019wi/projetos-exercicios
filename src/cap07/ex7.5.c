/**
 * @file ex7.5.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 7.5.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ehPar(int n);
bool ehDivisivel(int dividendo, int divisor);

int main( void ) {
    int n1[5];
    int n2[5];

    for(int i = 0 ; i<5; i++){
        printf("n1[%d]: ",i);
        scanf("%d",&n1[i]);

        printf("n2[%d]: ",i);
        scanf("%d",&n2[i]);
    }

    for(int i = 0 ; i <5 ; i++){
        if(ehPar(n1[i])){
            printf("\n%d eh par e %d ",n1[i],n1[i]);
            if(ehDivisivel(n1[i],n2[i])){
                printf("eh divisivel por %d",n2[i]);
            }
            else{
                printf("nao eh divisivel por %d",n2[i]);
            }
        }
        else{
            printf("\n%d eh impar e %d ",n1[i],n1[i]);
            if(ehDivisivel(n1[i],n2[i])){
                printf("eh divisivel por %d",n2[i]);
            }
            else{
                printf("nao eh divisivel por %d",n2[i]);
            }
        }
    }
    return 0;

}

bool ehPar(int n){
    return n%2 == 0;
}
bool ehDivisivel(int dividendo, int divisor){
    return dividendo % divisor == 0;
}