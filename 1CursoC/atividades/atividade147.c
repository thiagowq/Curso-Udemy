#include <stdio.h>

int main(){

    int vet[8], i = 0, j, z, aux;

    while (i <= 8){
        
        printf("Digite um numero: ");
        scanf("%d", &aux);
        
        j = 0;

        while (j < i && vet[j] < aux){
        j += 1;
        }

        z = i;

        while (z >= j + 1){
        vet[z] = vet[z - 1];
        z --;
        }
    
        vet[j] = aux;
        i++;
    }

    printf("\nVetor ordenado:");
    for (int i = 1; i < 8; i++){
        printf("%d", vet[i]);
    }

    return 0;
}