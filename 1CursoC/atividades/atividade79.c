#include <stdio.h>
#include <stdlib.h>


void soma(int *a, int b){

    *a = *a + b;

}

int main (){

    int a, b;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &a);
    printf("Digite outro numero inteiro positivo: ");
    scanf("%d", &b);

    soma(&a, b);

    printf("Valor de A somado a B: %d\n Valor de B: %d\n", a, b);

    return 0;
}