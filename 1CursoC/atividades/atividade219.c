#include <stdio.h>
#include <string.h>

int main(){

    char nome1[15]; 
    char nome2[15];

    printf("Digite seu nome: ");
    scanf("%s", nome1);

    printf("Nome1 = %s \n", nome1);

    strcpy(nome2, nome1);
    //copiei o endereço de nome 2 para o nome 1;
    //strcpy(string_destino, string_origem);
    
    printf("Nome2: %s \n", nome2);

    return 0;
}