#include <stdio.h>
#include <string.h>

struct Livro{
    char titulo[50];
    char autor[50];
};

typedef struct Livro livro;

void cadastroLivro(livro vet[]){
    for (int i = 0; i < 5; i++){
        printf("Digite o  Titulo do Livro %d: ", i + 1 );
        scanf(" %[^\n]", vet[i].titulo);

        printf("Digite o Autor do Livro %d: ", i + 1);
        scanf(" %[^\n]", vet[i].autor);
    }
}

void buscaAutor(livro vet[], char autor[]){
    int encontrou = 0;

    for (int i = 0; i < 5; i++){
        if (strcmp(autor, vet[i].autor) == 0){
            printf("Livro: %s\n", vet[i].titulo);
            encontrou = 1;
        }
    }

    if (!encontrou){
        printf("Nenhum livro encontrado para este autor.\n");
    }
}

int main(){

    livro livro[5];
    char autor[30];

    cadastroLivro(livro);
    
    printf("Digite o nome de um Autor para buscar seus Livros: ");
    scanf(" %[^\n]", autor);
    
    buscaAutor(livro, autor);

    return 0;
}