#include <stdio.h>
#include <stdio.h>

int main(){

    int n, i = 1, soma;

    printf("Digite um numero: ");
    scanf("%d", &n);

    while (n >= i)
    {
        soma = soma + i;
        i++;
    }

    printf("%d", soma);
    

    return 0;
}