/**
 * @file ex2.19.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 2.19.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float tempC;
    float tempF;
    char temp;

    printf("Escolha uma operacao de acordo com o menu: \n");
    printf("    C) Celsius -> Fahrenheit;\n");
    printf("    Fahrenheit -> Celsius.");

    printf("\nOpcao: ");
    scanf(" %c", &temp);

    switch (temp){
        case 'C':
            printf("\nEntre com a temperatura em graus Celsius: ");
            scanf("%f", &tempC);
            tempF = (1.8*tempC) + 32;
            printf("\n%.2f graus Celsius correspondem a %.2f graus Fahrenheit", tempC,tempF);
            break;
        case 'F':
            printf("\nEntre com a temperatura em graus Fahrenheit: ");
            scanf("%f", &tempF);
            tempC = (tempF-32)/1.8;
            printf("\n%.2f graus Fahrenheit correspondem a %.2f graus Celsius", tempF,tempC);
            break;
        default:
            printf("Opcao invalida!");
            break;
    }
   
    return 0;

}