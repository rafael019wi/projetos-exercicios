/**
 * @file ex9.14.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 9.14.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void tornarMaiuscula( char *str );

int main( void ) {
    char frase[40];
    printf("Frase: ");
    fgets(frase, 40, stdin);
    frase[strcspn(frase,"\n")] ='\0';
    tornarMaiuscula(frase);
    printf("\n%s",frase);

    return 0;

}

void tornarMaiuscula( char *str ){

    for(int i = 0 ; i< strlen(str); i++){
        str[i] = toupper((unsigned char)str[i]);
    }
}