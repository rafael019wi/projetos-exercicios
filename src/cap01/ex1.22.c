/**
 * @file ex1.22.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 1.22.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float produto,desconto,valorAposDesconto;

    printf("Valor do produto: ");
    scanf("%f", &produto);

    desconto = 9;
    valorAposDesconto = produto*(1-(desconto/100));
    
    printf("\nPreco de venda com 9%% de desconto: %.2f", valorAposDesconto);
    
    return 0;

}