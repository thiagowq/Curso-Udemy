#include <stdio.h>
#include <stdlib.h>


int leitura_de_notas(float *n1, float *n2){

    scanf("%f", n1);

    scanf("%f", n2);

    if (*n1 < 0 || *n2 < 0)
    {
        printf("Notas invalidas");
        return 0;
    }
    
    return 1;

}


void calcularMedias(float n1, float n2, float *mediaSimples, float *mediaPonderada){

    *mediaSimples = (n1 + n2) / 2;

    *mediaPonderada = (n1 + 2 * n2) / 3;

}

int main (){

    float n1, n2;
    float mediaSimples, mediaPonderada;

    if (!leitura_de_notas(&n1, &n2)) {
        return 1;
    }

    calcularMedias(n1, n2, &mediaSimples, &mediaPonderada);

    printf("n1: %0.2f\n", n1);
    printf("n2: %0.2f\n", n2);
    printf("Media Simples: %0.2f\n", mediaSimples);
    printf("Media Ponderada: %0.2f", mediaPonderada);

    return 0;
}