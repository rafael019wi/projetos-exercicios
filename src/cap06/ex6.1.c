/**
 * @file ex6.1.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 6.1.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main( void ) {
    float a;
    float b;
    float c;
    float delta;
    float x1;
    float x2;
    printf("a: ");
    scanf("%f", &a);
    printf("\nb: ");
    scanf("%f", &b);
    printf("\nc: ");
    scanf("%f", &c);
    if(a<0 || b<0 || c<0){
        printf("\nNao existe equacao do segundo grau!");
    }
    else{
        delta = (b*b) - (4*a*c);
        printf("\nDelta: %.2f",delta);
        if(delta < 0 ){
            printf("\nS = {}");
        }
        else{
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            if(x1>x2){
                float temp = x1;
                x1 = x2;
                x2 = temp;
            }
            if(x1 == x2){
                printf("\nS = {%.2f}",x1);
            }
            else{
                printf("\nS = {%.2f, %.2f}",x1,x2);
            }
            
        }
    }
    
    return 0;

}