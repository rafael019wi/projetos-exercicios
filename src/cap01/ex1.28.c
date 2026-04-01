/**
 * @file ex1.28.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 1.28.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int segundos,horas,minutos,seg;

    printf("Quantidade de segundos: ");
    scanf("%d", &segundos);

    minutos = segundos/60;
    seg = segundos % 60;
    horas = minutos/60;
    minutos = minutos % 60;

    printf ("\n%d segundo(s) correspondem a %d hora(s), %d minuto(s) e %d segundos(s)", segundos,horas,minutos,seg);
    return 0;

}