/*1. Desenvolva um programa que leia uma palavra e imprima a quantidade de 
caracteres que ela possui.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50

int main(){
    char s[N];
    int i;

    printf("digite uma frase;\n"),
    gets(s);
    fflush(stdin);

    i = strlen(s);
    printf("quantidade de caracteres:%d\n",i);
    
    system("PAUSE");
    return 0;
}