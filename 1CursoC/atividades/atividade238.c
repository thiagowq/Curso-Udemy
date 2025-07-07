#include <stdio.h>
#include <string.h>

int main(){

    char string[20];
    int count = 0;

    printf("Digite uma palavra: ");
    scanf("%s", string);

    for (int i = 0; string[i] != '\0' ; i++){
        count++;
    }
    
    printf("A string tem %d caracteres", count);

    return 0;
}