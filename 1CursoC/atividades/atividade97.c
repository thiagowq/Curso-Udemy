#include <stdio.h>
#include <stdlib.h>

//função ler notas
void lerNotas(float *n1, float *n2){

    //perguntando ao usuário
    printf("Digite a primeira nota (entre 0 e 10): ");
    //armazenando o valor digitado pelo usuário
    scanf("%f", &*n1);

    printf("Digite a segunda nota (entre 0 e 10): ");
    scanf("%f", &*n2);

}

//função calcular medias
void calcularMedias(float n1, float n2, float *mediaSimples, float *mediaPonderada){

    //calculando as medias
    *mediaSimples = (n1 * n2) / 2;
    *mediaPonderada = (n1 + 2 * n2) / 3;

}

//main (função principal)
int main(){

    //Declarando variáveis
    float n1, n2;
    float mediaSimples, mediaPonderada; 

    //chamando a função ler notas
    lerNotas(&n1, &n2);

     if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10)
    {
        printf("Notas inválidas\n");
        return 0; //encerra o programa se a condição for válida
    }else {
        //chamando a função calcular medias
        calcularMedias(n1, n2, &mediaSimples, &mediaPonderada);
    }


    //exibindo na tela os valores digitados pelo usuário
    printf("N1: %0.2f\nN2: %0.2f\n", n1, n2);

    //exibindo na tela o resultado da media simples e da media ponderada
    printf("Media Simples: %0.2f\nMedia Ponderada: %0.2f\n", mediaSimples, mediaPonderada);


    return 0;
}