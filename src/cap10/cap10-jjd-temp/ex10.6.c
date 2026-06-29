/**
 * @file ex10.6.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 10.6.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct Cor{
    int vermelho;
    int verde;
    int azul;

}Cor;

Cor novaCor( int vermelho, int verde, int azul );   
void imprimirCor( const Cor *c );

int main( void ) {
    int vermelho;
    int verde;
    int azul;
    Cor cor;

    printf("Vermelho :");
    scanf("%d", &vermelho);

    printf("Verde :");
    scanf("%d", &verde);

    printf("Azul :");
    scanf("%d", &azul);

    cor = novaCor(vermelho,verde,azul);

    imprimirCor(&cor);
    return 0;

}

Cor novaCor( int vermelho, int verde, int azul ){
    if(vermelho < 0){
        vermelho = 0;
    }
    if (azul < 0){
        azul = 0;
    }
    if (verde < 0){
        verde = 0;
    }

    if(vermelho > 255){
        vermelho = 255;
    }
    if (azul > 255){
        azul = 255;
    }
    if (verde > 255){
        verde = 255;
    }
    Cor a = (Cor) {vermelho,verde,azul};
    return a;
}  
void imprimirCor( const Cor *c ){
    printf("Cor: rgb( %d, %d, %d )",c->vermelho, c->verde, c->azul);
}