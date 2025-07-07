#include <stdio.h>

int main(){

    int n, numero = 0;
    int soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    while (n != 0){
        int cod = n % 10;
        numero = numero * 10 + cod;
        n = n / 10;
        soma++;
    }

    printf("%d", soma);
    
    return 0; 
}