#include <stdio.h>


void soma(int *a, int b){

    *a = *a + b;
}


int main(){

    int a = 5, b = 9;

    printf("Antes da função\n A: %d\n B: %d\n", a, b);

    //quando eu for chamar uma função que contém ponteiro, preciso chamar com "&"
    soma(&a, b);
    
    printf("Depois da função\n A: %d\n B: %d\n", a, b);

    return 0;
}