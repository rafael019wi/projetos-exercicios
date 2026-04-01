/**
 * @file ex1.23.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 1.23.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int anoNascimento,anoAtual,idade;

    printf("Ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("\nAno de atual: ");
    scanf("%d", &anoAtual);

    idade = anoAtual-anoNascimento;

    printf("\nIdade aproximada: %d anos",idade);

    return 0;

}