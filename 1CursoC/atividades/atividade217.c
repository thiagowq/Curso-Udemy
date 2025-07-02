#include <stdio.h>
#include <string.h>

int main(){

    char nome[20];

    printf("Digite o seu nome: ");

    fgets(nome, 11, stdin);

    printf("O nome armazenado foi: %s", nome);

    return 0;
}