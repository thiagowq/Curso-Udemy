
#include <stdio.h>

int main(){
    //CRIA UM VETOR FLOAT COM 10 POSIÇÕES

    int maior, menor;
    int soma = 0;
    float media;
    int cont = 0;
    int cont1 = 0;
    int cont2 = 0;
    int somando;
    int A[] = {10, 20, 30, 40, 50};
    int B[] = {2, 4, 6, 8, 10};
    int C = A - B;
    


    for (int i = 0; i < tam; ++i) {

        soma = soma + vet[i];
        media = soma / tam;
    }

    printf("%d \n%d", soma, media );

    for (int i = 0; i < tam; ++i) {

        if(vet[i] > 5){
            cont++;
        }
        printf("%d", cont);

    }

    maior = vet[0];
    menor = vet[0];

    for (int i = 0; i < tam; ++i) {

        if(vet[i] < maior){
            maior = vet[i];
        } else if(vet[i] > menor){
            menor = vet[i];
        }

    }

    for (int i = 0; i < tam; ++i) {

        vet[i] = vet[i] + maior;
        printf("%d", vet[i]);
    }
    

    for (int i = 0; i < tam - 1; i--) {
        printf("%d", vet[i]);
    }

    for (int i = 0; i < tam; ++i) {

        printf("%d", C);
    }

    return 0;
}