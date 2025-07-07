#include <stdio.h>
#include <string.h>

int main(){

    char string1[20];
    char string[20];

    printf("Digite uma palavra e verifique se ela é um palindromo: ");
    scanf("%19s", string1);

    strcpy(string, string1);

    strrev(string1);

    if(strcmp(string, string1) == 0){
        printf("%s e palindromo", string);
    }else{
        printf("%s nao e palindromo", string);
    }

    return 0;
}