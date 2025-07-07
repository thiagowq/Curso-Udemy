#include <stdio.h>

int main(){

    int n;
    int soma = 0;

    printf("Digite um numero e saiba a soma dos numeros pefeitos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        if (n % 2 == 0){
            soma += i;
        }if (soma == n){
            break;
        }
    }

    printf("a divisao do 6 e a soma dos numeros perfeitos eh: %d", soma);

    return 0;
}