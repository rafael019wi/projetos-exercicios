/**
 * @file ex3.29.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.29.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float saldoInicial;
    printf("Saldo inicial: ");
    scanf("%f", &saldoInicial);
    int operacao;
    float saldo;
    printf("Operacoes: ");
    printf("\n  1) Deposito;");
    printf("\n  2) Saque;");
    printf("\n  3) Fim;\n");
    while(operacao != 3){
        scanf("%d", &operacao);
        if(operacao == 1){
            scanf("%f", &saldo);
            saldoInicial += saldo;
        }
        else if(operacao == 2){
            scanf("%f", &saldo);
            saldoInicial -= saldo;
        }
        else if (operacao<1 || operacao >3){
            printf("Operacao Invalida.\n");
        }
    }

    
    if(saldoInicial == 0){
        printf("Saldo final: R$%.2f\n", saldoInicial);
        printf("Sem saldo.");
        
    }
    else if (saldoInicial>0){
        printf("Saldo final: R$%.2f\n", saldoInicial);
        printf("Conta preferencial.");
    }
    else{
        printf("Saldo final: -R$%.2f\n", -saldoInicial);
        printf("Conta devedora.");
    }

    return 0;

}