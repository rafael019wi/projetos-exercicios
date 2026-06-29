/**
 * @file ex10.4.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 10.4.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct Complexo{
    float real;
    float imaginario;
} Complexo;

Complexo somar( const Complexo *c1, const Complexo *c2 );
void imprimirComplexo( const Complexo *c );

int main() {
    Complexo c1;
    Complexo c2;
    Complexo soma;
    printf("Complexo 1\n");
    printf("    Parte real: ");
    scanf("%f", &c1.real);
    printf("    Parte imaginaria: ");
    scanf("%f", &c1.imaginario);
    printf("Complexo 2\n");
    printf("    Parte real: ");
    scanf("%f", &c2.real);
    printf("    Parte imaginaria: ");
    scanf("%f", &c2.imaginario);

    soma = somar(&c1, &c2);

    imprimirComplexo(&c1);
    printf(" + ");
    imprimirComplexo(&c2);
    printf(" = ");
    imprimirComplexo(&soma);
    printf("\n");

    return 0;
}

Complexo somar(const Complexo *c1, const Complexo *c2) {
    Complexo r;
    r.real = c1->real+c2->real;
    r.imaginario = c1->imaginario+c2->imaginario;
    return r;
}

void imprimirComplexo(const Complexo *c) {
    printf("(%.2f + %.2fi)",c->real,c->imaginario);
}
