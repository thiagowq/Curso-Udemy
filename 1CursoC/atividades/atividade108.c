#include <stdio.h>
#include <math.h>

void leVetor(float vetor[], int tam){

    for (int i = 0; i < tam; i++)
    {
        scanf("%f", &vetor[i]);
    }
    
}

void calculaVetor(float origem[], int destino[], int tam){
    for (int i = 0; i < tam; i++)
    {
        destino[i] = origem[i] * origem[i];
    }
    
}

void imprimeVetor(float vetor[], int tam){

    for (int i = 0; i < tam; i++){
        printf("%0.2f\n", vetor[i]);
    }
    printf("\n");
}


int main() {

    int tam = 5;
    float origem[tam];
    float vetor[tam];

    leVetor(origem, tam);
    calculaVetor(origem, vetor, tam);
    imprimeVetor(vetor, tam);
    imprimeVetor(vetor, tam);

    return 0;
}
