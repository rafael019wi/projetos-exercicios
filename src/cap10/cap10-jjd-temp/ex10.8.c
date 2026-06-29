/**
 * @file ex10.8.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 10.8.
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

void setVermelho( Cor *c, int vermelho );
void setVerde( Cor *c, int verde );
void setAzul( Cor *c, int azul );

int main( void ) {
    int vermelho;
    int verde;
    int azul;
    int v,ve,a;
    Cor cor;
    Cor cor2;

    printf("Vermelho :");
    scanf("%d", &vermelho);

    printf("Verde :");
    scanf("%d", &verde);

    printf("Azul :");
    scanf("%d", &azul);

    cor = novaCor(vermelho,verde,azul);

    printf("Novo vermelho :");
    scanf("%d", &v);

    printf("Novo verde :");
    scanf("%d", &ve);

    printf("Novo azul :");
    scanf("%d", &a);

    printf("\nCor: ");
    imprimirCor(&cor);
    printf("\n");

    setVermelho(&cor2,v);
    setVerde(&cor2,ve);
    setAzul(&cor2,a);
    printf("Cor alterada: ");
    imprimirCor(&cor2);

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

void setVermelho( Cor *c, int vermelho ){
    if(vermelho < 0){
        vermelho = 0;
    }
    if(vermelho > 255){
        vermelho = 255;
    }
    c->vermelho = vermelho;
}
void setVerde( Cor *c, int verde ){
    if(verde < 0){
        verde = 0;
    }
    if(verde > 255){
        verde = 255;
    }
    
    c->verde = verde;
}
void setAzul( Cor *c, int azul ){
    if(azul < 0){
        azul = 0;
    }
    if(azul > 255){
        azul = 255;
    }
    c->azul = azul;
}