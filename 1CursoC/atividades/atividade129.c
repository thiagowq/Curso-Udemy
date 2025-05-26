#include <stdio.h>

void LerVetor(int vet[]) {
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vet[i]);
    }
}

void retorna(int vet[]) {
    int aux;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (vet[j] > vet[j + 1]) {
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
    }

    printf("Vetor ordenado: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main() {
    int vet[5];

    printf("Digite 5 numeros inteiros:\n");
    LerVetor(vet);
    retorna(vet);

    return 0;
}
