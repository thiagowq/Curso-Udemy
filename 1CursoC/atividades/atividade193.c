#include <stdio.h>

void vendas(int totalVendas[10], int comissao[10], char nome[10][30]){
    for (int i = 0; i < 10; i++){
        printf("Total de vendas do vendedor %d:", i + 1);
        scanf("%d", &totalVendas[i]);
    }

    for (int i = 0; i < 10; i++){
        printf("\nDigite o percentual de comissão do vendedor %d:", i + 1);
        scanf("%d", &comissao[i]);    
    }
    
    for (int i = 0; i < 10; i++){
        printf("Digite o nome do Vendedor: ");
        scanf(" %[^\n]", nome[i]);
    }
} 

void relatorio(int totalVendas[10], int comissao[10], char nome[10][30]){
    
    printf("\nVendedor e a porcentagem a receber:\n--------------\n\n");
    
    for (int i = 0; i < 10; i++){
        float valorComissao = totalVendas[i] * (comissao[i] / 100.0);
        printf("NOME: %s | Comissao a receber: R$ %0.2f\n", nome[i], valorComissao);
    }    
}

void maioresVendas(int totalVendas[10], int comissao[10], char nome[10][30]){
    int total = 0;
    printf("\nTotal de Vendas de todos os vendedores:\n--------------\n\n");
    
    for (int i = 0; i < 10; i++){
        total = total + totalVendas[i];    
    }
    printf("Total de vendas: R$ %d\n", total);
}

void maiorMenor(int totalVendas[10], int comissao[10], char nome[10][30]){

    float maiorV = totalVendas[0] * (comissao[0] / 100.0);
    float menorV = maiorV;
    int indiceMaior = 0, indiceMenor = 0;

    for (int i = 0; i < 10; i++){
        float valor = totalVendas[i] * (comissao[i] / 100.0);
        if (valor > maiorV){
            maiorV = valor;
            indiceMaior = i;
        }

        if (valor < menorV){
            menorV = valor;
            indiceMenor = i;
        }
    }

    printf("\nMaior valor a receber: R$ %0.2f - Vendedor: %s\n", maiorV, nome[indiceMaior]);
    printf("\nMenor valor a receber: R$ %0.2f - Vendedor: %s\n", menorV, nome[indiceMenor]);
}

int main(){    
    int totalVendas[10];
    int comissao[10];
    char nome[10][30];

    vendas(totalVendas, comissao, nome);
    relatorio(totalVendas, comissao, nome);
    maioresVendas(totalVendas, comissao, nome);
    maiorMenor(totalVendas, comissao, nome);

    return 0;
}