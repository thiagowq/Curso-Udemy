#include <stdio.h>
#include <string.h>

int main() {
    char frase[101];
    int i = 0, tamanho = 0, contador = 0;

    printf("Digite uma frase de até 100 caracteres:\n");
    scanf(" %[^\n]", frase);

    while (frase[i] != '\0') {
        if (frase[i] != ' ') {
            tamanho++;
        } else {
            if (tamanho > 3) {
                contador++;
            }
            tamanho = 0; // Reinicia o tamanho da próxima palavra
        }
        i++;
    }

    // Verifica a última palavra (caso não termine com espaço)
    if (tamanho > 3) {
        contador++;
    }

    printf("%d\n", contador);

    return 0;
}
