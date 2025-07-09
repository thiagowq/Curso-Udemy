#include <stdio.h>

int main(){

    char nome[] = "Thiago";
    char *p = nome;

    printf("%c\n", *(p + 2));
    
    return 0;
}