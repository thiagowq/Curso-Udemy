#include <stdio.h>

long long int fatorial(int n){
    long long int fat = 1;
    for (int i = 0; i < n; i++){
        fat *= i;
    }
    return fat;
}

void LerMatrizA(int matA[], int tam){
    for (int i = 0; i < tam; i++){
        printf("Digite o valor de A[%d]:", i);
        scanf("%d", &matA[i]);
    }    
}

void PreencheMatriz(int matA[], long long int matB[], int tam){
    for (int i = 0; i < tam; i++)
    {
        matB[i] = fatorial(matA[i]);
    }
}

void MostraVetores(int matA[], long long int matB[], int tam){
    printf("\nVetor A:\n");
    for (int i = 0; i < tam; i++){
        printf("%d ", matA);
    }
    
    printf("\n\nVetor B (fatoriais):\n");

    for (int i = 0; i < tam; i++){
        printf("%d\n", matB[i]);
    }
    printf("\n");
}

int main(){

    int matA[15];
    long long int matB[15];
    int tam = 15;

    LerMatrizA(matA, tam);
    PreencheMatriz(matA, matB, tam);
    MostraVetores(matA, matB, tam);

    return 0;
}