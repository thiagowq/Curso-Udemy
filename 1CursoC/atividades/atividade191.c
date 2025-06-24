#include <stdio.h>

int main(){

    int vet[15];

    for (int i = 0; i < 15; i++){
        printf("Digite números inteiros: ");
        scanf("%d", &vet[i]);
    }

    int encontrou = 0;
    for (int i = 0; i < 15; i++){ 
        if (vet[i] == 30){
            printf("Esse elemento eh igual a 30! e está na posicao %d\n", i);
            encontrou = 1;
        } 
    }

    if (!encontrou){
        printf("Nenhum elemento igual a 30 foi encontrado no vetor.\n");
    }

    return 0;
}