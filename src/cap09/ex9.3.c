/**
 * @file ex9.3.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 9.3.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( void ) {
    char string[40];
    printf("Senteca: ");
    fgets(string, 41, stdin);
    string[strlen(string)-1] = '\0';
    for(int i = 0 ; i<strlen(string);i++){
            if(i%2==0){
            if(string[i] ==' '){
                printf("' '");
            }
            else{
                printf("%c",string[i]);
            }
            if(i!= strlen(string)-2){
            printf(", ");
            }
        }
        
    }
    return 0;

}