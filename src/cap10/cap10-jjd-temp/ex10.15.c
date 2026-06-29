/**
 * @file ex10.15.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 10.15.
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
bool intercepta( const Retangulo *r1, const Retangulo *r2 );
void imprimirRetangulo( const Retangulo *r );

int main( void ) {
    Ponto a;
    Ponto b;
    Retangulo c;
    Ponto a1;
    Ponto b1;
    Retangulo c1;
    printf("Retangulo 1:\n");
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
    printf("Retangulo 2:\n");
    printf("Ponto superior esquerdo\n");
    printf("    x: ");
    scanf("%d", &a1.x);
    printf("    y: ");
    scanf("%d", &a1.y);
    printf("Ponto inferior direito\n");
    printf("    x: ");
    scanf("%d", &b1.x);
    printf("    y: ");
    scanf("%d", &b1.y);
    c1 = novoRetangulo(&a1,&b1);
    c = novoRetangulo(&a,&b);
    if(intercepta(&c,&c1)){
        printf("\nOs retangulos se interceptam!");
    }
    else{
        printf("\nOs retangulos nao se interceptam!");
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

bool intercepta( const Retangulo *r1, const Retangulo *r2 ) {
    if ((r1->iEsq.x < r2->sDir.x) ||  (r2->iEsq.x < r1->sDir.x) || ( r1->iEsq.y > r2->sDir.y) ||  (r2->iEsq.y > r1->sDir.y)) {  
        return false;
    }

    return true;
}
