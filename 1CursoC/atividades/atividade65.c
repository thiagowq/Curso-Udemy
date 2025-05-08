#include <stdio.h>
#include <stdlib.h>

/*2. Escreva um programa que imprime todos
os números inteiros de 100 a 1. */

int main(){

    int i = 10;

    /*while (i>=1)
    {
        printf("%d \n", i);
        i--;
    }
        
    for (i = 10; i >= 1; i--)
    {
        printf("%d\n", i);
    }*/

    do{

        printf("%d \n", i);
        i--;

    }while (i >= 1);
    
    
    
    return 0;

}