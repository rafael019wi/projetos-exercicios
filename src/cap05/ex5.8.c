/**
 * @file ex5.8.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 5.8.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int num;
    printf("Numero entre 1 e 100:");
    scanf("%d",&num);
    int vetor[num][num];
    if(num == 0 || num >100){
        printf("Numero incorreto!");
    }
    else{
        for(int i =0;i<num;i++){
            for(int j = 0 ; j<num ; j++){
                int topo = i;
                int esquerda = j;
                int baixo = num - 1 - i;
                int direita = num - 1 - j;

                int menor = topo;

                if(esquerda < menor){
                    menor = esquerda;
                }
                
                if(baixo < menor){
                    menor = baixo;
                }
                
                if(direita < menor){
                    menor = direita;
                }

                vetor[i][j] = menor + 1;
            }
        printf("\n");
    }

    for(int i = 0;i<num;i++){
        for(int j = 0 ; j<num ; j++){
            if (j==0){
                printf("  ");
            }
            printf("%d",vetor[i][j]);
            if(j!= num-1){
                printf("   ");
            }
        }
        printf("\n");
    }

    }
    
    return 0;

}