#include <stdio.h>

int main() {
    int a, b, i;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    if (a < b) {
        for (i = a + 1; i < b; i++) {
            printf("%d ", i);
        }
    } else if (a > b) {
        for (i = b + 1; i < a; i++) {
            printf("%d ", i);
        }
    } else {
        printf("Nao existem numeros entre %d e %d, pois sao iguais.\n", a, b);
    }

    return 0;
}
