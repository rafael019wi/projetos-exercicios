/**
 * @file ex9.7.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 9.7.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main( void ) {
    char string[5][40];
    for(int i = 0 ; i<5 ; i++)
    printf("Nome: ");
    fgets(string, 41, stdin);
    printf("Nome: ");
    fgets(string, 41, stdin);
    return 0;

}