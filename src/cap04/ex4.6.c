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
    int contador = 0;
    
    int busca;
    int t = (int) (sizeof(array)/sizeof(array[0]));

    for(int i = 0; i<t; i++){
        printf("Array[%d]: ",i);
        scanf("%d", &array[i]);
    }
    printf("Buscar por: ");
    scanf("%d", &busca);
    
    for(int i = 0 ; i<t ; i++){
        if(array[i] == busca){
            contador++;
        }
    }
    
    if(contador == 0){
        printf("\nO array nao contem o valor %d.",busca);
    }
    else{
        int posicao[contador];
        printf("\nO valor %d foi encontrado ",busca);
        if(contador == 1){
            printf("no indice");
            for(int i = 0 ; i < t; i++){
                if(array[i] == busca){
                    printf(" %d", i);
                }
            }
        }
        else{
            printf("nos indices ");
            if(contador == 2){
                contador = 0;
                for(int i = 0 ; i < t; i++){
                    if(array[i] == busca){
                        posicao[contador] = i;
                        contador++;
                    }
                }
                printf("%d e %d",posicao[0],posicao[1]);
            }
            else{
                contador = 0;
                for(int i = 0 ; i < t; i++){
                    if(array[i] == busca){
                        posicao[contador] = i;
                        contador++;
                    }
                }
                for(int i = 0; i<contador-1; i++){
                    printf("%d",posicao[i]);
                    if(i<contador-2){
                        printf(", ");
                    }
                    else{
                        printf(" ");
                    }
                }
                printf("e %d",posicao[contador-1]);
            }
        }
        printf(" do array.");
    }
    
    return 0;
}

