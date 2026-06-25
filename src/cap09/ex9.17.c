/**
 * @file ex9.17.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 9.17.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int contarPalavras( const char *str );

int main( void ) {
    char frase[40];
    printf("Frase: ");
    fgets(frase, 40, stdin);
    frase[strcspn(frase,"\n")] ='\0';

    printf("\nQuantidade de palavras: %d",contarPalavras(frase));
    return 0;

}

int contarPalavras( const char *str ){
    int quantidade = 0;
    if (str[0] != '\0'){
        quantidade = 1;
    }
    for(int i = 0 ; i <strlen(str) ; i++){
        if(str[i] == ' '){
            quantidade++;
        }
    }
    return quantidade;
}