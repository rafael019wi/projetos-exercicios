/**
 * @file ex10.7.c
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

int getVermelho( const Cor *c );
int getVerde( const Cor *c );
int getAzul( const Cor *c );

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

    printf("\ngetVermelho(): %d",getVermelho(&cor));
    printf("\ngetVerde(): %d",getVerde(&cor));
    printf("\ngetAzul(): %d",getAzul(&cor));
    
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

int getVermelho( const Cor *c ){
    return c->vermelho;
}
int getVerde( const Cor *c ){
    return c->verde;
}
int getAzul( const Cor *c ){
    return c->azul;
}