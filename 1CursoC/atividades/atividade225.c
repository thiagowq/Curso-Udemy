#include <stdio.h>

struct Produto{
    char nome[20];
    int quantidade;
    float preco;
};

typedef struct Produto produto;

void cadastro(produto vet[5], int *qtd){

    for (int i = 0; i < 5; i++){
        printf("Digite o nome do produto %d: ", i + 1);
        scanf(" %[^\n]", vet[i].nome);

        printf("Digite a quantidade do produto %d: ", i + 1);
        scanf("%d", &vet[i].quantidade);

        printf("Digite o preco do produto %d: ", i + 1);
        scanf("%f", &vet[i].preco); 
        
        (*qtd)++;
    }
}

void maiorValor(produto vet[5], int qtd){
    float maiorSoma = 0;
    char indiceProd[20];

    for (int i = 0; i < qtd; i++){
        float soma = vet[i].quantidade * vet[i].preco;

        if (soma > maiorSoma){
            maiorSoma = soma;
            strcpy(indiceProd, vet[i].nome);
        }
    }
    
    printf("\n---Produto com o maior valor---\n");
    printf("PRODUTO: %s | VALOR: %.2f", indiceProd, maiorSoma);
}

int main(){

    produto produtos[5];
    int qtd = 0;

    cadastro(produtos, &qtd);
    maiorValor(produtos, qtd);

    return 0;
}