#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main(){
    setlocale(LC_ALL,"Portuguese");

    char origem[N] = {"Olá, Mundo!"};
    char destino[N];

    printf("Antes do strcpy:\n");
    puts(origem);
    puts(destino);

    //Alterar conteudo da string
    strcpy(destino, origem);

    printf("Depois do strcpy:\n");
    puts(origem);
    puts(destino);

    return 0;
}