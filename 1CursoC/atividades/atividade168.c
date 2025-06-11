#include <stdio.h>
#include <math.h>

struct ponto{
    float x;
    float y;
};

typedef struct ponto ponto;

struct retangulo{
    ponto sup_Esquerdo;
    ponto inf_Direito;
};

typedef struct retangulo retangulo;

float calcularArea(retangulo r){
    float largura = r.inf_Direito.x - r.sup_Esquerdo.x;
    float altura = r.sup_Esquerdo.y - r.inf_Direito.y;
    return largura * altura;
}

float calcularPerimetro(retangulo r){
    float largura = r.inf_Direito.x - r.sup_Esquerdo.x;
    float altura = r.sup_Esquerdo.y - r.inf_Direito.y;
    return 2 * (largura + altura);
}

float calcularDiagonal(retangulo r){
    float largura = r.inf_Direito.x - r.sup_Esquerdo.x;
    float altura = r.sup_Esquerdo.y - r.inf_Direito.y;
    return sqrt(largura * largura + altura * altura);
}

int main(){

    retangulo ret;

    printf("Digite as cordenadas do ponto superior esquerdo (x,y):\n");
    scanf("%f %f", &ret.sup_Esquerdo.x, &ret.sup_Esquerdo.y);

    printf("Digite as cordenadas do ponto superior direito (x,y): \n");
    scanf("%f %f", &ret.inf_Direito.x, &ret.inf_Direito.y);

    printf("Área: %0.2f\n", calcularArea(ret));
    printf("Perímetro: %0.2f\n", calcularPerimetro(ret));
    printf("Diagnoal: %0.2f\n", calcularDiagonal(ret));

    return 0;
}