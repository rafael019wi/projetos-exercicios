/**
 * @file ex9.16.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 9.16.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void removerLetra(char *str, char c);

int main( void ) {
    char frase[40];
    char a;
    printf("Frase: ");
    fgets(frase, 40, stdin);
    frase[strcspn(frase,"\n")] ='\0';
    
    printf("Caractere: ");
    scanf("%c", &a);
    removerLetra(frase, a);

    printf("\n%s", frase);
    return 0;
}

void removerLetra(char *str, char c) {
    int j = 0;
    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (tolower(str[i]) != tolower(c)) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}