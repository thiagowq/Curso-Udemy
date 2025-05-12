#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int numeros = 1, i;

    printf("Digite 10 numeros:");
    scanf("%d", &i);


    for (numeros = 1; numeros < 10; numeros++)
    {
        printf("Digite 10 numeros:");
        scanf("%d", &i);

    }
    
    printf("%d", i);


    return 0;
}