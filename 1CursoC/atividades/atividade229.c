#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int contador[256] = {0};  // Vetor para contar frequência de cada caractere

    printf("Digite uma palavra: ");
    scanf("%s", string);

    // Conta os caracteres
    for (int i = 0; string[i] != '\0'; i++) {
        contador[(unsigned char)string[i]]++;
    }

    // Mostra o resultado
    for (int i = 0; i < 256; i++) {
        if (contador[i] > 0) {
            printf("Letra '%c' aparece %d vez%s\n", i, contador[i], contador[i] > 1 ? "es" : "");
        }
    }

    return 0;
}
