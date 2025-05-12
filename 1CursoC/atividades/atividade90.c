#include <stdio.h>
#include <stdlib.h>


int main(){

    int num;

    printf("Digite um numero (Digite um valor negativo pra parar)");
    scanf("%d", &num);

        if (num < 0)
        {
            break;
        }else if (num %2 == 0)
        {
            printf("o numero e par");
        }
        else{
            printf("o numero e impar");
        }
        

    return 0;
}