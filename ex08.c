/*8. Faça um programa que leia duas strings e imprima uma terceira string contendo 
somente as vogais das strings lidas. As vogais devem ficar intercaladas.
Exemplo1: s1 = casa, s2 = osso, o resultado é S3 = oaao. Exemplo2: s1 = amada,
s2 = pessoa, s3 = aeaaoa.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define T 50

int main() {
   char string1[T],string2[T],string_aux[T];
   int i=0,cont=0,tam1=0,tam2=0;

    printf("escreva a primeira palavra:\n");
    gets(string1);
    fflush(stdin);

    printf("escreva a segunda palavra:\n");
    gets(string2);
    fflush(stdin);

    tam1=strlen(string1);
    tam2=strlen(string2);
    
    while (string1[i] != '\0' || string2[i] != '\0'){
        if (i< tam1){
            if (string1[i] == 'a' || string1[i] == 'e' || string1[i] == 'i' || string1[i] == 'o' || string1[i] == 'u'){
                string_aux[cont] = string1[i];
                cont++;
            } 
        }
        if (i< tam2){
            if (string2[i] == 'a' || string2[i] == 'e' || string2[i] == 'i' || string2[i] == 'o' || string2[i] == 'u'){
                string_aux[cont] = string2[i];
                cont++;
            }
        }
        i++;
    }
    string_aux[cont]='\0';
    printf("\n%s\n",string_aux);
    
    system("PAUSE");
    return 0;
}