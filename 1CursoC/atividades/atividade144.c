#include <stdio.h>

int main(){

    int vet[3] = {1, 2, 3};

    int *ptr = vet;

    *(ptr + 1) = 10;

    printf("%d\n", vet[1]);

    return 0;
}