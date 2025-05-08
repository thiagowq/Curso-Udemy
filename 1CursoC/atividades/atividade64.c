#include <stdio.h>
#include <stdlib.h>

/*1. Escreva um programa que imprima
todos os números inteiros de 0 a 50
*/

int main (){

    int i = 1;

    /*while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }

        //começa; termina; incrementa.
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }
    */

    //faça enquanto
    do{
        printf("%d\n", i);
        i++;

    }while(i <= 10);
    

    return 0;

}