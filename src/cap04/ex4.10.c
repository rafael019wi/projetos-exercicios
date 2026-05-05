/**
 * @file ex4.10.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 4.10.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {  
    int array[5];
    int contador = 0;
    int maior;
    int t = (int) (sizeof(array)/sizeof(array[0]));

    for (int i  = 0; i<t;i++){
        printf("array[%d]: ",i);
        scanf("%d", &array[i]);
    }

    printf("Copiar maiores que: ");
    scanf("%d", &maior);

    for(int i = 0;i<t; i++){
        if(array[i]>maior){
            contador++;
        }
        
    }
    int arrayCopia[contador];
    int a = 0;
    if(contador>0){
        for(int i = 0;i<t;i++){
                if(array[i]>maior){
                    arrayCopia[a] = array[i];
                    printf("arrayCopia[%d] = %d\n", a,arrayCopia[a]);
                    a++;
                }
        }
    }
    else{
        printf("\nNao houve copia!");
    }
    

    return 0;

}