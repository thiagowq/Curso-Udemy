#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, armazena = 0, armazena1 = 0, armazena2 = 0;

    for (int i = 1; i <= 10; i++)
    {
        printf("Digite um numero:");
        scanf("%d", &num);
    
        if (num == 0)
        {
            armazena++;
        }else if (num < 0)
        {
            armazena1++;
        }else if (num > 0)
        {
            armazena2++;
        }
    
    }
    
    printf("%d numeros são positivos\n", armazena2);
    printf("%d numeros são negativos\n", armazena1);
    printf("%d numeros são zeros\n", armazena);

    return 0;
}