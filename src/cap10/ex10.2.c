/**
 * @file ex10.2.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 10.2.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Data{
    int dia;
    int mes;
    int ano;
}Data;

int diaDoAno( const Data *data );
void imprimirData( const Data *data );

int main( void ) {
    Data d1;
    printf("\ndia: ");
    scanf("%d",&d1.dia);
    printf("\nmes: ");
    scanf("%d",&d1.mes);
    printf("\nano: ");
    scanf("%d",&d1.ano);
    printf("O dia do ano da data ");
    imprimirData(&d1);
    printf(" eh %d.",diaDoAno(&d1));
    return 0;

}

int diaDoAno( const Data *data ){
    bool ehbi;
    int diaAno[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int dia = 0;
    if((data->ano%4==0 && data->ano%100 !=0)|| (data->ano%400 == 0)){
        diaAno[1]++;
    }
    for(int i = 0 ; i<data->mes-1;i++){
        dia+= diaAno[i];
    }
    dia+= data->dia;
    return dia;

}

void imprimirData( const Data *data ){
    printf("%02d/%02d/%04d",data->dia,data->mes,data->ano);
}