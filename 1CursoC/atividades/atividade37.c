#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

//Declarando Variáveis
float num1;

//Perguntando ao usuário
printf("Digite um numero: ");

//Reservando Valores
scanf("%f", &num1);

//Decifrando se o numero digitado pelo usuário é positivo ou negativo
if (num1 < 0)
{
    printf("O numero é negativo");
}else{
    printf("O numero é positivo");
}



return 0;
}