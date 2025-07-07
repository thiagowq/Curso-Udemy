#include <stdio.h>
#include <string.h>

int main(){

    char string[10];

    printf("Digite um palavra: ");
    fgets(string, sizeof(string), stdin);
    fflush(stdin);

    printf("As 4 primeiras letras sao: \n");

    for (int i = 0; i < 4; i++){
        printf("%c\t", string[i]); 
    }
    return 0;
}