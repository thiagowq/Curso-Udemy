#include <stdio.h>
#include <stdio.h>

int main(){

    int n, soma, i = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);
    
    while (n >= i)
    {
        soma = i * i;
        i++;
    }
    
    printf("o valor do %d fatorial é: %d", n, soma);

    return 0;
}