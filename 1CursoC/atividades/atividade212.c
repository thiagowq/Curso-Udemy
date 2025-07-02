#include <stdio.h>
#include <string.h>

struct Produto{
    char nome[40];
    int codigo;
    float preco;
};

typedef struct Produto produto;

int cadastro (produto vet[]){
    int i;

    for (i = 0; i < 100; i++){
        printf("Digite o codigo %d (0 para parar): ", i + 1);
        scanf("%d", &vet[i].codigo);

        if (vet[i].codigo == 0){
            break;
        }

        printf("Digite o nome %d: ", i + 1);
        scanf(" %[^\n]", vet[i].nome);

        printf("Digite o preco %d: ", i + 1);
        scanf("%f", &vet[i].preco);
    }
    return i;
}

void atualizarPreco(produto vet[], int qtd){
    int cod, encontrado;
    float novoPreco;

    printf("Digite o codigo do produto que deseja alterar o preco: ");
    scanf("%d", &cod);

    for (int i = 0; i < qtd; i++){
       if (cod == vet[i].codigo){
            printf("Produto encontrado: %s - Preco atual: %.2f\n", vet[i].nome, vet[i].preco);
            printf("Digite o novo preco: ");
            scanf("%f", &novoPreco);
            vet[i].preco = novoPreco;
            printf("Preco atualizado com sucesso!\n");
            encontrado = 1;
            break;            
        }
    }
}

void listarProdutos(produto vet[], int qtd){
    printf("\n Lista de produtos: \n");
    for (int i = 0; i < qtd; i++){
        printf("Codigo: %d | Nome: %s | Preco: %0.2f\n", vet[i].codigo, vet[i].nome, vet[i].preco);
    }
}

int main(){

    produto produtos[100];
    int qtdProdutos;

    qtdProdutos = cadastro(produtos);

    listarProdutos(produtos, qtdProdutos);

    atualizarPreco(produtos, qtdProdutos);

    listarProdutos(produtos, qtdProdutos);

    return 0;
}