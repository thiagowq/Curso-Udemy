#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, i;
    float numero, soma = 0, media;

    printf("Digite quantos numeros você quer digitar:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Digite o número:");
        scanf("%f", &numero);
        
        soma = soma + numero;

    }

    media = soma / n;

    printf("A meida dos numeros é: %.2f \n", media);


    return 0;
}