#include <stdio.h>
#include <string.h>

int main() {
    char string1[100] ,string2[100];
    int i;

    for(i=0 ; i<100 ; i++){
        string1[i]=0;
        string2[i]=0;
    }
    scanf("%s" ,string1);
    scanf("%s" ,string2);

    for(i=0 ; i<100 ; i++){
        if(string1[i]>=34 && string1[i]<127){
            printf("%c" ,string1[i]);
        }
        if(string2[i]>=34 && string2[i]<127){
            printf("%c" ,string2[i]);
        }

    }


  return 0;
}