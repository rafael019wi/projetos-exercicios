/**
 * @file ex9.11.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 9.11.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int contarOcorrencias(const char *str, char c);

int main( void ) {
    char c;
    char string[40];
    
    printf("Caractere: ");
    scanf("%c", &c);
    getchar();

    while (true){
        printf("Frase: ");
        fgets(string, 40, stdin);
        string[strlen(string)-1] = '\0';

        if(strcmp(string,"fim") == 0){
            break;
        }
        printf("\n\"%s\" tem %d ocorrencia(s) do caractere '%c'\n",string,contarOcorrencias(string,c),c);
    }

    return 0;
}

int contarOcorrencias(const char *str, char c) {
    int contador = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == c) {
            contador++;
        }
    }

    return contador;
}