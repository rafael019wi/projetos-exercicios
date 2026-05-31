/**
 * @file ex7.13.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 7.13.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
void classificaTrinca(int n1, int n2, int n3);
int main( void ) {
    int n1[3];
    int n2[3];
    int n3[3];
    for(int i = 0 ; i<3 ; i++){
        printf("n1[%d]: ",i);
        scanf("%d",&n1[i]);
        printf("n2[%d]: ",i);
        scanf("%d",&n2[i]);
        printf("n3[%d]: ",i);
        scanf("%d",&n3[i]);
    }
    for(int i = 0 ; i<3 ; i++){
        printf("\n%d, %d e %d: ",n1[i],n2[i],n3[i]);
        classificaTrinca(n1[i],n2[i],n3[i]);
    }
    return 0;

}

void classificaTrinca(int n1, int n2, int n3){
    if (n1 >= n2 && n1>=n3){
        if(n2>n3){
            printf("%d <= %d <= %d",n3,n2,n1);
        }
        else{
            printf("%d <= %d <= %d",n2,n3,n1);
        }
    }
    if (n2 > n1 && n2>n1){
        if(n1>n3){
            printf("%d <= %d <= %d",n3,n1,n2);
        }
        else{
            printf("%d <= %d <= %d",n1,n3,n2);
        }
    }
    if (n3 > n2 && n3>n1){
        if(n2>n1){
            printf("%d <= %d <= %d",n1,n2,n3);
        }
        else{
            printf("%d <= %d <= %d",n2,n1,n3);
        }
    }
}