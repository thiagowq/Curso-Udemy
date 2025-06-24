#include <stdio.h>

typedef enum {
    SEGUNDA = 1,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO,
    DOMINGO
} DiasSemana;

int main() {
    char *dias[] = {
        "Segunda-Feira", "Terca-Feira", "Quarta-Feira",
        "Quinta-Feira", "Sexta-Feira", "Sabado", "Domingo"
    };

    int num;
    printf("Digite um numero inteiro entre 1 e 7:\n");
    scanf("%d", &num);

    if (num >= 1 && num <= 7) {
        printf("O dia da semana e: %s\n", dias[num - 1]);
    } else {
        printf("Numero invalido!\n");
    }

    return 0;
}