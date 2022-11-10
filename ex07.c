/*7. Faça um programa para concatenar a string S1 com a string S2, intercalando, 
posteriormente imprima o resultado da concatenação. Por exemplo, “algoritmo” 
e “casa”, o resultado é “aclagsoaritmo”.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define T 50

int main(){
    int i,tam;
    char p1[T],p2[T],p_aux[T];

    printf("escreva a primeira palavra:\n");
    gets(p1);
    fflush(stdin);

    printf("escreva a segunda palavra:\n");
    gets(p2);
    fflush(stdin);

    tam = strlen(p1) + strlen(p2);
    
    for ( i = 0; i < tam; i++){
        p_aux[i*2]=p1[i];
    }
    for ( i = 0; i < tam; i++){
        p_aux[i*2+1]=p2[i];
    }
    for (i = 0; i < tam; i++) {
        printf("%c", p_aux[i]);
    }
    
    
    return 0;
}