#include <stdio.h>

int main(){

    int v[5] = {1, 2, 3, 4, 5}; // Vetor com 5 inteiros
    int *p = v; // Ponteiro P aponta para o primeiro elemento do vetor

    printf("%d\n", *(p + 3)); // Acessa o quarto elemento do vetor v[3], que é 4

    return 0;
}