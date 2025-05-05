#include <stdio.h>

int main() {
    int n, i;
    double termo, soma = 0.0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        termo = 1.0 / i;
        printf("%.2lf\n", termo);
        soma += termo;
    }

    printf("%.2lf\n", soma);

    return 0;
}
