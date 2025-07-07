#include <stdio.h>

int main(){

    int n;
    int soma = 0;

    printf("Digite um numero:");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++){
        if (i % 2 == 0){
            soma += i;
        }
    }
    
    printf("A soma de todos os numero pares ate o %d eh %d: ", n, soma);

    return 0;
}