/**
 * @file ex9.6.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 9.6.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main( void ) {
    char string[40];
    printf("Nome: ");
    fgets(string, 41, stdin);
    for(int i = 0; i<strlen(string); i++){
        for(int j = 0; j<strlen(string); j++){
            printf("%c", string[j]);
        }
        
    }
    return 0;

}