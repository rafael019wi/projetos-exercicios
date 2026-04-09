/**
 * @file ex2.13.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 2.13.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float n1;
    float n2;
    float optativa;
    float media;

    printf("Nota Av. 1: ");
    scanf("%f", &n1);

    printf("Nota Av. 2: ");
    scanf("%f", &n2);

    printf("Nota Optativa: ");
    scanf("%f", &optativa);

    if (optativa> n1){
        n1 = optativa;
    }
    else if (optativa > n2){
        n2 = optativa;
    }

    media = (n1 + n2)/2;

    if (media>=6){
        printf("Media: %.2f", media);
        printf("\nAprovado!");
    }

    else if (media<6 && media >= 4){
        printf("Media: %.2f", media);
        printf("\nExame.");
    }

    else{
        printf("Media: %.2f", media);
        printf("\nReprovado...");
    }

    

    return 0;

}