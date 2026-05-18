/**
 * @file ex5.3.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 5.3.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int array[3][4];
    int linhas = (int) (sizeof(array)/sizeof(array[0]));
    int colunas = (int) (sizeof(array[0])/sizeof(array[0][0]));
    int mult;
    for(int i = 0 ; i<linhas; i++){
        for(int j = 0 ; j<colunas; j++){
            printf("array[%d][%d]: ",i,j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("Multiplicar por: ");
    scanf("%d", &mult);
    printf("\narrayMult:\n");
    for(int i = 0 ; i<linhas; i++){
        for(int j = 0 ; j<colunas; j++){
            array[i][j] *=mult;
            printf("%03d",array[i][j]);
            if (j != colunas-1){
                printf(" ");
            }
            
        }
        printf("\n");
    }


    return 0;

}