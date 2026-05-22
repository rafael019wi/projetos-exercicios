/**
 * @file ex8.4.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 8.4.
 * 
 * @copyright Copyright (c) 20__
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool ehBissexto(int ano){
    return (ano%4 == 0 && ano%100 != 0)|| (ano%400 == 0);
}
void decompoeData(int diaDoAno, int ano , int *mes, int *dia){
    int diasDoMes[] = {0,31,28,31,30,31,30,31,31,30,31,30,31,30,31};
    if(ehBissexto(ano)){
        diasDoMes[2]++;
    }
    int mesAtual = 1;
    while(diasDoMes[mesAtual]<diaDoAno){
        diaDoAno-diasDoMes[mesAtual];
        mesAtual++;
    }
    *mes = mesAtual;
    *dia = diaDoAno;
}

int main( void ) {

    return 0;

}