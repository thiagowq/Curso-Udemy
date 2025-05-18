#include <stdio.h>
#include <stdlib.h>


void imprimeVet(int vet[]){

    for (int i = 1; i < 5; i++)
    {
        scanf("%d\n", &vet[i]);
    }
}

void aocontrario(int vet[]){

    for (int i = 5; i > 0; i--)
    {
        printf("%d\n", vet[i]);
    }

}

int main(){

    int vet[5];

    imprimeVet(vet);
    printf("\nNumeros ao contrario\n");
    aocontrario(vet);

    return 0;
}