/**
 * @file ex9.1.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 9.1.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( void ) {
    char string[41];
    printf("String: ");
    fgets( string, 41, stdin );
    string[strlen(string)-1] = '\0';
    for(int i = 0 ; i<4 ; i++){
        printf("%c",string[i]);
        if(i<3){
            printf(", ");
        }
        else{
            printf(".");
        }
        
    }
    return 0;

}