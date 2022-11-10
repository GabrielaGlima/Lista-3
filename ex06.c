/*6. Construa um programa em C que leia duas strings fornecidas pelo usuário pela 
da entrada padrão. E verifique se a segunda string lida está contida na primeira
string.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 50

int main(){
    char string1[T],string2[T];
    int cont=0,i=0;

    printf("escreva a primeira frase:\n");
    scanf("%[^\n]s",string1,stdin);
    printf("escreva a segunda frase:\n");
    scanf("%[^\n]s",string2,stdin);

    while (string1[i] != '\0' && string2[i] != '\0'){
        if (string1[i] == string2[i]){
            printf("esta contido\n");
            break;
        }else 
        {
            printf("nao esta contido\n");
            break;
        }
        
    }

   

    system("PAUSE");
    return 0;
}