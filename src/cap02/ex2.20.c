/**
 * @file ex2.20.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 2.20.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    char c;

    printf("Entre com um caractere: ");
    scanf(" %c", &c);
    printf("\n");
    switch (c){
        case 'a':
        case 'A':
            printf("O caractere '%c' e uma vogal.", c);
            break;
        case 'e':
        case 'E':
            printf("O caractere '%c' e uma vogal.", c);
            break;
        case 'i':
        case 'I':
            printf("O caractere '%c' e uma vogal.", c);
            break;
        case 'o':
        case 'O':
            printf("O caractere '%c' e uma vogal.", c);
            break;
        case 'u':
        case 'U':
            printf("O caractere '%c' e uma vogal.", c);
            break; 
        
        case 'b':
        case 'B':
            printf("O caractere '%c' e uma consoante.", c);
            break;
        case 'c':
        case 'C':
            printf("O caractere '%c' e uma consoante.", c);
            break;
        case 'd':
        case 'D':
            printf("O caractere '%c' e uma consoante.", c);
            break;
        case 'f':
        case 'F':
            printf("O caractere '%c' e uma consoante.", c);
            break;
        case 'g':
        case 'G':
            printf("O caractere '%c' e uma consoante.", c);
            break;
        case 'h':
        case 'H':
            printf("O caractere '%c' e uma consoante.", c);
            break;
        case 'j':
        case 'J':
            printf("O caractere '%c' e uma consoante.", c);
            break;
        case 'k':
        case 'K':
            printf("O caractere '%c' e uma consoante.", c);
            break;
        case 'l':
        case 'L':
            printf("O caractere '%c' e uma consoante.", c);
            break;
        case 'm':
        case 'M':
            printf("O caractere '%c' e uma consoante.", c);
            break;
        case 'n':
        case 'N':
            printf("O caractere '%c' e uma consoante.", c);
            break;
        case 'p':
        case 'P':
            printf("O caractere '%c' e uma consoante.", c);
            break;
        case 'q':
        case 'Q':
            printf("O caractere '%c' e uma consoante.", c);
            break;
        case 'r':
        case 'R':
            printf("O caractere '%c' e uma consoante.", c);
            break;
        case 's':
        case 'S':
            printf("O caractere '%c' e uma consoante.", c);
            break;
        case 't':
        case 'T':
            printf("O caractere '%c' e uma consoante.", c);
            break;
        case 'v':
        case 'V':
            printf("O caractere '%c' e uma consoante.", c);
            break;
        case 'w':
        case 'W':
            printf("O caractere '%c' e uma consoante.", c);
            break;
        case 'x':
        case 'X':
            printf("O caractere '%c' e uma consoante.", c);
            break;
        case 'y':
        case 'Y':
            printf("O caractere '%c' e uma consoante.", c);
            break;
        case 'z':
        case 'Z':
            printf("O caractere '%c' e uma consoante.", c);
            break;
        case '0':
            printf("O caractere '%c' e um digito.", c);
            break;
        case '1':
            printf("O caractere '%c' e um digito.", c);
            break;
        case '2':
            printf("O caractere '%c' e um digito.", c);
            break;
        case '3':
            printf("O caractere '%c' e um digito.", c);
            break;
        case '4':
            printf("O caractere '%c' e um digito.", c);
            break;
        case '5':
            printf("O caractere '%c' e um digito.", c);
            break;
        case '6':
            printf("O caractere '%c' e um digito.", c);
            break;
        case '7':
            printf("O caractere '%c' e um digito.", c);
            break;
        case '8':
            printf("O caractere '%c' e um digito.", c);
            break;
        case '9':
            printf("O caractere '%c' e um digito.", c);
            break;
        default:
            printf("O caractere '%c' e um simbolo.", c);
    }
    return 0;

}