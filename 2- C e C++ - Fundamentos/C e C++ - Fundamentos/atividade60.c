#include <stdio.h>
#include <math.h>

int main() {
    double x, soma = 0.0;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    for (int i = 1; i <= 25; i++) {
        soma += pow(x, i) / (26 - i);
    }

    printf("Resultado: %.2lf\n", soma);
    return 0;
}
