#include <stdio.h>

/*4. Peça ao usuário um número N e use um for para somar todos os inteiros de 1 até N. */

int main() {
    int N, i = 1, soma = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        soma += i;
    }

    printf("A soma de 1 ate %d é: %d\n", N, soma);


    while (i <= N)
    {
        soma += i;
        i++;
    }
    
    printf("A soma de 1 ate %d e: %d\n", N, soma);


    return 0;
}
