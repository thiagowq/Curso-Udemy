#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

//Declarando Variáveis
float num1, num2, media;

//Perguntando ao usuário
printf("Digite o primeiro valor: ");
//Reservando Valores
scanf("%f", &num1);

printf("\nDigite o segundo valor: ");
scanf("%f", &num2);

//Realizando a equação
media = (num1 + num2) / 2;

//Imprimindo resultado
printf("A média é: %0.2f", media);


return 0;
}