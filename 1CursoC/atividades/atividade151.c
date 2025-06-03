#include <stdio.h>

int armazenaProduto(int codigo[], int quantidade[], float preco[]){
    int i;
    for (i = 0; i < 100; i++){
        printf("Digite o código do produto:\n");
        scanf("%d", &codigo[i]);

        if (codigo[i] == 0){
            break;
        }
        
        printf("Digite a quantidade:\n");
        scanf("%d", &quantidade[i]);

        printf("Digite o preço do produto:\n");
        scanf("%f", &preco[i]);
    }
    
    return i;
}

void maiorPreco(int codigo[], float preco[], int count){
    float precoMaior = -1.0;
    int codigodoprod = -1;

    for (int i = 0; i < count; i++){
        if (preco[i] > precoMaior){
            precoMaior = preco[i];
            codigodoprod = codigo[i];
        }
    }

    if (codigodoprod != -1) {
        printf("\nO código do produto com maior preço (%.2f) é: %d\n", precoMaior, codigodoprod);
    } else {
        printf("\nNenhum produto cadastrado.\n");
    }
}

void calculaMedia (int quantidade[], float preco[], int codigo[], int count){
    float soma = 0;

    for (int i = 0; i < count; i++){
        soma += preco[i];
    }

    float media = soma / count;

    printf("\nMédia dos preços: %.2f\n", media);
    printf("Produtos com preço abaixo da média:\n");

    for (int i = 0; i < count; i++) {
        if (preco[i] < media) {
            printf("Código: %d | Preço: %.2f\n", codigo[i], preco[i]);
        }
    }
}

void prodComEstoque(int quantidade[], float preco[], int codigo[], int count){
    printf("\nProdutos com estoque maior que 50:\n");
    for (int i = 0; i < count; i++) {
        if (quantidade[i] > 50) {
            printf("Código: %d | Quantidade: %d | Preço: %.2f\n", codigo[i], quantidade[i], preco[i]);
        }
    }
}

int main(){
    int codigo[100];
    int quantidade[100];
    float preco[100];

    int count = armazenaProduto(codigo, quantidade, preco);

    maiorPreco(codigo, preco, count);
    calculaMedia(quantidade, preco, codigo, count);
    prodComEstoque(quantidade, preco, codigo, count);

    return 0;
}
