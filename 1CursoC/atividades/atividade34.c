#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

//Declarando Variáveis
int quant;
float preco_uni, valortotal;
char nome[10];

//Perguntando ao usuário
printf("Digite qual o nome do produto: ");
//Reservando Valores
scanf("%s", nome);

printf("Digite a quantidade do produto: ");
scanf("%d", &quant);

printf("Digite o preço do produto: ");
scanf("%f", &preco_uni);

//Calculando o valor total
valortotal = quant * preco_uni;

//Mostrando na tela o resultado
printf("Produto: %s\nQuantidade: %d\nPreço unitário: R$%0.2f\nTotal: R$%0.2f\n", nome, quant, preco_uni, valortotal);

return 0;
}
