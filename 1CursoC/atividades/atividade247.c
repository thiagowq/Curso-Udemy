#include <stdio.h>

int main(){

    char nome[] = "Thiago"; //Cria um vetor de caracteres com: nome[0] = 'T', nome[1] = 'h', nome[2] = 'i', nome[3] = 'a'...

    char *p = nome; // O ponteiro aponta para o primeiro caractere da string

    printf("%c\n", *(p + 2)); // Acessa o terceiro caractere da string, pois o indice começa em zero
    // Aponta para o 'i'

    return 0;
}