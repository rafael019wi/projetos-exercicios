/**
 * @file ex4.15.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 4.15.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int array1[5];
    int array2[5];
    int contador = 0;
    int t1 = (int) (sizeof(array1)/sizeof(array1[0]));
    int t2 = (int) (sizeof(array2)/sizeof(array2[0]));

    for(int i = 0 ; i<t1 ; i++){
        printf("Forneca os valores do primeiro array: ");
        scanf("%d", &array1[i]);
    }

    for(int i = 0 ; i<t2 ; i++){
        printf("Forneca os valores do segundo array: ");
        scanf("%d", &array2[i]);
    }
    for(int i = 0 ; i<t1 ; i++){
        for(int j = 0; j<t2 ;j++){
            if(array1[i] == array2[j]){
                contador++;
                break;
            }
        }
    }
    if(contador == 0){
        printf("\nNao ha interseccao entre os elementos dos dois arrays fornecidos!");
    }
    else{
        int arrayInterseccao[contador];
        // printf("\n\n\nContador = %d", contador);
        contador = 0;

        for(int i = 0 ; i<t1; i++){
            for(int j = 0;j<t2;j++){
                if(array1[i] == array2[j]){
                    
                    arrayInterseccao[contador] = array1[i];
                    contador++;
                    break;
                }
            }
        }
        for(int i = 0; i < contador; i++){
            for(int j = i + 1; j < contador; j++){
                if(arrayInterseccao[i] == arrayInterseccao[j]){
                    for(int k = j; k < contador - 1; k++){
                        arrayInterseccao[k] = arrayInterseccao[k + 1];
                    }
                    contador--;
                    j--;
                }
            }
        }
        for(int i = 0 ; i<contador; i++){
            printf("\narrayInterseccao[%d] = %d", i, arrayInterseccao[i]);
        }
    }
    return 0;

} 