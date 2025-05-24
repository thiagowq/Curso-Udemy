#include <stdio.h>

void lerMatrizA(int matA[]){
    for (int i = 0; i < 10; i++){
        scanf("%d", &matA[i]);
    }
}

void lerMatrizB(int matB[]){
    for (int i = 0; i < 10; i++){
        scanf("%d", &matB[i]);
    }
}

void imprimeRes(int matA[], int matB[], float matC[], int tam){
    for (int i = 0; i < tam; i++){
        matC[i] = matA[i] - matB[i];
    }
    
    for (int i = 0; i < tam; i++){
        printf("%0.2f\n", matC[i]);
    } 
}

int main(){

    int matA[10];
    int matB[10];
    float matC[20];
    int tam = 20;

    printf("Preenchendo a matriz A:\n");
    lerMatrizA(matA);
    printf("\nPreenchendo a matriz B:\n");
    lerMatrizB(matB);
    imprimeRes(matA, matB, matC, tam);
    
    return 0;
}