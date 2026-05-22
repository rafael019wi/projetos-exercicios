/**
 * @file ex8.3.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 8.3.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {

    return 0;

}
void decompoeTempo( int totalSeg, int *horas, int *minutos, int *seg ){
    *horas = totalSeg/3600;
    totalSeg = totalSeg%3600;
    *minutos = totalSeg/60;
    *seg = totalSeg%60;
}