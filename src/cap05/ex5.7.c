/**
 * @file ex5.7.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 5.7.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int array1[3][2];
    int array2[2][3];
    int arrayMult[3][3];
    
    int linhas1 = (int) (sizeof(array1)/sizeof(array1[0]));
    int colunas1 = (int) (sizeof(array1[0])/sizeof(array1[0][0]));
    

    int linhas2 = (int) (sizeof(array2)/sizeof(array2[0]));
    int colunas2 = (int) (sizeof(array2[0])/ sizeof(array2[0][0]));


    for(int i = 0 ; i < linhas1; i++){
        for (int j = 0 ; j<colunas1; j++){
            printf("array1[%d][%d]: ",i,j);
            scanf("%d", &array1[i][j]);
        }
    }

    for(int i = 0 ; i < linhas2; i++){
        for (int j = 0 ; j<colunas2; j++){
            printf("array2[%d][%d]: ",i,j);
            scanf("%d", &array2[i][j]);        
        }
    }

    for(int i = 0; i < linhas1; i++){
        for(int j = 0; j < colunas2; j++){
            arrayMult[i][j] = 0;
            for(int k = 0; k < colunas1; k++){
                arrayMult[i][j] += array1[i][k] * array2[k][j];
            }
        }
    }
    printf("\nA x B =\n");
    for(int i = 0; i < linhas1; i++){
        for(int j = 0; j < colunas2; j++){
            printf("%03d",arrayMult[i][j]);
            if(j!= colunas2-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;

}