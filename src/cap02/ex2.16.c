/**
 * @file ex2.16.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 2.16.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int num, milhares, centenas, dezenas, unidades, mesmo;
    printf("Entre com um numero entre 1 e 3999: ");
    scanf("%d", &num);

    if(num < 1 || num > 3999 ){
        printf("\nNumero incorreto!");
        return 0;
    }

    mesmo = num;
    milhares = mesmo /1000;
    mesmo = mesmo - milhares*1000;
    centenas = mesmo / 100;
    mesmo = mesmo - centenas*100;
    dezenas = mesmo / 10;
    mesmo = mesmo - dezenas*10;
    unidades = mesmo;

    //printf("%d + %d + %d + %d\n", milhares,centenas,dezenas,unidades);
    printf("%d = ",num);
    if (milhares > 0){
        for(int i = 0; i != milhares; i++){
            printf("M");
        }
    }

    if (centenas > 0 && centenas<4){
        for(int i = 0; i != centenas; i++){
            printf("C");
        }
    }
    else if (centenas==4){
        printf("CD");
    }
    else if(centenas>4 && centenas<9){
        printf("D");
        for(int i = 5; i!=centenas;i++){
            printf("C");
        }
    }
    else if(centenas == 9){
        printf("CM");
    }

    if (dezenas > 0 && dezenas<4){
        for(int i = 0; i != dezenas; i++){
            printf("X");
        }
    }
    else if (dezenas==4){
        printf("LX");
    }
    else if(dezenas>4 && dezenas<9){
        printf("L");
        for(int i = 5; i!=dezenas;i++){
            printf("X");
        }
    }
    else if(dezenas == 9){
        printf("XC");
    }

    if (unidades > 0 && unidades<4){
        for(int i = 0; i != unidades; i++){
            printf("I");
        }
    }
    else if (unidades==4){
        printf("IV");
    }
    else if(unidades>4 && unidades<9){
        printf("V");
        for(int i = 5; i!=unidades;i++){
            printf("I");
        }
    }
    else if(unidades == 9){
        printf("IX");
    }

    


    
    return 0;

}