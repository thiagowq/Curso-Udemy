#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, armazena = 0;

    printf("Digite um valor:");
    scanf("%d", &a);

    for (int i = 1; i < 5; i++)
    {
        printf("Digite um valor:");
        scanf("%d", &a);
        
        if (a < 0)
        {
            armazena++;
        }
        
    }     
    
    printf("%d", armazena);

    return 0;
}