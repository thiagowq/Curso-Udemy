#include <stdio.h>

int main() {
    int x = 10; //Cria uma variavel x com valor 10
    int *p = &x;   //o ponteiro P armazena o endereço da variavel X

    *p = 20;  //estamos acessando o valor que o ponteiro aponta(ou seja, x) e modificando para 20
    printf("%d\n", x); //Imprime o calor de X, que foi alterado par a 20 através do ponteiro
    return 0;
}
