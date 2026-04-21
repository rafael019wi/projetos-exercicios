/**
 * @file ex3.23.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.23.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int maior;

    printf("N1: ");
    scanf("%d", &num1);

    printf("N2: ");
    scanf("%d", &num2);

    printf("N3: ");
    scanf("%d", &num3);

    printf("N4: ");
    scanf("%d", &num4);

    printf("N5: ");
    scanf("%d", &num5);
    

    if (num1> num2 && num1 > num3 && num1 > num4 && num1 > num5){
        maior = num1;
    }
    else if (num2> num1 && num2 > num3 && num2 > num4 && num2 > num5){
        maior = num2;
    }
    else if (num3> num1 && num3 > num2 && num3 > num4 && num3 > num5){
        maior = num3;
    }
    else if (num4> num1 && num4 > num3 && num4 > num2 && num4 > num5){
        maior = num4;
    }
    else{
        maior = num5;
    }
    printf("%d\n", maior);
    if (num1 < 0 || num2 < 0 || num3 < 0 || num4 < 0 || num5 < 0){
        printf("Forneca apenas numeros positivos.");
        return 0;
    }
    for (int i = 1; i<=maior; i++){
        printf("%04d  ", maior - i+1);
        // for (int j = num1;j == maior; j++){
        //     printf()
        // }
        if(i>= maior + 1 - num1){
            printf("*");
        }
        else{
            printf(" ");
        }
        if(i>= maior + 1 - num2){
            printf("*");
        }
        else{
            printf(" ");
        }
        if(i>= maior + 1 - num3){
            printf("*");
        }
        else{
            printf(" ");
        }
        if(i>= maior + 1 - num4){
            printf("*");
        }
        else{
            printf(" ");
        }
        if(i>= maior + 1 - num5){
            printf("*");
        }
        else{
            printf(" ");
        }

        
        printf("\n");
    }
    
    return 0;

}