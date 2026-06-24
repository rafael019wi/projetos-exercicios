/**
 * @file ex9.10.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 9.10.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int tamanho( const char *str ) ;
int main( void ) {
    char string[40];
    printf("String: ");
    fgets(string, 40, stdin);
    string[strlen(string)-1] = '\0';
    tamanho(string);
    printf("%d caractere(s)!",tamanho(string));
    return 0;

}

int tamanho( const char *str ){
    int contador = 0;
    for(int i = 0 ; i<strlen(str); i++){
        contador++;
    }
    return contador;
}