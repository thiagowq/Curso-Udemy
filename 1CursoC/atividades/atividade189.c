#include <stdio.h>

int main(){

    int vet[7];

    for (int i = 0; i < 7 ; i++){
        printf("Digito %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    
    for (int i = 0; i < 7 ; i++){
        if (vet[i] % 2 == 0){
            printf("%d multiplo de 2\n", vet[i]);
        }
    }
    
    for (int i = 0; i < 7; i++){
        if(vet[i] % 3 == 0){
            printf("%d multiplo de 3\n", vet[i]);
        }
    }
    
    for (int i = 0; i < 7; i++){
        if(vet[i] % 2 == 0 && vet[i] % 3 == 0){
            printf("%d multiplo de 2 e 3\n", vet[i]);
        }
    }

    return 0;
}