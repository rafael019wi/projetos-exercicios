/**
 * @file ex9.9.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 9.9.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter (char *destino, const char *origem);

int main( void ) {
    char string[40];
    char stringInvertida[40];
    printf("String: ");
    fgets(string, 40, stdin);
    string[strlen(string)-1] = '\0';
    
    inverter(stringInvertida,string);
    printf("\nInvertida: %s",stringInvertida);

    return 0;

}

void inverter (char *destino, const char *origem){
    for(int i = 0; i<strlen(origem);i++){
        destino[i] = origem[strlen(origem)-i-1];
    }
}