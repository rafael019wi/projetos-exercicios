/**
 * @file ex9.21.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 9.21.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void imprimirCentralizado( const char *str );
int main( void ) {
    char frase[40];
    printf("Frase: ");
    fgets(frase, 40, stdin);
    frase[strcspn(frase,"\n")] ='\0';
    imprimirCentralizado( frase );
    return 0;

}

void imprimirCentralizado( const char *str ){
    for(int i = 0;i<80-strlen(str); i++){
        printf(" ");
    }
    printf("%s",str);
}