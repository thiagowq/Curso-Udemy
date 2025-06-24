#include <stdio.h>

void armazena(float notas[4][4]){
    for (int i = 0; i < 4; i++){
        printf("\n---------------------\n");
        for (int j = 0; j < 4; j++){
            printf("\nDigite a nota %d do usuário %d:  ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);
        }
    }
}

void calculaMedia(float notas[4][4]){
    float medias[4] = {0};

    for (int i = 0; i < 4; i++){
        float soma = 0;
        for (int j = 0; j < 4; j++){
            soma += notas[i][j];
        }
        medias[i] = soma / 4.0;
    }
    for (int i = 0; i < 4; i++){
       printf("A media do aluno %d foi %0.2f\n", i + 1, medias[i] );
    }
}

int main(){

    float notas[4][4];

    armazena(notas);
    calculaMedia(notas);

    return 0;
}