/**
 * @file ex7.11.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 7.11.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int calculaDigito(int n);
bool numeroCorreto(int n);
int obtemNumero(int n);
int obtemDigito(int n);
int main( void ) {
    int numero;
    printf("Numero: ");
    scanf("%d",&numero);
    while(numero>99999 || numero<1){
        printf("Numero: ");
        scanf("%d",&numero);
    }
    printf("\nNumero completo: %d",numero);
    printf("\nNumero: %d",obtemNumero(numero));
    printf("\nDigito: %d",obtemDigito(numero));
    printf("\nDigito calculado: %d",calculaDigito(obtemNumero(numero)));
    if(numeroCorreto(numero)){
        printf("\nO numero fornecido esta correto!");
    }
    else{
        printf("\nO numero fornecido esta incorreto!");
    }
    return 0;

}

int calculaDigito(int n){
    int unidades = n - (n/10) * 10;
    int dezena = (n - unidades - (n/100) * 100)/10;
    int centena = (n - (n/1000)*1000 - unidades - dezena*10)/100;
    int milhar = (n - unidades - dezena*10 - centena*100)/1000;
    int digitoVerificador = unidades*2 + dezena * 3 + centena*4 + milhar * 5;
    int sub = 11-digitoVerificador%11;

    if(sub == 10 || sub == 11){
        return 0;
    }
    else{
        return sub;
    }
}

int obtemNumero(int n){
    int unidades = n - (n/10) * 10;
    int dezena = (n - unidades - (n/100) * 100)/10;
    int centena = (n - (n/1000)*1000 - unidades - dezena*10)/100;
    int milhar = (n - unidades - dezena*10 - centena*100)/1000;
    int dMilhar = (n - unidades - dezena*10 - centena*100 - milhar*1000)/10000;
    int numero = dezena + centena*10 + milhar*100 + dMilhar*1000;
    return numero;
}

int obtemDigito(int n){
    return n - obtemNumero(n)*10;
}
bool numeroCorreto(int n){
    return obtemDigito(n) == calculaDigito(obtemNumero(n));
}