#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int contarOcorrencias( const char *str, char c );

int main( void ) {
    char caracter;
    char frase[40];
    printf("Caractere: ");
    scanf("%c",&caracter);
    getchar();
    while(strcmp(frase,"fim") !=0){
        printf("Frase: ");
        fgets(frase, 40, stdin);
        frase[strcspn(frase,"\n")] ='\0';
        if(strcmp(frase,"fim")!= 0){
            printf("\"%s\" tem %d ocorrencia(s) do caractere '%c'\n",frase,contarOcorrencias(frase,caracter),caracter);
        }
    }
    return 0;
}
int contarOcorrencias( const char *str, char c ){
    int contador = 0;
    for (int i = 0; i < strlen(str); i++){
        if(str[i] == c){
            contador++;
        }
    }
    return contador;
}