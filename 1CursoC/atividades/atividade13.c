#include <stdio.h>

int main() {
    int idade;

    scanf("%d", &idade);

    if (idade >= 5) {
        if (idade <= 7) {
            printf("Infantil A\n");
        } else {
            if (idade <= 10) {
                printf("Infantil B\n");
            } else {
                if (idade <= 13) {
                    printf("Juvenil A\n");
                } else {
                    if (idade <= 17) {
                        printf("Juvenil B\n");
                    } else {
                        printf("Sênior\n");
                    }
                }
            }
        }
    } else {
        printf("Sem categoria\n");
    }

    return 0;
}
