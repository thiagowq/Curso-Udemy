#include <stdio.h>
#include <string.h>
#include <stdio.h>

int main(){

    /*Conversor de unidades: Crie um programa que converta unidades de medida
    (por exemplo, Celsius para Fahrenheit, quilômetros para milhas, metros para pés).
    Você pode usar uma estrutura switch para lidar com as diferentes opções de conversão.*/

    char palavra_chave[20];
    float num, res;
    int opcao = -1;

    printf("Digite a unidade de medida que você deseja alterar\n");
    printf("Exemplo: \nCelsius para Fahrenheit\nQuilometros para Milhas\nMetros para Pes\n\n");
    scanf(" %s", palavra_chave);

    printf("Digite o valor: ");
    scanf("%f", &num);
    printf("\n");

    if (strcmp(palavra_chave, "Celsius") == 0) {
        opcao = 1;
    } else if (strcmp(palavra_chave, "Quilometros") == 0) {
        opcao = 2;
    } else if (strcmp(palavra_chave, "Metros") == 0) {
        opcao = 3;
    }

    switch (opcao){
    case 1 :
        res =  (num * 9/5) + 32;
        printf("A conversao de Celsius para Fahrenheit e:\n");
        printf("Valor digitado: %0.2f\nValor Convertido: %0.2f\n", num, res);
        break;
    case 2 :
        res = num / 1.609;
        printf("A conversao de Quilometros para Milhas e:\n");
        printf("Valor digitado: %0.2f\nValor Convertido: %0.2f\n", num, res);
        break;
    case 3 :
        res = num * 3.281;
        printf("A conversao de Metros para Pes e:\n");
        printf("Valor digitado: %0.2f\nValor Convertido: %0.2f\n", num, res);
        break;
    default:
        printf("Unidade de medida nao reconhecida.\n");
        break;
    }

    return 0;
}