/**
 * @file ex2.18.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 2.18.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float n1;
    float n2;
    char operacao;

    printf("N1: ");
    scanf("%f", &n1);

    printf("N2: ");
    scanf("%f", &n2);

    printf("\nEscolha uma operacao de acordo com o menu:\n");
    printf("    +) Adicao;");
    printf("\n    -) Subtracao;");
    printf("\n    *) Multiplicacao;");
    printf("\n    /) Divisao");
    printf("\nOperacao: ");
    scanf(" %c", &operacao);

    switch (operacao){
        case '+':
            printf("%.2f + %.2f = %.2f",n1,n2,n1+n2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f",n1,n2,n1-n2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f",n1,n2,n1*n2);
            break;
        case '/':
            printf("%.2f / %.2f = %.2f",n1,n2,n1/n2);
            break;  
        default:
            printf("Opcao invalida!");
            break;       
    }



    return 0;

}