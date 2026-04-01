/**
 * @file ex1.27.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 1.27.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float n1,p1,n2,p2,n3,p3,media;

    printf("Primeira nota: ");
    scanf("%f", &n1);

    printf("\nPeso da primeira nota: ");
    scanf("%f", &p1);

    printf("\nSegunda nota: ");
    scanf("%f", &n2);

    printf("\nPeso da segunda nota: ");
    scanf("%f", &p2);

    printf("\nterceira nota: ");
    scanf("%f", &n3);

    printf("\nPeso da terceira nota: ");
    scanf("%f", &p3);

    media = ((n1*p1)+ (n2*p2) + (n3*p3))/(p1+p2+p3);

    printf("\nMedia ponderada: %.2f", media);

    return 0;

}