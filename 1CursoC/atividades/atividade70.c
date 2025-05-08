#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, i = 0, soma;
    
    printf("Digite um numero inteiro positivo:");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++ )
    {
        soma = n * i;
        printf("A tabuada no %d e : %d x %d = %d \n", n, n, i, soma);
    }

    return 0;
}