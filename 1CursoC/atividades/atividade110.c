#include <stdio.h>
#include <time.h>


int main(){


    int i;
    float vet[4];
    float soma = 0;
    //srand(time(NULL));  

    for (i = 0; i < 4; i++){
        //scanf("%f", &vet[i]); //Usuário digita
        //vet[i] = i*10;        //Valores sequenciais preenchidos pelo vetor
        vet[i] = rand() % 10;     //Valores aleatórios
    }

    for (i = 0; i < 4; i++){
        printf("%0.1f", vet[i]);
    }

    printf("\n");

    for (i = 4-1; i >= 0; i--){
        printf("%0.1f", vet[i]);
    }

   
    for (i = 0; i < 4; i++){
        soma = soma + vet[i];
    }
    printf("\nSoma: %0.1f", soma);

    printf("\nMedia: %0.1f", soma/4);


    return 0;
}