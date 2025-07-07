#include <stdio.h>

int main(){

    char string[20];

    printf("Digite um palavra: ");
    fgets(string, sizeof(string), stdin);

    printf("%s", string);
    return 0;
}