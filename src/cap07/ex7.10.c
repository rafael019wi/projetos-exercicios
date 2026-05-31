/**
 * @file ex7.10.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 7.10.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>


int calculaDigito(int n);

int main( void ) {
    int numero;
    printf("Numero: ");
    scanf("%d",&numero);
    while(numero>9999 || numero<1){
        printf("Numero: ");
        scanf("%d",&numero);
    }
    printf("\nDigito verificador de %d: %d",numero,calculaDigito(numero));
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