#include <stdio.h>

void altera(int *ptr) { // A função altera recebe um ponteiro para int
    *ptr = *ptr + 5; // Significa "o valor para o qual o ponteiro aponta deve ser somado com 5"
}

int main() {
    int x = 10;
    altera(&x); //passa o endereço de x, então a função altera diretamente o valor original
    printf("%d\n", x);
    return 0;
}
