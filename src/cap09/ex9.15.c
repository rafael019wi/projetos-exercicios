/**
 * @file ex9.15.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 9.15.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void tornarMinuscula( char *str );
int main( void ) {
    char frase[40];
    printf("Frase: ");
    fgets(frase, 40, stdin);
    frase[strcspn(frase,"\n")] ='\0';
    tornarMinuscula(frase);
    printf("\n%s",frase);
    return 0;

}

void tornarMinuscula( char *str ){
    for(int i = 0 ; i< strlen(str); i++){
        str[i] = tolower((unsigned char)str[i]);
    }
}