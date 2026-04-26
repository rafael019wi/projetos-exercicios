/**
 * @file ex4.1.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 4.1.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int array[5];
    int arrayCubo[5];
    int t1 = (int) (sizeof(array))/sizeof(array[0]);
    int t2 = (int) (sizeof(arrayCubo))/sizeof(arrayCubo[0]);
    for(int i = 0; i<t1; i++){
        printf("array[%d]: ",i);
        scanf("%d", &array[i]);

        arrayCubo[i] = array[i]*array[i]*array[i];
    }

    for (int i = 0; i<t2; i++){
        printf("arrayCubo[%d] = %d\n",i,arrayCubo[i]);
    }
    return 0;

}