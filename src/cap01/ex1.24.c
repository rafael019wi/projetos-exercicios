/**
 * @file ex1.24.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 1.24.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float vlrhA;
    int qntdeA;
    float desconto;
    float salario;

    printf("\ndigite valor da hora aula: ");
    scanf("%f", &vlrhA);
    printf("\ndigite a quantidade de aulas: ");
    scanf("%d", &qntdeA);
    printf("\nDigite o desconto do inss: ");
    scanf("%f", &desconto);

    salario = (vlrhA*qntdeA)*(1-(desconto/100));

    printf("\nSalario Liquido: %.2f", salario);




    return 0;

}