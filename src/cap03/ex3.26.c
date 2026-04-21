/**
 * @file ex3.26.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.26.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float valor = 0;
    float somatorio = 1.0f;
    float media = 0.0f;
    int quantidade = -1;

    while(valor >=0){
        printf("\nEntre com um valor: ");
        scanf("%f", &valor);
        somatorio += valor;
        quantidade++;
    }

    media = somatorio/quantidade;
    if (media<0){
        media = 0;
        somatorio = 0;
        quantidade = 0;
    }
    printf("\nSomatorio: %.2f\n", somatorio);
    printf("Media: %.2f\n", media);
    printf("Quantidade: %d", quantidade);

    return 0;

}