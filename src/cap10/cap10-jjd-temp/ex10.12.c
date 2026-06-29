/**
 * @file ex10.12.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 10.12.
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
Ponto obterCentro( const Retangulo *r );
void imprimirRetangulo( const Retangulo *r );

int main( void ) {
    Ponto a;
    Ponto b;
    Retangulo c;
    Ponto centro;
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
    c = novoRetangulo(&a,&b);
    imprimirRetangulo(&c);
    centro = obterCentro(&c);
    printf("\nCentro: (%+02d, %+02d)",centro.x,centro.y);
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

Ponto obterCentro( const Retangulo *r ){
    Ponto centro = {
        .x = (r->sDir.x + r->iEsq.x) /2,
        .y = (r->sDir.y + r->iEsq.y) /2
    };
    return centro;
}
