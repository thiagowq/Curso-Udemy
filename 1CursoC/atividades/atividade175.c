#include <stdio.h>
#include <string.h>
struct atleta{
    char nomeAtleta[20];
    char esporteAtleta[30];
    int idadeAtleta;
    float alturaAtleta;
};

typedef struct atleta atleta;

int main(){

    atleta atletas[5];
    int indiceMaisAlto = 0;
    int indiceMaisVelho = 0;

    for (int i = 0; i < 5; i++){
        printf("Digite seu nome: ");
        scanf(" %[^\n]", atletas[i].nomeAtleta);

        printf("Digite seu Esporte: ");
        scanf(" %[^\n]", atletas[i].esporteAtleta);
        
        printf("Digite a sua idade: ");
        scanf("%d", &atletas[i].idadeAtleta);
        
        printf("Digite a sua altura: ");
        scanf("%f", &atletas[i].alturaAtleta);

        if (atletas[i].alturaAtleta > atletas[indiceMaisAlto].alturaAtleta){
            indiceMaisAlto = i;
        }
        if (atletas[i].idadeAtleta > atletas[indiceMaisVelho].idadeAtleta){
            indiceMaisVelho = i;
        }
    }
    
    printf("O ATLETA MAIS ALTO SE CHAMA %s:", atletas[indiceMaisAlto].nomeAtleta);
    printf("O ATLETA MAIS VELHO SE CHAMA %s:", atletas[indiceMaisVelho].nomeAtleta);

    return 0;
}