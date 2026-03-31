/**
 * @file ex2.6.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 2.6.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float numero;
    scanf("%f", &numero);
    if(numero > 20){
        float div = numero/2;
        printf("A metade de %.2f e %.2f", numero,div);
    }
    else{
        float mult = numero*3;
        printf("O triplo de %.2f e %.2f",numero,mult);
    }

    return 0;

}