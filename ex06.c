/*6. Construa um programa em C que leia duas strings fornecidas pelo usuário pela 
da entrada padrão. E verifique se a segunda string lida está contida na primeira
string.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 50

int main(){
    char string1[T],string2[T];
    int i=0,cont=0,j=0;

    printf("escreva a primeira palavra:\n");
    gets(string1);
    fflush(stdin);

    printf("escreva a segunda palavra:\n");
    gets(string2);
    fflush(stdin);

    for ( i = 0; i < strlen(string1); i++){
        if (string2[0] == string1[i]){
            for ( j = 0; j < strlen(string2); j++){
                if (string2[j] == string1[i+j]){
                    cont++;
                }else{
                    cont=0;
                }
            }
        }if (cont == strlen(string2)){
           break;
        }
    }
    if (cont == strlen(string2)){
        printf("esta contido\n");
    }else{
        printf("nao esta contido\n");
    }

    system("PAUSE");
    return 0;
}