#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, soma;

    printf("Digite um numero:");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        soma = num * i;

        printf("%d X %d = %d\n", num, i, soma);
    }
    

    return 0;
}