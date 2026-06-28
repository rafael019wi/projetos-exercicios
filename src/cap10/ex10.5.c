/**
 * @file ex10.5.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 10.5.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float numerador;
    float denominador;
} Fracao;

Fracao somar( const Fracao *f1, const Fracao *f2 );
Fracao subtrair( const Fracao *f1, const Fracao *f2 );
Fracao multiplicar( const Fracao *f1, const Fracao *f2 );
Fracao dividir( const Fracao *f1, const Fracao *f2 );
void imprimirFracao( const Fracao *f );

int main() {
    Fracao f1;
    Fracao f2;
    Fracao r;
    printf("Fracao 1\n");
    printf("Numerador: ");
    scanf("%f", &f1.numerador);
    printf("Denominador: ");
    scanf("%f", &f1.denominador);

    printf("Fracao 2\n");
    printf("Numerador: ");
    scanf("%f", &f2.numerador);
    printf("Denominador: ");
    scanf("%f", &f2.denominador);

    r = somar(&f1, &f2);
    imprimirFracao(&f1);
    printf(" + ");
    imprimirFracao(&f2);
    printf(" = ");
    imprimirFracao(&r);
    printf("\n");

    r = subtrair(&f1, &f2);
    imprimirFracao(&f1);
    printf(" - ");
    imprimirFracao(&f2);
    printf(" = ");
    imprimirFracao(&r);
    printf("\n");
    
    r = multiplicar(&f1, &f2);
    imprimirFracao(&f1);
    printf(" * ");
    imprimirFracao(&f2);
    printf(" = ");
    imprimirFracao(&r);
    printf("\n");

    r = dividir(&f1, &f2);
    imprimirFracao(&f1);
    printf(" / ");
    imprimirFracao(&f2);
    printf(" = ");
    imprimirFracao(&r);
    printf("\n");

    return 0;
}

Fracao somar(const Fracao *f1, const Fracao *f2) {
    Fracao r;

    if (f1->denominador == f2->denominador) {
        r.denominador = f1->denominador;
        r.numerador = f1->numerador + f2->numerador;
    } else {
        r.denominador = f1->denominador * f2->denominador;
        r.numerador = f1->numerador * f2->denominador +f2->numerador * f1->denominador;
    }

    return r;
}

Fracao subtrair(const Fracao *f1, const Fracao *f2) {
    Fracao r;

    if (f1->denominador == f2->denominador) {
        r.denominador = f1->denominador;
        r.numerador = f1->numerador - f2->numerador;
    } else {
        r.denominador = f1->denominador * f2->denominador;
        r.numerador = f1->numerador * f2->denominador - f2->numerador * f1->denominador;
    }
    return r;
}

Fracao multiplicar(const Fracao *f1, const Fracao *f2) {
    Fracao r;
    r.numerador = f1->numerador * f2->numerador;
    r.denominador = f1->denominador * f2->denominador;
    return r;
}

Fracao dividir(const Fracao *f1, const Fracao *f2) {
    Fracao r;
    r.numerador = f1->numerador * f2->denominador;
    r.denominador = f1->denominador * f2->numerador;
    return r;
}

void imprimirFracao(const Fracao *f) {
    printf("%.2f/%.2f", f->numerador, f->denominador);
}