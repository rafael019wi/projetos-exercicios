/**
 * @file ex2.15.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 2.15.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int idade;

    printf("Entre com sua idade:");
    scanf("%d", &idade);
    printf("\n");
    if (idade< 16){
        printf("Nao eleitor.");
    }

    else if (idade> 16 && idade <18 || idade >= 65){
        printf("Eleitor facultativo.");
    }

    else if (idade>= 18 && idade < 65){
        printf("Eleitor obrigatorio.");
    }

    return 0;

}