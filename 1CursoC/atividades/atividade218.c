#include <stdio.h>
#include <string.h>

int main(){

    char nome1[15] = "Pedro"; 
    char nome2[15] = "Henrique";

    printf("Nome: %s \n", nome1);

    strcpy(nome1, nome2);
    //copiei o endereço de nome 2 para o nome 1;
    //strcpy(string_destino, string_origem);
    
    printf("Nome: %s \n", nome1);

    return 0;
}