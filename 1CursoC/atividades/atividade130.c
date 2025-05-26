#include <stdio.h>

void lervetA(int vetA[]){
    for (int i = 0; i < 10; i++){
        scanf("%d", &vetA[i]);
    }
}

void lervetB(int vetB[]){
    for (int i = 0; i < 10; i++){
        scanf("%d", &vetB[i]);
    }
}

void ordena_todos(int vetA[], int vetB[], int vetC[]){

    int i, j, aux;

    for ( i = 0; i < 10; i++){
        vetC[i] = vetA[i];
    }

    for ( i = 0; i < 10; i++){
        vetC[i + 10] = vetB[i];
    }

    for ( i = 0; i < 19; i++){
        for ( j = 0; j < 19 - i; j++){
            if (vetC[j] < vetC[j + 1]){
                aux = vetC[j];
                vetC[j] = vetC[j + 1];
                vetC[j + 1] = aux;
            } 
        }
    }   
}

int main(){

    int vetA[10], vetB[10], vetC[20];

    printf("Digite 10 valores para A: \n");
    lervetA(vetA);
    printf("Digite 10 valores para B: \n");
    lervetB(vetB);

    ordena_todos(vetA, vetB, vetC);
    
    printf("Vetor C ordenado em decrescente: \n");
    for ( int i = 0; i < 20; i++){
        printf("%d ", vetC[i]);
    }

    printf("\n");
    return 0;
}