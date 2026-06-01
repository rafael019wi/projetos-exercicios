/**
 * @file ex8.6.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 8.6.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

void pInterno(const float *a1, const float *a2, float *pi, int n);

int main(void){
    float a1[5];
    float a2[5];
    float pi[5];
    for(int i = 0; i < 5; i++){
        printf("a1[%d]: ",i);
        scanf("%f", &a1[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("a2[%d]: ",i);
        scanf("%f", &a2[i]);
    }
    pInterno(a1, a2, pi, 5);

    for(int i = 0; i < 5; i++){
        printf("%.2f x %.2f = %.2f\n",a1[i], a2[i], pi[i]);
    }
    return 0;
}

void pInterno(const float *a1, const float *a2, float *pi, int n){
    for(int i = 0; i < n; i++){
        pi[i] = a1[i] * a2[i];
    }
}