#include <stdio.h>

int main(){

    int n;
    int fatorial = 1;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        fatorial *= i;
    }

    printf("%d! = %d\n", n, fatorial);

    return 0;
}