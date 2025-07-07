#include <stdio.h>

int main(){

    int n;
    int soma = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        soma *= i;
    }

    printf("%d\n", soma);

    return 0;
}