/**
 * @file ex3.13.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.13.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int n1;
    int n2;
    int cont2 = 0;
    int cont3= 0;
    int cont4= 0;

    printf("N1: ");
    scanf("%d",&n1);

    printf("N2: ");
    scanf("%d", &n2);

    if (n1>n2){
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    for (int i = n1;i<=n2;i++){
        if (i%2==0){
            cont2++;
            if(i%4==0){
                cont4++;
            }
            if(i%6 == 0){
                cont3++;   
            }
        }
        else if (i%3==0){
            cont3++;
            if(i%6 == 0){
                cont2++;
                if (i%12 == 0){
                    cont4++;
                }
            }
        }
        
    }
    printf("\nMultiplos de 2: %d", cont2);
    printf("\nMultiplos de 3: %d", cont3);
    printf("\nMultiplos de 4: %d", cont4);
    return 0;

}