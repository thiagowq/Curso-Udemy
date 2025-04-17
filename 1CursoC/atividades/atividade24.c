#include <stdio.h>

int main() {

    //Numero Primo

    int num, i, ehPrimo = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num <= 1) {
        ehPrimo = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                ehPrimo = 0;
                break;
            }
        }
    }

    if (ehPrimo) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }

    return 0;
}
