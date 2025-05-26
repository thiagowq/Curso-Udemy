#include <stdio.h>

int fatorial(int n) {
    int fat = 1;
    for (int i = 1; i <= n; i++){
        fat *= i;
    }
    return fat;
}

void recebeA(int vetA[], int tam){
    for (int i = 0; i < tam; i++){
        scanf("%d", &vetA[i]);
    }
}

void recebeB(int vetA[], int vetB[], int tam){
    for (int i = 0; i < tam; i++){
        vetB[i] = fatorial(vetA[i]);
    }    
}

int main(){

    int vetA[10], vetB[10];
    int tam = 10;

    recebeA(vetA, tam);
    recebeB(vetA, vetB, tam);

    printf("Fatoriais: \n");
    for (int i = 0; i < tam; i++){
        printf("%d = %d\n", vetA[i], vetB[i]);
    }
    return 0;
}