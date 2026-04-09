/**
 * @file ex2.12.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 2.12.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int idadeHomem1;
    int idadeHomem2;
    int idadeMulher1;
    int idadeMulher2;
    int soma1;
    int mult1;

    printf("\nIdade Homem 1: ");
    scanf("%d", &idadeHomem1);

    printf("\nIdade Homem 2: ");
    scanf("%d", &idadeHomem2);

    printf("\nIdade Mulher 1: ");
    scanf("%d", &idadeMulher1);

    printf("\nIdade Mulher 2: ");
    scanf("%d", &idadeMulher2);

    if (idadeHomem1<idadeHomem2){
        int temp = idadeHomem1;
        idadeHomem1 = idadeHomem2;
        idadeHomem2 = temp;
    }

    if (idadeMulher1<idadeMulher2){
        int temp = idadeMulher1;
        idadeMulher1 = idadeMulher2;
        idadeMulher2 = temp;
    }

    soma1 = idadeHomem1 + idadeMulher2;
    mult1 = idadeHomem2 * idadeMulher1;

    printf("\nIdade homem mais velho + idade mulher mais nova: %d",soma1);
    printf("\nIdade homem mais novo * idade mulher mais velha: %d",mult1);

    return 0;   

}