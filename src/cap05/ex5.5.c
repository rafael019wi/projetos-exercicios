/**
 * @file ex5.5.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 5.5.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int array[3][3];
    int linhas = (int) (sizeof(array)/sizeof(array[0]));
    int colunas = (int) (sizeof(array[0])/sizeof(array[0][0]));
    int determinante;
    
    for(int i = 0 ; i<linhas; i++){
        for(int j = 0 ; j<colunas; j++){
            printf("array[%d][%d]: ",i,j);
            scanf("%d", &array[i][j]);
        }
    }

    
    determinante = array[0][0] * (array[1][1] * array[2][2] - array[1][2] * array[2][1]) - array[0][1] * (array[1][0] * array[2][2] - array[1][2] * array[2][0]) + array[0][2] * (array[1][0] * array[2][1] - array[1][1] * array[2][0]);

    printf("Determinante: %d",determinante);
    return 0;


}