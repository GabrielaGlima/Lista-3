/*5. Faça um programa que receba uma palavra e a imprima de trás para frente.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 50
int main(){
    int i,tam;
    char palavra[T];

    printf("Escreva uma palavra:\n");
    gets(palavra);

    tam = strlen(palavra);

       for ( i = tam; i >=0; i--)
       {
        printf("%c",palavra[i]);

       }
      

    return 0;
    
}