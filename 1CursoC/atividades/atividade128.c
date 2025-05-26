#include <stdio.h>

void LerVetor(int vet[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vet[i]);
    }
}
void UnirVetores(int vetA[], int vetB[], int vetC[]){
    for (int i = 0; i < 10; i++){
        vetC[i] = vetA[i]; 
    }

    for (int i = 0; i < 10; i++){
        vetC[i + 10] = vetB[i];
    }

    printf("Vetor uniao:");
    for (int i = 0; i < 20; i++){
        printf("%d", vetC[i]);
    }
    printf("\n");
}

int main(){

    int vetA[10], vetB[10], vetC[20];

    printf("Digite os 10 valores do vetor A: \n");
    LerVetor(vetA, 10);

    printf("Digite os 10 valores do vetor B: \n");
    LerVetor(vetB, 10);

    UnirVetores(vetA, vetB, vetC);

    return 0;
}