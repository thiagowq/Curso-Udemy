#include <stdio.h>

void LerMatrizA(int matA[], int tam){
    for (int i = 0; i < tam; i++){
        scanf("%d", &matA[i]);
    }
}

void LerMatrizB(int matB[], int tam){
    for (int i = 0; i < tam; i++){
        scanf("%d", &matB[i]);
    }
}

void LerMatrizC(int matA[], int matB[], int matC[], int tam){
    for (int i = 0; i < tam; i++){
        matC[i] = matA[i];
    }

    for (int i = 0; i < tam; i++){
        matC[i + tam] = matB[i];
    }

    printf("Resultado final em matC:\n");
    for (int i = 0; i < 2 * tam; i++){
        printf("%d ", matC[i]);
    }
    printf("\n");
}

int main(){
    int matA[15], matB[15], matC[30], tam = 15;

    printf("Digite para ler A: \n");
    LerMatrizA(matA, tam);

    printf("Digite para ler B: \n");
    LerMatrizB(matB, tam);

    printf("Resultado em C: \n");
    LerMatrizC(matA, matB, matC, tam);

    return 0;
}

