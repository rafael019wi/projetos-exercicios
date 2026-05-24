/**
 * @file ex7.2.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 7.2.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI acos(-1)

float areaCirculo(float r);
float circunferenciaCirculo(float r);
int main( void ) {
    float raio;
    scanf("%f", &raio);

    printf("\nArea = %.2f",areaCirculo(raio));
    printf("\nCircunferencia = %.2f",circunferenciaCirculo(raio));
    return 0;

}
float areaCirculo(float r){
    return pow(r,2)*PI;
}
float circunferenciaCirculo(float r){
    return 2*PI*r;
}