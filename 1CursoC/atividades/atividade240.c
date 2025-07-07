#include <stdio.h>
#include <string.h>

int main(){

    char string[20];

    printf("Digite uma palavra: ");
    scanf("%s", string);

    strrev(string);

    printf("%s", string);
    
    return 0;
}