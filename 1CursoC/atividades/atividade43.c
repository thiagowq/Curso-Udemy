#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

//Declarando Variáveis
int temperatura, fahrenheit;

//Perguntando ao usuário
printf("Digite a temperatura: ");
scanf("%d", &temperatura);

fahrenheit = (temperatura * 9/5) + 32;

//Exibe o resultado
printf("A temperatura em fahrenheit é: %d\n ", fahrenheit);

return 0;
}