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

bool ehBissexto(int ano);
void decompoeData(int diaDoAno, int ano , int *mes, int *dia);

int main( void ) {
    int diaAno;
    int ano;
    int mes;
    int dia;

    printf("Dia do ano: ");
    scanf("%d", &diaAno);
    printf("ano: ");
    scanf("%d", &ano);

    decompoeData(diaAno,ano,&mes,&dia);

    printf("\nO dia %d do ano %d cai no dia %d do mes %d.",diaAno,ano,dia,mes);
    return 0;

}

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
        diaDoAno-=diasDoMes[mesAtual];
        mesAtual++;
    }
    *mes = mesAtual;
    *dia = diaDoAno;
}