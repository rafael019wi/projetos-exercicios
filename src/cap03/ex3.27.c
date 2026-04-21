/**
 * @file ex3.27.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.27.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int valor = 0;
    int menor = 0;
    int maior = 0;
    int contador = 0;
    while(valor >=0){
        printf("\nEntre com um valor: ");
        scanf("%d", &valor);
        if (valor>=0){
            if(valor>maior){
                maior = valor;
            }
            if(valor < menor || contador <=1){
                menor = valor;
            }
            contador++;
        }
    }

    printf("\nMenor numero: %d", menor);
    printf("\nMaior numero: %d", maior);
    return 0;

}