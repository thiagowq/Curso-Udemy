#include <stdio.h>
#include <stdlib.h>

void main(){

//Variaveis
char palavra[255];

//intru��o
printf("digite uma palavra");

//limpar o buffer
setbuf(stdin, 0);

//ler a string
fgets(palavra, 255, stdin);

//limpa as casas n�o utilizadas
palavra[strlen(palavra)-1] = '\0';

//imprime na tela
printf("%s", palavra);

system("pause");
}
