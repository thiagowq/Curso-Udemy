#include <stdio.h>

somarVetor(int vetor[], const int n){

    int soma = 0;
    int *ptr;
    int *const finalVetor = vetor + n;

    for (ptr = vetor; ptr < finalVetor; ++ptr){
        soma += *ptr;
    }

    return soma;
}

int main(){

    int somarVetor( int vetor[], const int n);
    int vetor[10] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    
    printf("A soma dos membros do vetor = %d", somarVetor(vetor, 10));

    return 0;
}