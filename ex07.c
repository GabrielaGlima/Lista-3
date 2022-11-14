/*7. Faça um programa para concatenar a string S1 com a string S2, intercalando, 
posteriormente imprima o resultado da concatenação. Por exemplo, “algoritmo” 
e “casa”, o resultado é “aclagsoaritmo”.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define T 50

int main(){
    int i=0,tam1=0,tam2=0,cont=0;
    char f1[T],f2[T],f_aux[T];

    printf("escreva a primeira palavra:\n");
    gets(f1);
    fflush(stdin);

    printf("escreva a segunda palavra:\n");
    gets(f2);
    fflush(stdin);

    tam1 = strlen(f1); 
    tam2 = strlen(f2);
    f_aux[tam1 + tam2];
    
    while (f1[i] != '\0' || f2[i] != '\0'){
        
        if (i< tam1){
            f_aux[cont] = f1[i];
            cont++;
        }
        if (i < tam2){
            f_aux[cont] = f2[i];
            cont++;
        }
        i++;
    }
    f_aux[cont]='\0';

    printf("\n%s\n",f_aux);

    system("PAUSE");
    return 0;
}