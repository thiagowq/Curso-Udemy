#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

//Declarando Variáveis
int num1, soma = 0;

//Perguntando ao usuário
printf("Digite numeros para somar (digite 0 para parar):\n");


while (1)
{
    printf("Digite um número: ");
    scanf("%d", &num1);

    if (num1 == 0)
    {
        break;
    }
    
    soma += num1;
}

printf("A soma dos numeros digitados é: %d\n", soma);

return 0;
}