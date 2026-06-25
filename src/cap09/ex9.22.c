/**
 * @file ex9.22.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 9.22.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void imprimirDireita( const char *str );
int main( void ) {
    char frase[40];
    printf("Frase: ");
    fgets(frase, 40, stdin);
    frase[strcspn(frase,"\n")] ='\0';
    imprimirDireita( frase );
    return 0;

}

void imprimirDireita( const char *str ){
    printf("\n");
    for(int i = 0;i<80-strlen(str); i++){
        printf(" ");
    }
    printf("%s",str);
}

