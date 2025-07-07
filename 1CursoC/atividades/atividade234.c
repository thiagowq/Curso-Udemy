#include <stdio.h>

int main(){

    int n;
    int soma = 0;

    printf("Digite um numero para saber a tabuada: ");
    scanf("%d", &n);

    for (int i = 0; i <= 10; i++){
        soma = n * i;
        printf("%d X %d = %d\n", n, i, soma);
    }

    return 0;
}
