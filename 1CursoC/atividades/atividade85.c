#include <stdio.h>
#include <stdlib.h>

int main (){

    int numero, armazenar = 1, i = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (i < numero)
    {
        i++;

        armazenar *= i;
    }
    
    printf("%d", armazenar);


    return 0;
}