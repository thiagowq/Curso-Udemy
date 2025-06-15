#include <stdio.h>

void vetor(int num[5], int soma){
    for (int i = 0; i < 5; i++){
        printf("Digite o numero: ");
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 5; i++){
        soma = soma + num[i];
    }

    printf("a soma de todos os valores digitados é: %d\n", soma);
}



int main(){

    int num[5], soma = 0; 

    vetor(num, soma);

    return 0;
}