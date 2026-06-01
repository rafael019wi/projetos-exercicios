/**
 * @file ex8.1.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 8.1.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

void somatorioMedia(float a[], int n, float *somatorio, float *media);
int main( void ) {
    float numero[10];
    float s;
    float m;
    
    for(int i = 0 ; i<10 ; i++){
        printf("n[%d]: ",i);
        scanf("%f",&numero[i]);
    }
    somatorioMedia(numero,10,&s,&m);
    printf("\nSomatorio: %.2f",s);
    printf("\nMedia: %.2f",m);
    return 0;

}

void somatorioMedia(float a[], int n, float *somatorio, float *media){
    *somatorio = 0;
    for(int i = 0 ; i<n ; i++){
        *somatorio += a[i];
    }
    *media = *somatorio/n;
}