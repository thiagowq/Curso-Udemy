#include <stdio.h>

void preencheVetor(int vet[], int tam) {
    for (int i = 0; i < tam; i++) {
        scanf("%d", &vet[i]);
    }
}

int retornaPares(int vet[], int tam) {
    int contador = 0;
    for (int i = 0; i < tam; i++) {
        if (vet[i] % 2 == 0) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int tam = 10;
    int vet[tam];
    int pares;

    preencheVetor(vet, tam);
    pares = retornaPares(vet, tam);

    printf("Total de pares: %d\n", pares);

    return 0;
}
