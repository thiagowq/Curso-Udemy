#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

//Declarando Variáveis
int num1;

//Perguntando ao usuário
printf("Digite um número: ");

//Reservando Valores
scanf("%d", &num1);

for (int i = 1; i <= 10; i++)
{
    printf("%d x %d = %d\n", num1, i, num1 * i);
}

return 0;
}