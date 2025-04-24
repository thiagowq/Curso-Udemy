#include <stdio.h>

int main() {

   /* Questão 3: Fazer um algoritmo que leia um número inteiro positivo, calcule e escreva o fatorial deste. Exemplo: o fatorial de 5 é 5! = 5 * 4 * 3 * 2 * 1, o fatorial de zero é um por definição, 0! = 1. */ 


    int num;
    unsigned long long fatorial = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Fatorial não é definido para números negativos.\n");
    } else {
        printf("O fatorial de %d é: ", num);
        if (num == 0) {
            printf("1 = 1\n"); // Caso especial para zero
        } else {
            for (int i = num; i > 0; i--) {
                fatorial *= i;
                printf("%d", i);
                if (i > 1) {
                    printf(" * ");
                } else {
                    printf(" = %llu \n", fatorial);
                }
            }
        }
    }

    return 0;
}
