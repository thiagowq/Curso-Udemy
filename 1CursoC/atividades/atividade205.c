#include <stdio.h>
#include <string.h>

int main(){

    char str[20];

    printf("Digite uma palavra:");
    scanf(" %[^\n]", str);

    strrev(str);

    printf("A palavra digitada de tras para frente eh: ");
    printf("%s", str);
    
    return 0;
}