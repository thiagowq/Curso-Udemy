#include <stdio.h>
#include <stdlib.h>
#define TAM 3

void main(){

int vetor [TAM], cont;

//Passando valores para o vetor
vetor[0] = 5;
vetor[1] = 10;
vetor[2] = 15;

//Adicionando 1 para cada posicao
for(cont = 0; cont < TAM; cont++){
    vetor[cont] =  vetor[cont] +1 ;
}


//exibindo os valores do vetor
printf("\n posicao 0: %d", vetor[0] );
printf("\n posicao 1: %d", vetor[1] );
printf("\n posicao 2: %d", vetor[2] );

//Imprimindo vetor em um laço de repeticao
for(cont = 0; cont < TAM; cont++){
    printf("\n posicao %d: %d", cont, vetor[cont] );
}

//lendo 3 valores para o vetor
for(cont = 0; cont < TAM; cont++){
    scanf("%d", &vetor[cont]);
}
for(cont = 0; cont < TAM; cont++){
    printf("\n posicao %d: %d", cont, vetor[cont] );
}




system("pause");

}
