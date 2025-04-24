#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

//Declarando Variáveis
int valor, negativos = 0;

//Perguntando ao usuário
for (int i = 0; i < 5; i++)
{
    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor < 0)
    {
        negativos++;
    }
    
}

//Exibe o resultado
printf("Quantidade de valores negativos: %d\n ", negativos);

return 0;
}