#include <stdio.h>

int main() {
    int N, i = 1, soma = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Digite um numero maior que zero.\n");
    } else {
        while (i <= N) {
            soma = soma + i;
            i++;
        }
        printf("A soma dos numeros de 1 ate %d é: %d\n", N, soma);
    }

    return 0;
}
