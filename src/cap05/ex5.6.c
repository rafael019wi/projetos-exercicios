/**
 * @file ex5.6.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 5.6.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int array1[2][3];
    int array2[3][2];
    int linhas = (int) (sizeof(array1)/sizeof(array1[0]));
    int colunas = (int) (sizeof(array1[0])/sizeof(array1[0][0]));
    int linhas1 = (int) (sizeof(array2)/sizeof(array2[0]));
    int colunas1 = (int) (sizeof(array2[0])/sizeof(array2[0][0]));
    int determinante;
    
    for(int i = 0 ; i<linhas; i++){
        for(int j = 0 ; j<colunas; j++){
            printf("array[%d][%d]: ",i,j);
            scanf("%d", &array1[i][j]);
            array2[j][i] = array1[i][j];
        }
    }

    printf("M:\n");
    for(int i = 0 ; i<linhas; i++){
        for(int j = 0 ; j<colunas; j++){
            printf("%03d",array1[i][j]);
            if(j!= colunas-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\nMt:\n");
    for(int i = 0 ; i<linhas1; i++){
        for(int j = 0 ; j<colunas1; j++){
            printf("%03d",array2[i][j]);
            if(j < colunas-2){
                printf(" ");
            } 
        }
        printf("\n");
    }

    
    return 0;

}