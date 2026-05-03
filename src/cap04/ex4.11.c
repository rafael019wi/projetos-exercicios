/**
 * @file ex4.11.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 4.11.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int elementos;
    int valorInserido;
    printf("Quantidade de elementos (1 a 9): ");
    scanf("%d", &elementos);

    if(elementos>9 || elementos<1){
        while(elementos> 9 || elementos<1){
            printf("Quantidade incorreta, forneca novamente!\n");
            printf("Quantidade de elementos (1 a 9): ");
            scanf("%d", &elementos);
        }
    }
    int array[elementos+1];
    int t = (int) (sizeof(array)/sizeof(array[0]));

    for(int  i = 0 ; i<t-1; i++){
        printf("array[%d]: ",i);
        scanf("%d", &array[i]);
    }

    printf("Valor que sera inserido: ");
    scanf("%d", &valorInserido);
    
    for(int i = t; i>= 0; i--){
        int temp = array[i];
        array[i] = array[i-1];
        array[i-1] = temp;
    }
    array[0] = valorInserido;
    for(int i = 0; i<t; i++){
        printf("array[%d] = %d\n",i,array[i]);
    }
    



    return 0;

}