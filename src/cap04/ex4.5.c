/**
 * @file ex4.5.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 4.5.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int array[5];
    int busca;
    int contador = 0;
    int t = (int) (sizeof(array)/sizeof(array[0]));

    for (int i = 0; i<t ; i++){
        printf("array[%d]: ",i);
        scanf("%d", &array[i]);
    }
    printf("Busque por: ");
    scanf("%d", &busca);

    for(int i = 0 ; i<t; i++){
        if(busca == array[i]){
            contador++;
        }
    }
    if (contador>1){
        printf("\nO array contem %d ocorrencias do valor %d.",contador,busca);
    }
    else if(contador == 1){
        printf("\nO array contem %d ocorrencia do valor %d.",contador,busca);
    }
    else{
        printf("\nO array nao contem o valor %d.",busca);
    }

    return 0;

}