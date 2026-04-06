/**
 * @file ex2.9.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 2.9.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int lados;
    float lado;

    printf("Entre com a quantidade de lados: ");
    scanf("%d", &lados);

    printf("\nEntre com a medida do lado: ");
    scanf("%f", &lado);

    

    if(lados>2 && lados<6){
        if(lados == 3){
            printf("\nTRIANGULO de perimetro %.2f", lado*lados);
        }
        if(lados == 4){
            printf("\nQUADRADO de area %.2f", lado*lado);
        }
        if(lados == 5){
            printf("\nPENTAGONO");
        }
    }
    else{
        printf("\nPoligono nao identificado");
    }
    return 0;

}