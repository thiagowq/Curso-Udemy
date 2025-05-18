#include <stdio.h>
#include <stdlib.h>

int main(){

    int vet[5];
    int tam = 5;
    float media;
    int soma;
   
    printf("DIGITE 5 VALORS:\n");
    
    for (int i = 0; i < tam; ++i) {

        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vet[i]);
    }

        printf("\n Valores digitados:\n");
    for (int i = 0; i < tam; i++){

        printf("vetor[%d] = %d\n", i, vet[i]);
    }
    
    for (int i = 0; i < tam; i++)
    {
        soma = soma + vet[i];
        media = soma / tam; 
    }

    printf("%d, %0.2f", soma, media);
    
 



    return 0;
}
   
