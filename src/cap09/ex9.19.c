/**
 * @file ex9.19.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 9.19.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void substring( char *recorte, const char *origem, int inicio, int fim );
int main( void ) {
    char frase[40];
    int inicio;
    int fim;
    char recorte[40];
    printf("Frase: ");
    fgets(frase, 40, stdin);
    frase[strcspn(frase,"\n")] ='\0';
    printf("Inicio: ");
    scanf("%d",&inicio);
    printf("Fim: ");
    scanf("%d",&fim);

    substring(recorte,frase,inicio,fim);
    printf("Recorte: %s",recorte);


    return 0;

}

void substring( char *recorte, const char *origem, int inicio, int fim ){
    int cont = 0;
    if(fim > strlen(origem) || inicio <0 || inicio>fim){
        strcpy(recorte, origem);
        return;
    }
    else{
        for(int i = inicio; i<fim; i++){
            recorte[cont] = origem[i];
            cont ++;
        }
    }
    recorte[cont] = '\0';
}