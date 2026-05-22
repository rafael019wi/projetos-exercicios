/**
 * @file ex5.9 .c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 5.9.
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

                //i = 0 j = 0 =1 i = 0 j = 1 = 2 i = 2 j = 0 i = 2 j = 1 == 2 
                if(i-j<0){
                    vetor[i][j] = -(i-j) +1;
                }
                else{
                   vetor[i][j]  = i-j +1;
                }

                

                // vetor[i][j] = menor + 1;
            }
        printf("\n");
        }

        for(int i = 0;i<num;i++){
            for(int j = 0 ; j<num ; j++){
                if (j==0 ){
                    if(vetor[i][j]<10){
                        printf("  ");
                    }
                    else{
                        printf(" ");
                    }
                }
                else{
                    if(vetor[i][j]<10){
                        printf("   ");
                    }
                
                    else{
                        printf("  ");
                    }
                }
                printf("%d",vetor[i][j]);
            }
            printf("\n");
        }

    }
    
    return 0;

}