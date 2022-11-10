/*4. Faça um programa que modifique as vogais de uma frase. O programa deve ler 
uma frase (max. 100 caracteres). Imprimir a frase lida trocando as vogais, isto é, 
trocar 'a' pelo 'u', 'e' pelo 'o', 'i' pelo 'u', 'o' pelo 'a' e o 'u' pelo 'e'.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

int main() {
    char string[TAM];
    int i=0;

    printf("insira a string:\n");
    gets(string);

    while (string[i] != '\0'){
        if (string[i]=='a'){
            string[i]='u';
        }else if (string[i]=='e'){
            string[i]='o';
        }else if (string[i]=='i'){
            string[i]='u';
        }else if (string[i]=='o'){
            string[i]='a';
        }else if (string[i]=='u'){
            string[i]='e';
        }
        i++;
    }
    
    printf("nova frase:%s\n",string);

    system("PAUSE");
    return 0;

}
   
    
    


    
    
    
    
  

