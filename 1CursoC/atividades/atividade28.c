#include <stdlib.h>
#include <stdio.h>

int main(){

    int num1, num2, res;

    printf("Digite o primeiro número : ");
    scanf("%d", &num1);

    printf("Digite o segundo número : ");
    scanf("%d", &num2);

    res = num1 * num2;

    printf("o resultado da multiplicação é : %d", res);

    return 0;


}