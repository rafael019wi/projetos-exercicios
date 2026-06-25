/**
 * @file ex9.23.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 9.23.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void imprimirCaixa( const char *str );
int main( void ) {
    char frase[40];
    printf("Frase: ");
    fgets(frase, 40, stdin);
    frase[strcspn(frase,"\n")] ='\0';
    imprimirCaixa( frase );
    return 0;

}

void imprimirCaixa( const char *str ){
    printf("\n");
    printf("++");
    for(int i = 0 ; i< 2+strlen(str); i++ ){
        printf("=");
    }
    printf("++");
    printf("\n|| %s ||\n",str);
    printf("++");
    for(int i = 0 ; i< 2+strlen(str); i++ ){
        printf("=");
    }
    printf("++");
}
