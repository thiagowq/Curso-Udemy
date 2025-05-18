#include <stdio.h>
void preencheVetor(float vet[], int tam) {
    for (int i = 0; i < tam; i++) {
        scanf("%f", &vet[i]);
    }
}
void calculaQuadrado(float origem[], float destino[], int tam) {
    for (int i = 0; i < tam; i++) {
        destino[i] = origem[i] * origem[i];
    }
}
void imprimeVetor(float vet[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("%.2f\t", vet[i]);
    }
    printf("\n");
}
int main() {
    int tam = 5;
    float original[tam];
    float quadrado[tam];

    preencheVetor(original, tam);            
    calculaQuadrado(original, quadrado, tam); 
    imprimeVetor(original, tam);              
    imprimeVetor(quadrado, tam);             

    return 0;
}
