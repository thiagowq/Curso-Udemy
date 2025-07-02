#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *file;
    file = fopen("string.txt", "r")

    if (file == NULL){
        printf("Não foi possivel abrir o arquivo");
        exit(0);
    }
    
    char frase[100];

    while (fgets(frase, 100, file) != NULL){
        printf("%s", frase);
    }

    fclose(file);

    pritnf("\n");

    return 0;
}