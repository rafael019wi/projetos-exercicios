/**
 * @file ex9.8.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 9.8.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( void ) {
    char string1[3][40];
    char temp[40];
    for (int i = 0; i < 3; i++) {
        printf("String %d: ", i + 1);
        fgets(string1[i], 40, stdin);
        string1[i][strlen(string1[i])-1] = '\0';
    }


     for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (strcmp(string1[i], string1[j]) > 0) {
                strcpy(temp, string1[i]);
                strcpy(string1[i], string1[j]);
                strcpy(string1[j], temp);
            }
        }
    }
    printf("%s, %s e %s", string1[0], string1[1], string1[2]);

    return 0;

}