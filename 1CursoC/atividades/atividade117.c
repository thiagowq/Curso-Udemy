#include <stdio.h>
#include <stdlib.h>

void retornaValor(int vet[], int num){
    for (int i = 0; i < num; i++)
    {
        printf("Digite 10 numeros:");
        scanf("%d", &vet[i]);
    
        if (vet[i] % 2 == 0)
        {
            printf("%d e par\n", vet[i]);
        }else if (vet[i] % 2 != 0)
        {
            printf("%d e impar\n", vet[i]);
        }
    }
}

int main(){

    int vet[10];
    int num = 10;

    retornaValor(vet, num);

    return 0;
}