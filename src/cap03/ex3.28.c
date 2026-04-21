/**
 * @file ex3.28.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.28.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float peso;
    int contador60 = 0;
    int contador = 1;
    float media = 0;
    float pesada = 0;

    while (peso>-1){
        printf("\nEntre com o peso da pessoa %02d: ",contador);
        contador++;
        scanf("%f", &peso);
        if(peso>60){
            media += peso;
            contador60++;
        }
        if (pesada< peso){
            pesada = peso;
        }
    }
    if (contador60 == 0){
        contador60 = 1;
    }
    media = media/contador60;
    printf("\nMedia dos pesos acima de 60kg: %.2f", media);
    printf("\nA pessoa mais pesada possui %.2fkg", pesada);
    return 0;

}