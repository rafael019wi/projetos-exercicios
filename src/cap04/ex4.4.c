/**
 * @file ex4.4.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 4.4.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int array[5];
    int busca;
    int t = (int) (sizeof(array)/sizeof(array[0]));

    for (int i = 0; i<t ; i++){
        printf("array[%d]: ",i);
        scanf("%d", &array[i]);
    }
    printf("Busque por: ");
    scanf("%d", &busca);

    for(int i = 0 ; i<t; i++){
        printf("\nIndice %d: ",i);
        if(busca == array[i]){
            printf("ACHEI");
        }
        else{
            printf("NAO ACHEI");
        }
        
    }
    return 0;

}