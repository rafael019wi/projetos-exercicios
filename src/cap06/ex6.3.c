/**
 * @file ex6.3.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 6.3.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( void ) {
    float num;
    float proximo;
    float s;

    printf("numero: ");
    scanf("%f",&num);

    proximo = round(num);
    // printf("%f",proximo);
    if(proximo > num){
        s = proximo--;
    }
    else{
        s = proximo++;
        float temp = proximo;
        proximo = s;
        s = temp;
    }

    printf("\nMaior inteiro mais proximo: %.2f", s);
    printf("\nMenor inteiro mais proximo: %.2f", proximo);

    



    return 0;

}