/**
 * @file ex3.22.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.22.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int altura;
    char desenho;
    char p;
    int linhas = 0;
    
    printf("Altura: ");
    scanf("%d", &altura);

    printf("Caractere de desenho: ");
    scanf(" %c", &desenho);

    printf("Caractere de preenchimento: ");
    scanf(" %c", &p);    

    printf("\n");

    for(int i = 0; i<= altura; i++){
        if (linhas == 0 || linhas == altura){
            printf("%c",desenho);
        }
        for(int j = 0; j<=altura; altura++){
            
        }
        linhas++;
    }
    

    
    return 0;

}