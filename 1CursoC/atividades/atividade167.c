#include <stdio.h>
#include <string.h>
#include <math.h>

struct plano{
    float x;
    float y;
};

typedef struct plano ponto;

float calcularDistancia(ponto p1, ponto p2){
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main(){

    ponto ponto1, ponto2;

    float distancia;

    printf("Digite as cordenadas do primeiro ponto (x, y):\n");
    scanf("%f %f", &ponto1.x, &ponto1.y);

    printf("Digite as cordenadas do segundo ponto (x, y):\n");
    scanf("%f %f", &ponto2.x, &ponto2.y);

    distancia = calcularDistancia(ponto1, ponto2);

    printf("A distancia entre os dois pontos é: %0.2f\n", distancia);

    return 0;
}