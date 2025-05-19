#include <stdio.h>
#include <stdlib.h>

void imprime(int vet[], int num, int *maior, int *menor){

    for (int i = 0; i < num; i++)
    {
        printf("%d Digite 10 numeros:", i + 1);
        scanf("%d", &vet[i]);

        if (i == 0){
            *maior = vet[i];
            *menor = vet[i];

        }else{
            if (vet[i] > *maior)
                *maior = vet[i];
                
            if (vet[i] < *menor)
            {
                *menor = vet[i];
            }
                
        }
    }
    
}

int main(){

    int maior, menor;
    int vet[10];
    int num = 10;   

    imprime(vet, num, &maior, &menor);

    printf("\nMaior numero: %d", maior);
    printf("\nMenor numero: %d", menor);
    return 0;
}