/**
 * @file ex7.9.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 7.9.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int lePositivo();
bool ehTriangulo(int ladoA,int ladoB, int ladoC);
int tipoTriangulo(int ladoA,int ladoB,int ladoC);
int main( void ) {
    int ladoA[5];
    int ladoB[5];
    int ladoC[5];
    for(int i = 0 ; i <5 ; i ++){
        printf("ladoA: ");
        ladoA[i] = lePositivo();

        printf("ladoB: ");
        ladoB[i] = lePositivo();

        printf("ladoC: ");
        ladoC[i] = lePositivo();
    }
    for(int i = 0 ; i <5 ; i++){
        printf("\nValores %d, %d e %d: ",ladoA[i],ladoB[i],ladoC[i]);
        if(tipoTriangulo(ladoA[i],ladoB[i],ladoC[i]) == 0){
            printf("nao formam um triangulo");
        }
        else if(tipoTriangulo(ladoA[i],ladoB[i],ladoC[i]) == 1){
            printf("triangulo equilatero");
        }
        else if(tipoTriangulo(ladoA[i],ladoB[i],ladoC[i]) == 2){
            printf("triangulo isosceles");
        }
        else{
            printf("triangulo escaleno");
        }
    }
    return 0;

}

int lePositivo(){
    int n;
    scanf("%d", &n);

    while(n<=0){
        printf("Entre com um valor positivo: ");
        scanf("%d", &n);
    }
    return n;
}

bool ehTriangulo(int ladoA,int ladoB, int ladoC){
    return (( abs(ladoA-ladoB)< ladoC && ladoA+ladoB > ladoC) && (abs(ladoA-ladoC) < ladoB && ladoA+ladoC > ladoB) && (abs(ladoB-ladoC) < ladoA && ladoC+ladoB > ladoA));
}

int tipoTriangulo(int ladoA,int ladoB,int ladoC){
    if(!ehTriangulo(ladoA,ladoB,ladoC)){
        return 0;
    }
    if(ladoA == ladoB && ladoA==ladoC){
        return 1;
       // printf("EQUILATERO");
    }
    else if(ladoA == ladoB || ladoA==ladoC || ladoB == ladoC){
        return 2;
            //printf("ISOSCELES");
    }
    else{
        return 3;
            //printf("ESCALENO");
    }
}