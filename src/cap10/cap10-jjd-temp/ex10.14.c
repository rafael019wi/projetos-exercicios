/**
 * @file ex10.14.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 10.14.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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
bool contem( const Retangulo *r, const Ponto *p );
void imprimirRetangulo( const Retangulo *r );

int main( void ) {
    Ponto a;
    Ponto b;
    Ponto p[5];
    Retangulo c;

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

    for (int i = 0; i < 5; i++) {
        printf("x: ");
        scanf("%d", &p[i].x);
        printf("y: ");
        scanf("%d", &p[i].y);
    }
    for(int i = 0 ; i<5 ; i++){
        printf("(%+02d, %+02d): ",p[i].x,p[i].y);
        if (contem(&c, &p[i])) {
            printf("contido!\n");
        } else {
            printf("nao contido!\n");
        }
    }

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

bool contem( const Retangulo *r, const Ponto *p ) {

    return (p->x>=r->sDir.x) && (p->x<=r->iEsq.x) && (p->y<=r->sDir.y) && (p->y>=r->iEsq.y);
}


