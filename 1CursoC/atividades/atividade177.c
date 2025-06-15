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
    int tamanho = 5;

    for (int i = 0; i < 5; i++){
        printf("Digite seu nome: ");
        scanf(" %[^\n]", atletas[i].nomeAtleta);

        printf("Digite seu Esporte: ");
        scanf(" %[^\n]", atletas[i].esporteAtleta);
        
        printf("Digite a sua idade: ");
        scanf("%d", &atletas[i].idadeAtleta);
        
        printf("Digite a sua altura: ");
        scanf("%f", &atletas[i].alturaAtleta);
    }

    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho - 1 - i; j++){
            if (atletas[j].idadeAtleta < atletas[j + 1].idadeAtleta){
            atleta temp = atletas[j];
            atletas[j] = atletas[j + 1];
            atletas[j + 1] = temp;
        }
    }
}
    
    printf("\nAtletas do mais velho para o mais novo:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Nome: %s\n", atletas[i].nomeAtleta);
        printf("Esporte: %s\n", atletas[i].esporteAtleta);
        printf("Idade: %d\n", atletas[i].idadeAtleta);
        printf("Altura: %.2f\n\n", atletas[i].alturaAtleta);
    }

    return 0;
}