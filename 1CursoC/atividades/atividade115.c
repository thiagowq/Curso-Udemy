#include <stdio.h>
#include <stdio.h>


void valores(int vet[], int tam, int *soma){
    
    *soma = 0;

    for (int i = 0; i < tam; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vet[i]);
        *soma = vet[i] + vet[i];
    }

}

int main(){

    int tam = 5;
    int vet[5];
    int soma = 0;

    valores(vet, tam, &soma);

    printf("Soma:%d\n", soma);
    return 0;
}