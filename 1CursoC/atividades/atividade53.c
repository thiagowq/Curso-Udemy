#include <stdio.h>

float calcularMedia(float n1, float n2, float n3, char tipo) {
    if (tipo == 'A') {
        return (n1 + n2 + n3) / 3.0;
    } else if (tipo == 'P') {
        return (n1 * 5 + n2 * 3 + n3 * 2) / 10.0;
    } else {
        return -1;
    }
}

int main() {
    float nota1, nota2, nota3;
    char tipo;

    scanf("%f %f %f %c", &nota1, &nota2, &nota3, &tipo);

    float media = calcularMedia(nota1, nota2, nota3, tipo);

    printf("%.2f\n", media);

    return 0;
}
