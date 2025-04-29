#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, count = 0;

    printf("Digite um numero inteiro positivo:");
    scanf("%d", &n);

    printf("Numeros pares de 1 ate %d: \n", n);

//Loop para encontrar numeros pares e contar multiplos de 3
for (int i = 2; i <= n; i+= 2)
{
    printf("%d", i);
    if (i % 3 == 0)
    {
        count++;
    }
    
}
    return 0;
}
