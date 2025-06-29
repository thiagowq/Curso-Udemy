#include <stdio.h>
#include <string.h>

int main(){

    int cont = 0;
    char str[20];

    printf("Digite uma palavra:");
    scanf(" %[^\n]", str);

    for (int i = 0; i < 20; i++){
        if (str[i] == '\0'){
            break;
        }else{
            cont++;
        }
    }
    
    printf("A palavra %s, tem %d caracteres\n", str, cont);

    return 0;
}