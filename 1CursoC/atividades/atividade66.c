#include <stdio.h>
#include <stdlib.h>

/*3. Escreva um algoritmo que leia os valores n1 e n2 e imprima o intervalo fechado entre esses dois valores. */

int main(){


    int n1, n2;

    printf("Digite dois numeros: \n");
    scanf("%d %d", &n1, &n2);

    while (n1 <= n2)
    {
        printf("%d \n", n1);
        n1++;
    }
    


    return 0;

}