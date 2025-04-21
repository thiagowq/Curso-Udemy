#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

//Declarando Variáveis
float altura, peso, imc;

//Perguntando ao usuário
printf("Digite sua altura: ");
//Reservando Valores
scanf("%f", &altura);

printf("Digite o seu peso: ");
scanf("%f", &peso);

//Calculando os dados digitados pelo usuário
imc = peso / (altura * altura);

//Imprimindo na tela o resultado
printf("altura: %0.2f\npeso: %0.2f\nIMC: %0.2f", altura, peso, imc);

return 0;
}