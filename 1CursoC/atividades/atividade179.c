#include <stdio.h>

void vetor(int num[10]){
    for (int i = 0; i < 10; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 10; i++){
        printf("%d\n", num[i]);
    }
    
}

int main(){

    int num[10];

    vetor(num);

    return 0;
}