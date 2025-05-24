#include <stdio.h>
#include <math.h>

void lerMatrizA(int matA[], int tam){

    for (int i = 0; i < tam; i++){
        scanf("%d", &matA[i]);
    }
}

void lerMatrizB(int matA[], long long int matB[], int tam){

    for (int i = 0; i < tam; i++){
        matB[i] = (long long int)matA[i] * matA[i];  
    }

   for (int i = 0; i < tam; i++){
        printf("%lld\n", matB[i]);
    }
}

int main(){
    
    int matA[15];
    int matB[15];
    int tam = 15;

    lerMatrizA(matA, tam);
    lerMatrizB(matA, matB, tam);

    return 0;
}