#include <stdio.h>

int main(){

    int n;
    int soma = 0;

    for (int i = 1; i; i++){
        printf("Digite (0 para parar):\n");
        scanf("%d", &n);
        
        if (n == 0){
            printf("A soma de todos os valores digitados é: %d", soma);
            return 0;
        }

        soma += n;
    }

    return 0;
}