/*3. Crie um programa que transforma todos os caracteres maiúsculos de uma cadeia 
de caracteres em minúsculas e vice versa.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 100

int main() {
    int i=0;
    char string[T];

    printf("insira a string:\n");
    gets(string);

    while (string[i] != '\0'){
      if (string[i] >= 65 && string[i]<= 90){
        string[i] += 32;
      }else if (string[i] >=92 && string[i]<=122){
        string[i]-=32;
      }
      i++;
    }
    
    printf("nova frase: %s\n", string);

        system("PAUSE");
        return;
    
}