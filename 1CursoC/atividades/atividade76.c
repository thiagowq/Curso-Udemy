#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, negativos = 0;

    printf("Digite 5 valores para a:");

    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &a);

        if (a < 0)
        {
            negativos++;
        }
        
    }
    
    printf("%d",negativos);


    return 0;
}