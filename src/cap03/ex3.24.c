/**
 * @file ex3.24.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.24.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float nota = 0.0f;
    float media = 0.0f;
    printf("Forneca a nota de 10 alunos: \n");
    for(int i = 1; i<=10; i++){
        printf("Nota %02d: ",i);
        scanf("%f", &nota);
        media = media + nota;
    }
    media = media/10;
    printf("\nA media aritmetica das dez notas e: %.2f",media);
    return 0;

}