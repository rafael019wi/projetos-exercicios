/**
 * @file ex9.12.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 9.12.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int contarOcorrencias( const char *str, char c );

int main( void ) {
    char frase[40];
    int letras[5] = {0};
    printf("Frase: ");
    fgets(frase, 40, stdin);
    frase[strcspn(frase,"\n")] ='\0';
    for(int i = 0; i<strlen(frase); i++){
        frase[i] = tolower((unsigned char)frase[i]);
        switch (frase[i])
        {
        case 'a':
            letras[0]++;
            break;
        case 'e':
            letras[1]++;
            break;
        case 'i':
            letras[2]++;
            break;
        case 'o':
            letras[3]++;
            break;
        case 'u':
            letras[4]++;
            break;
        default:
            break;
        }
    }
    printf("\nA/a: %d",letras[0]);
    printf("\nE/e: %d",letras[1]);
    printf("\nI/i: %d",letras[2]);
    printf("\nO/o: %d",letras[3]);
    printf("\nU/u: %d",letras[4]);


    return 0;

}

int contarOcorrencias( const char *str, char c ){
    int contador = 0;
    for (int i = 0; i < strlen(str); i++){
        if(str[i] == c){
            contador++;
        }
    }
    return contador;
}