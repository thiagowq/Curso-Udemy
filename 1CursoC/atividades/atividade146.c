#include <stdio.h>
#include <stdbool.h>

int main(){

    int vet[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 9; i++){
        int num = vet[i];
        bool ehprimo = true;

        if (num < 2){
            ehprimo = false;
        }else{
            for (int j = 2; j * j <= num; j++){
                if (num % j == 0){
                    ehprimo = false;
                    break;
                }
            } 
        }
        if (ehprimo){
            printf("%d é primo na posição %d\n", num, i);
        }
    }

    return 0;
}