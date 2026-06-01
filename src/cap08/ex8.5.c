/**
 * @file ex8.5.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 8.5.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int buscar(const int *a,int n, int chave);

int main( void ) {
    int n[10];
    int b;
    for(int i = 0; i<10; i++){
        printf("n[%d]: ",i);
        scanf("%d", &n[i]);
    }
    printf("Buscar por: ");
    scanf("%d",&b);

    if(buscar(n,10,b)!= -1){
        printf("\nO valor %d foi encontrado na posicao %d.",b,buscar(n,10,b));
    }
    else{
        printf("\nO valor %d nao foi encontrado.",b);
    }
    return 0;

}
int buscar(const int *a, int n, int chave) {
    for (int i = 0; i < n; i++) {
        if (a[i] == chave) {
            return i;
        }
    }
    return -1;
}