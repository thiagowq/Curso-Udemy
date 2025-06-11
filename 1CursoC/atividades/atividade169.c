#include <stdio.h>

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

int pontoDentroRetangulo(retangulo r, ponto p){
    return (p.x >= r.sup_Esquerdo.x && p.x <= r.inf_Direito.x && p.y <= r.sup_Esquerdo.y && p.y >= r.inf_Direito.y);
}

int main(){
    retangulo ret;
    ponto p;

    printf("Digite as coordenadas do ponto superior esquerdo (x,y):\n");
    scanf("%f %f", &ret.sup_Esquerdo.x, &ret.sup_Esquerdo.y);

    printf("Digite as coordenadas do ponto superior direito (x,y): \n");
    scanf("%f %f", &ret.inf_Direito.x, &ret.inf_Direito.y);

    printf("Digite as coordenadas do ponto a ser verificado (x,y):\n");
    scanf("%f %f", &p.x, &p.y);

    if (pontoDentroRetangulo(ret, p)){
        printf("O ponto está DENTRO do retangulo.\n");
    }else{
        printf("O ponto está FORA do retangulo.\n");
    }

    return 0;
}