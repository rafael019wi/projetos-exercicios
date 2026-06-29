/**
 * @file ex10.3.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 10.3.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct Hora{
    int horas;
    int minutos;
    int segundos;
}Hora;

Hora gerarHora( int quantidadeSegundos );

void imprimirHora( const Hora *hora );

int main( void ) {
    int segundos;
    Hora h;
    printf("Segundos: ");
    scanf("%d", &segundos);
    h = gerarHora(segundos);
    printf("Hora correspondente: ");
    imprimirHora(&h);
    return 0;

}

Hora gerarHora( int quantidadeSegundos ){
    int m = quantidadeSegundos/60;
    quantidadeSegundos = quantidadeSegundos % 60;
    int h = m/60;
    m = m%60;
    Hora hora = {
        .horas = h,
        .minutos = m,
        .segundos = quantidadeSegundos
    };
    return  hora;
}

void imprimirHora( const Hora *hora ){
    printf("%d:%d:%d",hora->horas,hora->minutos,hora->segundos);
}