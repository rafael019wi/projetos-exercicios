/**
 * @file ex10.9.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 10.9.
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
Cor escurecer( const Cor *c );

int main( void ) {
    int vermelho;
    int verde;
    int azul;
    Cor cor;
    Cor escura;

    printf("Vermelho :");
    scanf("%d", &vermelho);

    printf("Verde :");
    scanf("%d", &verde);

    printf("Azul :");
    scanf("%d", &azul);

    cor = novaCor(vermelho,verde,azul);
    escura = escurecer(&cor);
    printf("\nCor base: ");
    imprimirCor(&cor);

    printf("\nCor escurecida: ");
    imprimirCor(&escura);
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
    printf("rgb( %d, %d, %d )",c->vermelho, c->verde, c->azul);
}
Cor escurecer( const Cor *c ){
    return novaCor(c->vermelho*0.7,c->verde*0.7,c->azul*0.7);
}