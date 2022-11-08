/*3. Crie um programa que transforma todos os caracteres maiúsculos de uma cadeia 
de caracteres em minúsculas e vice versa.*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
void shift (char *my_string);

int main() {
    char string[50];

    printf("insira a string:\n");
    shift(string);
}
    void shift (char *my_string){
        int i;
        char ch;

        if ( fgets(my_string, 50, stdin) == NULL)
            return;
    
        ch = my_string[0];
        for ( i = 0; my_string[i]; i++){
          if (ch>='a' && ch<='z'){
            putchar(toupper(my_string[i]));
          }
          else if (ch>='A' && ch <='Z'){
            putchar(tolower(my_string[i]));
          }
        }
        system("PAUSE");
        return;
    }