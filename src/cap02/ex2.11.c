/**
 * @file ex2.11.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 2.11.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int alfa;
    int beta;
    int gama;
    
    printf("alfa: ");
    scanf("%d" , &alfa);

    printf("\nbeta: ");
    scanf("%d" , &beta);
    
    printf("\ngama: ");
    scanf("%d" , &gama);

    if(alfa + beta + gama > 180){
        printf("As medidas fornecidas dos angulos nao representam um triangulo valido!");
        
    }

    else{
        printf("\nTriangulo ");
        if(alfa == 90 || beta == 90 || gama == 90){
            printf("RETANGULO");
        }
        else if(alfa < 90 && beta < 90 && gama < 90){
            printf("ACUTANGULO");
        }
        else {
            printf("OBTUSANGULO");
        }
    }



    return 0;   

}