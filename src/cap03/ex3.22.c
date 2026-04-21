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

    if (altura > 0){
        for (int i = 0; i<altura; i++){
            for (int j = 0; j<altura; j++){
                if (i==0 || i == (altura-1) || j == 0 || j == (altura-1) || i == j || i + j == (altura-1) ){
                    printf("%c" , desenho);
                }
                else{
                    printf("%c", p);
                }
            }
            printf("\n");
        }
    }
    else{
        altura = -altura;
        char temp = desenho;
        desenho = p;
        p = temp;

        for (int i = 0; i<altura; i++){
            for (int j = 0; j<altura; j++){
                if (i==0 || i == (altura-1) || j == 0 || j == (altura-1) || i == j || i + j == (altura-1) ){
                    printf("%c" , desenho);
                    
                }
                else{
                    printf("%c", p);
                }
               

            }
            printf("\n");
        }
    }
   
    

    
    return 0;

}