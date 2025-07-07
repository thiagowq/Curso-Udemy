#include <stdio.h>

int main(){

    int n;
    int somaPar = 0;
    int somaIm = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++){
        if (i % 2 == 0){
            somaPar += i;
        }else if(i % 2 != 0){
            somaIm += i;
        }
    }
    
    printf("Soma do impares: %d\n", somaIm);
    printf("Soma do pares: %d\n", somaPar);

    return 0;
}