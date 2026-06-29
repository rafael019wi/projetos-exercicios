/**
 * @file ex10.13.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 10.13.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct Ponto{
    int x;
    int y;
}Ponto;

typedef struct Retangulo{
    Ponto sDir;
    Ponto iEsq;
}Retangulo;

Retangulo novoRetangulo( const Ponto *sEsq, const Ponto *iDir );
void mover( Retangulo *r, int x, int y );
void imprimirRetangulo( const Retangulo *r );

int main( void ) {
    Ponto a;
    Ponto b;
    Retangulo c;
    int x;
    int y;
    printf("Ponto superior esquerdo\n");
    printf("    x: ");
    scanf("%d", &a.x);
    printf("    y: ");
    scanf("%d", &a.y);
    printf("Ponto inferior direito\n");
    printf("    x: ");
    scanf("%d", &b.x);
    printf("    y: ");
    scanf("%d", &b.y);

    printf("Mover em x: ");
    scanf("%d", &x);
    printf("Mover em y: ");
    scanf("%d", &y);

    c = novoRetangulo(&a,&b);
    printf("\nRetangulo original:");
    imprimirRetangulo(&c);
    mover(&c,x,y);
    printf("\nRetangulo movido:");
    imprimirRetangulo(&c);

    return 0;

}

Retangulo novoRetangulo( const Ponto *sEsq, const Ponto *iDir ){
    Retangulo a = {
        .sDir= *sEsq,
        .iEsq = *iDir
    };
    return a;
}


void imprimirRetangulo( const Retangulo *r ){
    printf("\n(%+02d, %+02d) =====|\n",r->sDir.x,r->sDir.y);
    printf("|               |\n"); 
    printf("|               |\n");
    printf("|===== (%+02d, %+02d)",r->iEsq.x,r->iEsq.y);
}



void mover( Retangulo *r, int x, int y ){
    r->iEsq.x += x;
    r->iEsq.y += y;
    r->sDir.x += x;
    r->sDir.y += y;
}