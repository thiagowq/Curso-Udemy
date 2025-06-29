#include <stdio.h>
#include <string.h>


int main(){

    char str[20];

    printf("Digite a string:");
    scanf(" %[^\n]", str);

    printf("%s", str);
    
    return 0;
}