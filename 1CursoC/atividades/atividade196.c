#include <stdio.h>
#include <string.h>

void cadastro(char prod[10][30], int codigo[10], float preco[10]){

    for (int i = 0; i < 10; i++){
        printf("Digite o nome do produto: ", i + 1);
        scanf(" %[^\n]", prod[i]);

        printf("Digite o codigo do produto: ", i + 1);
        scanf("%d", &codigo[i]);

        printf("Digite o preço do produto: ", i + 1);
        scanf("%f", &preco[i]);
    }

    printf("\n--- Produtos com aumento ---\n");

    for (int i = 0; i < 10; i++){
        int temAumento = 0;
        float novoPreco = preco[i];

        if (codigo[i] %2 == 0 && preco[i] > 1000){
            novoPreco += 0.20 * preco[i];
            temAumento = 1; 
        }else if (codigo[i] %2 == 0){
            novoPreco += 0.15 * preco[i];
            temAumento = 1;
        }else if (preco[i] > 1000){
            novoPreco += 0.10 * preco[i];
            temAumento = 1;
        }

        if (temAumento){
            printf("Nome: %s | Codigo: %d | Preco Original: R$ %.2f | Novo Preco: R$ %.2f\n", prod[i], codigo[i], preco[i], novoPreco); 
        }   
    }
}

int main(){

    char prod[10][30];
    int codigo[10];
    float preco[10];

    cadastro(prod, codigo, preco);

    return 0;
}