#include <stdio.h>
#include <string.h>

void preencheVet(int vet[10]){
    int contNegativos = 0;
    int soma = 0;

    for (int i = 0; i < 10; i++){
        printf("Digite numeros inteiro reais:");
        scanf("%d", &vet[i]);
        
        if (vet[i] < 0){
            contNegativos++;
        }else if (vet[i] > 0){
            soma = soma + vet[i];
        }
    }

    printf("%d sao negativos\n", contNegativos);
    printf("A soma dos numero positivos eh: %d", soma);
    
}

int main(){

    int vet[10];

    preencheVet(vet);

    return 0;
}