#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, armazenar = 0;

    while (1){

        printf("Digite um numero (negativo para parar):");
        scanf("%d", &i);

        if (i < 0){
            break;
        }
        
        armazenar += i;
    }
    
    printf("a soma de todas os numeros digitados é: %d\n", armazenar);

    return 0;
}