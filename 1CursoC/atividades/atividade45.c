#include <stdio.h>
#include <locale.h>

int main(){

/*Questão 2: Escreva um programa em C que leia uma quantidade desconhecida de números e conte quantos deles estão nos seguintes intervalos: [0,25], [26,50], [51,75] e [76,100]. A entrada de dados deve terminar quando for lido um número negativo.*/

setlocale(LC_ALL, "Portuguese");

//Declarando Variáveis
int num1;

//Comparando o número digitado pelo usuário
for (int i = 0; i < 5; i++)
{
    printf("\nDigite um número: ");
    scanf("%d", &num1);

    if (num1 >= 0 && num1 <= 25)
    {
        printf("o númerro digitado é %d e está entre [0 e 25]", num1);

    }else if (num1 >= 26 && num1 <= 50)
    {
        printf("\no númerro digitado é %d e está entre [26 e 50]", num1);

    }else if (num1 >= 51 && num1 <= 75)
    {
        printf("\no númerro digitado é %d e está entre [51 e 75]", num1);

    }else if (num1 >= 76 && num1 <= 100)
    {
        printf("\no númerro digitado é %d e está entre [76 e 100]", num1);
    }
    else{
        printf("\nNúmero digitado negativo");
    }


}

return 0;
}