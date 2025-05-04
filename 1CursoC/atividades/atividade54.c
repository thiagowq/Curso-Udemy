#include <stdio.h>

float potencia(float base, int expoente) {
    float resultado = 1.0;

    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    return resultado;
}

int main() {
    float x;
    int y;

    scanf("%f %d", &x, &y);

    float resultado = potencia(x, y);

    printf("%.2f\n", resultado);

    return 0;
}
