/**
 * @file ex10.11.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 10.11.
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
int calcularArea( const Retangulo *r );
void imprimirRetangulo( const Retangulo *r );

int main( void ) {
    Ponto a;
    Ponto b;
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
    imprimirRetangulo(&c);
    printf("\nArea: %d",calcularArea(&c));
    return 0;

}

Retangulo novoRetangulo( const Ponto *sEsq, const Ponto *iDir ){
    Retangulo a = {
        .sDir= *sEsq,
        .iEsq = *iDir
    };
    return a;
}

int calcularArea( const Retangulo *r ){
    return abs(r->iEsq.x - r->sDir.x) * abs(r->iEsq.y - r->sDir.y);
}
void imprimirRetangulo( const Retangulo *r ){
    printf("\n(%+02d, %+02d) =====|\n",r->sDir.x,r->sDir.y);
    printf("|               |\n"); 
    printf("|               |\n");
    printf("|===== (%+02d, %+02d)",r->iEsq.x,r->iEsq.y);
}