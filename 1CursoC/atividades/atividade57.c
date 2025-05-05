#include <stdio.h>

int main() {
    int num;
    int intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0;

    while (1) {
        scanf("%d", &num);

        if (num < 0) {
            break;
        }

        if (num >= 0 && num <= 25) {
            intervalo1++;
        } else if (num >= 26 && num <= 50) {
            intervalo2++;
        } else if (num >= 51 && num <= 75) {
            intervalo3++;
        } else if (num >= 76 && num <= 100) {
            intervalo4++;
        }
        // valores fora de [0,100] são ignorados
    }

    printf("%d\n", intervalo1);
    printf("%d\n", intervalo2);
    printf("%d\n", intervalo3);
    printf("%d\n", intervalo4);

    return 0;
}
