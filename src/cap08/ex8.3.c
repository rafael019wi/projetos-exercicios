/**
 * @file ex8.3.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 8.3.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
void decompoeTempo( int totalSeg, int *horas, int *minutos, int *seg );
int main( void ) {
    int segundos;
    int seg;
    int min;
    int horas;

    printf("Total de segundos: ");
    scanf("%d",&segundos);

    decompoeTempo(segundos,&horas,&min,&seg);

    printf("\n%d segundo(s) corresponde(m) a:\n",segundos);
    printf("    %d hora(s)\n",horas);
    printf("    %d minuto(s)\n",min);
    printf("    %d segundo(s)\n",seg);



    return 0;

}
void decompoeTempo( int totalSeg, int *horas, int *minutos, int *seg ){
    *horas = totalSeg/3600;
    totalSeg = totalSeg%3600;
    *minutos = totalSeg/60;
    *seg = totalSeg%60;
}