#include <stdio.h>

int main(){

    int vet[5] = {0, 0, 0, 0, 0};

    for (int i = 0; i < 5; i++){
        printf("Insira o elememnto da posição %d:", i );
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vet[i]);
    }
    
}