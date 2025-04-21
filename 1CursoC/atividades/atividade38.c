#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

//Declarando Variáveis
float num1;

//Perguntando ao usuário
printf("Digite um número: ");

//Reservando Valores
scanf("%f", &num1);

//Conferindo o valor digitado pelo usuário e imprimindo os numeros de 1 até o digitado pelo usuário
for (int i = 1; i <= num1; i++)
{
    printf("%d\n", i);
}


return 0;
}