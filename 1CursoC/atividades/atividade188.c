#include <stdio.h>

int main(){

    int vet[6];
    int contP = 0, contI = 0;

    for (int i = 0; i < 6; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }
    
    for (int i = 0; i < 6; i++){
        if ( vet[i] % 2 == 0 ){
            contP++;
        }
    }

    for (int i = 0; i < 6; i++){
        if (vet[i] % 2 != 0){
            contI++;
        }
    }       

    printf("%d pares\n", contP);
    printf("%d impares\n", contI);

    return 0;
}