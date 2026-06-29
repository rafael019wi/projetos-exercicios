/**
 * @file ex10.10.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 10.10.
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
Cor clarear( const Cor *c );

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
    escura = clarear(&cor);
    printf("\nCor base: ");
    imprimirCor(&cor);

    printf("\nCor clareada: ");
    imprimirCor(&escura);
    return 0;

}

Cor novaCor( int vermelho, int verde, int azul ){
    if(vermelho < 0 ){
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
Cor clarear( const Cor *c ){
    Cor b = *c;
    if(c->vermelho <3 && c->vermelho >0){
        b.vermelho =3;
    }
    if(c->verde <3 && c->verde >0){
        b.verde =3;
    }
    if(c->azul <3 && c->azul >0){
        b.azul =3;
    }
    if(c->vermelho == 0 && c->verde == 0 && c->azul == 0){
        return novaCor(3,3,3);
    }
    return novaCor(b.vermelho/0.7,b.verde/0.7,b.azul/0.7);
}