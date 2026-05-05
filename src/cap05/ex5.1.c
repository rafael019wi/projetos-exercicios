/**
 * @file ex5.1.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 5.1.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int array[3][2];
    int linhas = (int) (sizeof(array)/sizeof(array[0]));
    // printf("%d", linhas);
    int colunas = (int) (sizeof(array[0])/sizeof(array[0][0]));
    // printf("%d", colunas);
    for (int i = 0; i<3; i++){
        for(int j = 0 ; j< 2; j++){
            printf("array[%d][%d]: ",i,j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i<linhas; i++){
        for(int j = 0 ; j<colunas; j++){
            printf("%03d", array[i][j]);
            if(j%2 == 0){
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;

}