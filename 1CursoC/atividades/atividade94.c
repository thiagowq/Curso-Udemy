#include <stdio.h>

int main() {
    int N, soma = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= 10; i++)
    {
        soma = i * N;

        printf("%d X %d = %d\n", N, i, soma);
    }
    
    return 0;
}
