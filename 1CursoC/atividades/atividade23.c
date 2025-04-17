#include <stdio.h>
#include <stdlib.h>

int main(){

//Soma de número positivos 


int num1, soma = 0;

do {
    printf("Digite um número (0 para sair):");
    scanf("%d", &num1);

    if (num1 > 0)
    {
        soma += num1;
    }
    
} while (num1 != 0);
{
    printf("A soma dos numeros positivos é: %d\n", soma);
}

return 0;
}
