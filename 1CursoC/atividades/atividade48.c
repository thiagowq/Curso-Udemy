#include <stdio.h>
#include <locale.h>

/*Questão 4: Escreva um programa em C que lê um valor n inteiro e positivo e que calcula a
seguinte soma:
𝑆 = 1 +
1
2
+
1
3
+
1
4
+ ⋯ +
1
𝑛
O algoritmo deve escrever na tela cada termo gerado e o valor final de S.*/

int main(){


setlocale(LC_ALL, "Portuguese");

//Declarando Variáveis
int n, i;
float S = 0.0;

    // Entrada do valor de n
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    // Calcula a soma
    for(i = 1; i <= n; i++) {
        S = S + 1.0 / i;  // Soma o termo atual
        printf("Termo %d: 1/%d = %.4f\n", i, i, 1.0/i); // Mostra o termo
    }

    // Exibe o resultado final
    printf("\nValor final de S: %.4f\n", S);

return 0;
}