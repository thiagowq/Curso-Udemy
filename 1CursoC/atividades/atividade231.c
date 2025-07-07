#include <stdio.h>

int main(){

    int n, invertido = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    while (n != 0){
        int digito = n % 10;
        invertido = invertido * 10 + digito;
        n = n / 10;
    }
    
    printf("Numero invertido: %d\n", invertido);    
    return 0;
}