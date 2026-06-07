/**
 * @file ex9.2.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 9.2.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( void ) {
    char a[40];
    char primeiro;
    char ultimo;
    int num = 0 ;

    printf("Sentença: ");
    fgets( a, 41, stdin );
    a[strlen(a)-1] = '\0';
    num = strlen(a);
    primeiro = a[0];
    ultimo = a[num-1];
    printf("Primeiro caractere: %c\n", primeiro );
    printf("Ultimo caractere: %c\n", ultimo);
    printf("Numero de caracteres: %d\n", num);
    return 0;

}