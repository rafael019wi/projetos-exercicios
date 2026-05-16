/**
 * @file ex5.2.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 5.2.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int array1[3][3];
    int array2[3][3];
    int arraySoma[3][3];
    
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
            arraySoma[i][j] = array1[i][j] + array2[i][j];
        }
    }
    printf("\narray1:       array2:       arraySoma:\n");
    for(int i = 0 ; i < linhas1; i++){
        for (int j = 0 ; j<colunas1; j++){
            printf("%03d " , array1[i][j]);
        }
        if( i == linhas1/2){
            printf("+ ");
        }
        else{
           printf("  "); 
        }
       
        for (int j = 0 ; j<colunas2; j++){
            printf("%03d " , array2[i][j]);
        }
        
        if( i == linhas1/2){
            printf("=");
        }
        else{
           printf(" "); 
        }
        for (int j = 0 ; j<colunas2; j++){
            printf(" %03d" , arraySoma[i][j]);
        }
        printf("\n");
    }

    


    return 0;

}