/**
 * @file ex4.6.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 4.6.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>


int main( void ) {
    int array[5]; 
    int contador;
    int posicao[5];
    int busca;
    int t = (int) (sizeof(array)/sizeof(array[0]));

    for(int i = 0; i<t; i++){
        printf("Array[%d]: ",i);
        scanf("%d", &array[i]);
    }
    printf("Buscar por: ");
    scanf("%d", &busca);
    return 0;
}

