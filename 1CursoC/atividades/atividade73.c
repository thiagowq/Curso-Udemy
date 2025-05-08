#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, i = 1;
    unsigned long long fatoracao = 1;

    printf("Digite um numero:");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Fatorial não e definido para numeros negativos \n");
    }else{
        for (i = 1; i <= n; i++)
        {
            fatoracao *= i;
        }
    }

        printf(" O fatorial de %d e: %llu \n", n, fatoracao);


    return 0;
}