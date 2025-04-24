#include <stdio.h>
#include <math.h> // para usar a função pow

int main() {
    float x, S = 0.0;
    int i, expoente = 25;
    int sinal = 1; // começa positivo

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    for (i = 1; i <= 25; i++) {
        float termo = sinal * pow(x, expoente) / i;
        printf("Termo %d: (%c x^%d / %d) = %.4f\n", i, (sinal == 1 ? '+' : '-'), expoente, i, termo);
        S += termo;

        expoente--;       // diminui o expoente
        sinal *= -1;      // alterna o sinal
    }

    printf("\nValor final de S = %.4f\n", S);
    return 0;
}
