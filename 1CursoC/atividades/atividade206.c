#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Artista{
    char nome_do_artista[30];
    char genero[10];
    float total_de_producoes;
    float ouvinte_unicos;
};

typedef struct Artista artista;

int carregaDados(artista vet[], char nomeArquivo[]) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 0;
    }

    int count = 0;
    while (count < MAX_ARTISTAS && fscanf(arquivo, "%30[^,],%10[^,],%f,%f\n", vet[count].nome, vet[count].genero, &vet[count].total_reproducoes, &vet[count].ouvintes_unicos) == 4){
        count++;
    }

    fclose(nomeArquivo);
    return count;
}

void imprimeArtistas(artista vet[], int tam){
    for (int i = 0; i < tam; i++){
        printf("%s\t%s\t\t%.2f\t\t%.2f\n",
               vet[i].nome,
               vet[i].genero,
               vet[i].total_reproducoes,
               vet[i].ouvintes_unicos);
    }
    
    
}

int main(){

    artista artistas[MAX_ARTISTAS];
    char nomeArquivo[] = "dados.csv";

    int total = carregaDados(artistas, nomeArquivo);
    printf("Total de artistas carregados: %d\n", total);

    for (int i = 0; i < total; i++) {
        printf("%s (%s) - %.2f reproduções, %.2f ouvintes\n",
               artistas[i].nome,
               artistas[i].genero,
               artistas[i].total_reproducoes,
               artistas[i].ouvintes_unicos);
    }

    return 0;
}

