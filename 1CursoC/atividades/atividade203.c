#include <stdio.h>
#include <string.h>

int main(){

    char str[20];

    printf("Digite uma palavra:");
    scanf(" %[^\n]", str);

    for (int i = 0; i < 4; i++){
        printf("%c", str[i]);
    }
    
    printf("\n");

    return 0;
}