#include <stdio.h>
#include <stdlib.h>

int main(){

    int res;
    unsigned long long soma = 1;

    printf("Digite um valor: ");
    scanf("%d", &res);
    
    for (int i = 1; i <= res; i++)
    {
        soma = soma * i;
    }
    
    
    printf("%llu", soma);

    return 0;
}