/*2. Crie um programa que recebe uma string e um caractere, e imprima o número 
de vezes que esse caractere aparece na string.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

int main() {
    char str[TAM], ch;
    int count = 0,i=0;

    printf("Escreva a frase: ");
    gets(str);
    
    printf("Informe o caractere que deseja buscar: ");
    scanf("%c", &ch);

    while (str[i] != '\0'){
        if (str[i] == ch){
            count++;
        }
           i++;
    }
    

    printf("Quantidade de %c aparece %d vez(es) na frase\n", ch, count);

    system("PAUSE");
    return 0;
}