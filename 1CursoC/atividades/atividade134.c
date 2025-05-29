#include <stdio.h>

int main(){

    int x;
    x = 10;

    int *ponteiro;
    ponteiro = &x;

    //printa o valor contido na memória
    printf("%d", x);

    //printa o endereço da memória que contem a var x
    printf("%d", &x);

    //printa o valor contido na memória
    printf("%d", *ponteiro);

    //printa o endereço da memória que contem a var x
    printf("%d", ponteiro);


    return 0;
}