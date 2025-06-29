#include <stdio.h>

int main(){

    char str1[20];

    printf("Digite uma string:");
    fgets(str1, sizeof(str1), stdin);

    str1[strcspn(str1, "\n")] = '\0';

    printf("As 4 primeiras letras são:");

    for (int i = 0; i < 4; i++){
        printf("%c", str1[i]);
    }
    
    printf("\n");

    return 0;
}