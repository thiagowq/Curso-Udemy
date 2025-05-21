#include <stdio.h>

void preencheVetor(int vet[], int tam) {
    for (int i = 0; i < tam; i++) {
        scanf("%d", &vet[i]);
    }
}

void encontraIguais(int vet[], int tam) {
    int encontrados[tam];
    int qtd = 0;

    for (int i = 0; i < tam; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (vet[i] == vet[j]) {
                int jaFoi = 0;
                for (int k = 0; k < qtd; k++) {
                    if (encontrados[k] == vet[i]) {
                        jaFoi = 1;
                        break;
                    }
                }
                if (!jaFoi) {
                    printf("%d\n", vet[i]);
                    encontrados[qtd] = vet[i];
                    qtd++;
                }
            }
        }
    }
}

void imprimeVetor(int vet[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main() {
    int tam = 10;
    int vet[10];

    preencheVetor(vet, tam);
    encontraIguais(vet, tam);

    return 0;
}
