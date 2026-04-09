/**
 * @file ex2.10.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 2.10.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float a;
    float b;
    float c;
    float sub1;
    float sub2;
    float sub3;
    
    printf("a: ");
    scanf("%f", &a);

    printf("\nb: ");
    scanf("%f", &b);

    printf("\nc: ");
    scanf("%f", &c);

    sub1 = a-b;
    sub2= a-c;
    sub3 = b-c;

    if(sub1 < 0){
        sub1 = -sub1;
    }
    if (sub2 < 0){
        sub2 = -sub2;
    }
    if (sub3<0){
        sub3 = -sub3;
    }

    if ((sub1 < c && a+b > c) && (sub2 < b && a+c > b) && (sub3 < a && c+b > a)){
        printf("\nTriangulo ");
        if(a == b && a==c){
        printf("EQUILATERO");
        }
        else if(a == b || a==c || b == c){
            printf("ISOSCELES");
        }
        else{
            printf("ESCALENO");
        }
    }
    else{
        printf("\nAs medidas fornecidas dos lados nao representam um triangulo valido!");
    }

    
    return 0;

}