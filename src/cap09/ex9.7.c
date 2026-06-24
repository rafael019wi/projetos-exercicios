/**
 * @file ex9.7.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 9.7.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string1[5][40];
    char string2[5][40];
    for (int i = 0; i < 5; i++) {
        printf("Par %d, palavra 1: ", i + 1);
        fgets(string1[i], 40, stdin);
        string1[i][strlen(string1[i])-1] = '\0';

        printf("Par %d, palavra 2: ", i + 1);
        fgets(string2[i], 40, stdin);
        string2[i][strlen(string2[i])-1] = '\0';
    }

    for (int i = 0; i < 5; i++) {
        int comp = strcmp(string1[i], string2[i]);
        printf("%s - %s: ", string1[i], string2[i]);
        if (comp == 0)
            printf("IGUAIS\n");
        else if (comp < 0)
            printf("ORDEM CRESCENTE\n");
        else
            printf("ORDEM DECRESCENTE\n");
    }
    return 0;
}