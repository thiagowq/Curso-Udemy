#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = 0; i < 3; i++)
    {
        if (num % 2 == 0){
            printf(" %d e par", num);
            return 0;
        }else if (num % 2 != 0){
            printf(" %d e impar", num);
            return 0;
        }
    }
    return 0;
}