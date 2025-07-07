#include <stdio.h>
#include <string.h>

int main(){

    char string1[20];
    char string2[20];

    printf("Digite a palavra e verifique se ela é um palindromo: ");
    scanf("%s", string1);

    strcpy(string2, string1);

    strrev(string1);

    if (strcmp(string2, string1) == 0){
        printf("%s e um palindromo\n", string2);
    }else{
        printf("nao e palindromo\n");
    }
    
    return 0;
}