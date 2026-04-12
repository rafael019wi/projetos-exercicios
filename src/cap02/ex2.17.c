/**
 * @file ex2.17.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 2.17.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int n1;

    printf("Entre com um valor inteiro: ");
    scanf("%d", &n1);

    switch (n1){
        case 2:
            printf("\nO valor fornecido foi %d.", n1);
            break;
        case 4:
            printf("\nO valor fornecido foi %d.", n1);
            break;
        case 6:
            printf("\nO valor fornecido foi %d.", n1);
            break;
        case 8:
            printf("\nO valor fornecido foi %d.", n1);
            break;
        default:
            printf("\nValor invalido.");
            break;
    }

    return 0;   

}