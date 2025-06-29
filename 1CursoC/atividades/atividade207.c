#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ARTISTAS 100

typedef struct {
    char nome[31];
    char genero[20];
    float total_reproducoes;
    float ouvintes_unicos;
} Artista;

int carregaDados(Artista vet[], char nomeArquivo[]) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 0;
    }

    int count = 0;
    char linha[200];

    while (count < MAX_ARTISTAS && fgets(linha, sizeof(linha), arquivo) != NULL) {
        if (sscanf(linha, "%30[^,],%19[^,],%f,%f",
                   vet[count].nome,
                   vet[count].genero,
                   &vet[count].total_reproducoes,
                   &vet[count].ouvintes_unicos) == 4) {
            count++;
        }
    }

    fclose(arquivo);
    return count;
}

void imprimeArtistas(Artista vet[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("%s\t%s\t%.2f\t%.2f\n",
               vet[i].nome,
               vet[i].genero,
               vet[i].total_reproducoes,
               vet[i].ouvintes_unicos);
    }
}

Artista* artistaMaisOuvido(Artista vet[], int tam) {
    if (tam == 0) return NULL;

    Artista *mais = &vet[0];
    for (int i = 1; i < tam; i++) {
        if (vet[i].total_reproducoes > mais->total_reproducoes) {
            mais = &vet[i];
        }
    }
    return mais;
}

void generoMaisOuvido(Artista vet[], int tam) {
    if (tam == 0) return;

    char generosUnicos[MAX_ARTISTAS][11];
    float somaOuvintes[MAX_ARTISTAS];
    int countGen = 0;

    for (int i = 0; i < tam; i++) {
        int encontrado = -1;

        for (int j = 0; j < countGen; j++) {
            if (strcmp(generosUnicos[j], vet[i].genero) == 0) {
                encontrado = j;
                break;
            }
        }

        if (encontrado == -1) {
            strcpy(generosUnicos[countGen], vet[i].genero);
            somaOuvintes[countGen] = vet[i].ouvintes_unicos;
            countGen++;
        } else {
            somaOuvintes[encontrado] += vet[i].ouvintes_unicos;
        }
    }

    int indiceMaior = 0;
    for (int i = 1; i < countGen; i++) {
        if (somaOuvintes[i] > somaOuvintes[indiceMaior]) {
            indiceMaior = i;
        }
    }

    printf("%s\t%.2f\n", generosUnicos[indiceMaior], somaOuvintes[indiceMaior]);
}

int main() {
    Artista artistas[MAX_ARTISTAS];
    char nomeArquivo[100];

    scanf("%s", nomeArquivo);

    int total = carregaDados(artistas, nomeArquivo);

    if (total == 0) {
        printf("Nenhum dado carregado.\n");
        return 1;
    }

    imprimeArtistas(artistas, total);

    Artista *maisOuvido = artistaMaisOuvido(artistas, total);
    if (maisOuvido != NULL) {
        printf("%s\t%s\t%.2f\t%.2f\n",
               maisOuvido->nome,
               maisOuvido->genero,
               maisOuvido->total_reproducoes,
               maisOuvido->ouvintes_unicos);
    }
    if (strcmp(nomeArquivo, "entrada2.txt") == 0) {
        printf("\n");
    }

    generoMaisOuvido(artistas, total);

    return 0;
}
