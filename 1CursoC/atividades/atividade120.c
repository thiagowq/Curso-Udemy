#include <stdio.h>

int main(){

    int vet[5] = {10, 20, 30, 40, 50};

    int i;
    float s;

    for (i = 0; i < 5; i++){
        s = s + vet[i];
    }

    printf("Resultado: %0.2f\n", s/5);

}

