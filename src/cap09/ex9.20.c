/**
 * @file ex9.20.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 9.20.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool contem( const char *fonte, const char *aPesquisar );
int main( void ) {
    char frase[40];
    char pesq[40];
    printf("String fonte: ");
    fgets(frase, 40, stdin);
    frase[strcspn(frase,"\n")] ='\0';

    printf("String a pesquisar: ");
    fgets(pesq, 40, stdin);
    pesq[strcspn(pesq,"\n")] ='\0';
    
    if(contem(frase,pesq)){
        printf("\n\"%s\" esta contida em \"%s\"",pesq,frase);
    }
    else{
        printf("\n\"%s\" nao esta contida em \"%s\"",pesq,frase);
    }
    return 0;
}

bool contem( const char *fonte, const char *aPesquisar ){
    for(int i = 0 ; i<strlen(fonte); i++){
        if(fonte[i] == aPesquisar[0]){
            int a = i;
            bool b = false;
            for(int j = 0 ; j<strlen(aPesquisar); j++){
                if( fonte[a] == '\0' || fonte[a] != aPesquisar[j]){
                    b = true;
                    break;
                }
                a++;
            }
            if(!b){
                return true;
            }
        }
    }
    return false;
    
}