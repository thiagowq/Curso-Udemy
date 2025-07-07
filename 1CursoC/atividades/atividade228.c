#include <stdio.h>
#include <string.h>


int tamanhoString(char string[]){

    int numCaracteres = 0;

    while (string[numCaracteres] != '\0'){
        numCaracteres++;
    }

    return numCaracteres;
}

int main(){

    char string[20];

    printf("Digite um palavra:");
    scanf("%s", string);

    int num = tamanhoString(string);
    
    printf("A string %s possui %d caracteres: \n", string, num);

    return 0;
}