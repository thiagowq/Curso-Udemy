#include <stdio.h>
#include <math.h>

int main() {
    double numero, resultado;

    scanf("%lf", &numero);

    if (numero >= 0) {
        resultado = sqrt(numero);
    } else {
        resultado = numero * numero;
    }

    printf("%.2lf\n", resultado);

    return 0;
}
