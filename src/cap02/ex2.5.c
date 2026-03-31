/**
 * @file ex2.5.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 2.5.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
int numero1,numero2,numero3;
    scanf("%d", &numero1);
    scanf("%d", &numero2);
    scanf("%d", &numero3);

    if (numero1 > numero2 && numero1>numero3){
        if(numero2>numero3){
            printf(" %d >= %d >= %d",numero1,numero2,numero3);
        }
        else{
            printf(" %d >= %d >= %d",numero1,numero3,numero2);
        }
    }
    if (numero2 > numero1 && numero2>numero1){
        if(numero1>numero3){
            printf("%d >= %d >= %d",numero2,numero1,numero3);
        }
        else{
            printf("%d >= %d >= %d",numero2,numero3,numero1);
        }
    }
    if (numero3 > numero2 && numero3>numero1){
        if(numero2>numero1){
            printf("%d >= %d >= %d",numero3,numero2,numero1);
        }
        else{
            printf("%d >= %d >= %d",numero3,numero1,numero2);
        }
    }
    return 0;

}