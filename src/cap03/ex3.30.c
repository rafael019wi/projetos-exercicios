/**
 * @file ex3.30.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.30.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int valor1;
    int valor2;
    char resposta = 'S';

    while(resposta == 'S'){
        printf("N1: ");
        scanf("%d", &valor1);

        printf("N2: ");
        scanf("%d", &valor2);

        

        // printf("\nN1: %d", valor1);
        // printf("\nN2: %d", valor2);
        if ( valor2!=0){
            printf("%d / %d = %d",valor1,valor2, valor1/valor2);
        }
        else{
            while(valor2 == 0){
                printf("Nao existe divisao inteira por zero!\n");
                printf("Entre novamente com N2: ");
                scanf("%d", &valor2);
            }
            printf("%d / %d = %d", valor1, valor2, valor1/valor2);
        }

        printf("\nVoce deseja realizar outro calculo? (S/N): ");
        scanf(" %c", &resposta);

        if (resposta == 'N'){
            break;
        }
        // else{
        //     printf("N1: ");
        //     scanf("%d", &valor1);

        //     printf("\nN2: ");
        //     scanf("%d", &valor2);
        // }
    }
    return 0;

}