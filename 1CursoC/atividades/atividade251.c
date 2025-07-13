#include <stdio.h>
#include <string.h>

struct Livro{
    char nome[50];
    char autor[50];
    int ano;
};

typedef struct Livro Livro;

int carregaLivros(Livro vet[], char nomeArquivo[]){
    char linhas[100];
    int count = 0;
    FILE *arq = fopen( nomeArquivo, "r");

    if (arq == NULL){
        printf("Erro ao abrir arquivo");
        return 0;
    }

    while (fgets(linhas, sizeof(linhas), arq)){
        if (sscanf(linhas, "%s %s %d", vet[count].nome, vet[count].autor, &vet[count].ano)){
            count++;
        }
    }

    fclose(arq);
    return count;
}

int contarLivrosPorAutor(Livro vet[], int tam, char autor[]){
    int qtd = 0;
    for (int i = 0; i < tam; i++) {
        if (strcmp(vet[i].autor, autor) == 0){
            qtd++;
        }
    }
    return qtd;
}

int main(){

    Livro Livros[100];

    char nomeArquivo[] = "livros.txt";
    int tam;
    char autor[20];

    tam = carregaLivros(Livros, nomeArquivo);

    printf("Digite o nome do Autor que deseja buscar: ");
    scanf(" %[^\n]", autor);

    int indice = contarLivrosPorAutor(Livros, tam, autor);

    printf("%d", indice);

    return 0;
}