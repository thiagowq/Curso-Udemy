#include <stdlib.h>
#include <stdio.h>

int main(){

    int num1, i;

    printf("Digite um número:");
    scanf("%d", &num1);

    printf("Divisores de %d:\n", num1);

    for (i = 1; i <= num1 ; i++)
    {
        if (num1 % i == 0)
        {
            printf(" Divisor encontrado: %d \n", i);
        }
        
    }
    
    return 0;
}