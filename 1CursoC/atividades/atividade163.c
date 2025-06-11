#include <stdio.h>
#include <math.h>

struct ponto{
    float X;
    float Y;
};

int main(){

   struct ponto p;

    printf("Digite a coordenada X do ponto: ");
    scanf("%f", &p.X);

    printf("Digite a coordenada Y do ponto: ");
    scanf("%f", &p.Y);

    float distancia = sqrt(p.X * p.X + p.Y * p.Y);

    printf("A distancia do ponto (%.2f, %.2f) ate a origem (0,0) e: %.2f\n", p.X, p.Y, distancia);


    return 0;
}