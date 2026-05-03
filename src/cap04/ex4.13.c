/**
 * @file ex4.13.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 4.13.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int array[10];
    int posicaoRemovida;
    int t = (int) (sizeof(array)/sizeof(array[0]));

    for(int i = 0 ; i<t; i++){
        printf("array[%d]: ",i);
        scanf("%d", &array[i] );
    }

    printf("Posicao a ser removida (0 a 9): ");
    scanf("%d", &posicaoRemovida);
    while(posicaoRemovida>9 || posicaoRemovida<0){
        printf("Posicao invalida, forneca novamente!\n");
        printf("Posicao a ser removida (0 a 9): ");
        scanf("%d", &posicaoRemovida);
    }

    for(int i = posicaoRemovida; i<t;i++){
        array[i] = array[i+1];
    }
    t--;

    for(int i = 0; i<t ; i++){
        printf("\narray[%d] = %d",i,array[i]);
    }
    return 0;

}