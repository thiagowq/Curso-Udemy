#include <stdio.h>

int main() {
    int numero, i;
    unsigned long long fatorial = 1;

    scanf("%d", &numero);

    if (numero < 0) {
        // Nenhuma saída se o número for negativo
    } else {
        for (i = 1; i <= numero; i++) {
            fatorial *= i;
        }
        printf("%llu\n", fatorial);
    }

    return 0;
}
