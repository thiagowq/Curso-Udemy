#include <stdio.h>

void matrizA(int matA[], int tam){
    for (int i = 0; i < tam ; i++){
        scanf("%d", &matA[i]);
    }
}

void matrizB(int matA[], int matB[], int tam){
    for (int i = 0; i < tam; i++){
        matB[i] = matA[i] * 3;       
    } 

    for (int i = 0; i < tam; i++)
    {
        printf("%d\n", matB[i]);
    }
}

int main(){

    int matA[8];
    int matB[8];
    int tam = 8;

    matrizA(matA, tam);
    matrizB(matA, matB, tam);

    return 0;
}