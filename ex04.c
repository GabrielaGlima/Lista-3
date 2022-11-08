#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

void troca(char *string){
    int i, tam;
    tam = strlen(string);
        for ( i = 0; i < tam; i++){
            switch (*string){
            case 'a':
                *string = 'u';
                break;
            case 'e':
                *string = 'o';
                break;
            case 'i':
                *string = 'u';
                break;
            case 'o':
                *string = 'a';
                break;
            case 'u':
                *string = 'e';
                break;
            default:
                break;
            }
            string++;
        }
    }        
    void imprimir(char *string){
    int i;
    char *ptr;
    ptr = string;
    printf("\n\n");
    for (i=0; i < strlen(string); i++){
    printf("%c", *ptr);
    ptr++;
    }

}
int main() {
    char string[TAM];

    printf("insira a string:\n");
    gets(string);
    fflush(stdin);
    troca(string);
    imprimir(string);
    
}

    
    
    
    
  

