/**
 * @file ex3.25.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.25.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    
    int idade = 0;
    int contador = 1;
    int maior50 = 0;
    int menor21 = 0;
    while(idade>=0){
        printf("Idade da pessoa %02d: ",contador);
        scanf("%d", &idade);
        if(idade<21 && idade>0){
            menor21++;
        }
        else if(idade>50){
            maior50++;
        }
        contador++;
    }

    printf("\nTotal de pessoas menores de 21 anos: %d\n", menor21);
    printf("Total de pessoas com mais de 50 anos: %d ", maior50);


    return 0;

}