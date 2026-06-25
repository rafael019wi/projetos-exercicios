/**
 * @file ex9.18.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 9.18.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool ehPalindromo( const char *str );

int main( void ) {
    char frase[40];
    printf("Frase: ");
    fgets(frase, 40, stdin);
    frase[strcspn(frase,"\n")] ='\0';
    printf("\n\"%s\" ",frase);
    if(ehPalindromo(frase)){
        printf("eh um palindromo!");
    }
    else{
        printf("nao eh um palindromo!");
    }
    return 0;
}

bool ehPalindromo( const char *str ){
    int contador = 0;
    for(int i = 0 ; i<strlen(str); i++){
        if(str[i] != str[strlen(str)-i-1]){
            return false;
        }
    }
    return true;
}