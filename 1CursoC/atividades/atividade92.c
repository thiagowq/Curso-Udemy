#include <stdio.h>
#include <stdlib.h>

int main(){

    int res;
    int soma = 1;

    printf("Digite um valor: ");
    scanf("%d", &res);
    
    for (int i = 1; i <= res; i++)
    {
        soma = soma * i;
    }
    
    
    printf("%d", soma);

    return 0;
}