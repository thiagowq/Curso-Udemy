#include <stdio.h>

int main(){

    int vet[3] = {1, 2, 3};
    int *ptr = vet;

    printf("%d", *ptr);

    return 0;
}