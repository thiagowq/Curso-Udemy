#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Calculadora simples : Crie um programa que faça as quatro operações básicas(soma, subtração, multiplicação, divisão)
.Você pode pedir ao usuário para inserir dois números e 
a operação desejada.*/

int main(){

    float n1, n2;
    char operacao[20]; 
    float res = 0;

    while (1){
        printf("Digite um numero (0 para sair): ");
        scanf("%f", &n1);

        if (n1 == 0){
            break;
        }

        printf("Digite o segundo numero: ");
        scanf("%f", &n2);
        
        printf("Digite qual a operação desaja realizar (+, -, *, /): ");
        scanf(" %s", operacao);   

        if (strcmp(operacao, "+") == 0){
            res = n1 + n2;
            printf("Resultado: %0.2f \n", res);
        }else if(strcmp(operacao, "-") == 0){
            res = n1 - n2;
            printf("Resultado: %0.2f \n", res);
        }else if(strcmp(operacao, "*") == 0){
            res = n1 * n2;
            printf("Resultado: %0.2f \n", res);
        }else if (strcmp(operacao, "/") == 0) {
            if (n2 != 0) {
                res = n1 / n2;
                printf("Resultado: %.2f\n\n", res);
            } else {
                printf("Erro: divisao por zero nao e permitida.\n\n");
            }
            } else {
            printf("Operacao invalida. Tente novamente.\n\n");
        }

        printf("Calculadora encerrada.\n");
    }
    return 0;
}