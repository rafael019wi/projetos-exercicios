/**
 * @file ex3.15.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.15.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int numero;
    int fatorial = 1;
    

    printf("Numero: ");
    scanf("%d", &numero);
    if (numero<= 0 ){
        printf("Nao ha fatorial de numero negativo.");
    }
    else {
        for (int i = numero; i>0;i--){
        fatorial = fatorial*i;
        
        }
        printf("%d! = %d",numero,fatorial);
    }
    return 0;

}