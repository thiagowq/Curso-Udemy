#include <stdio.h>

int main() {
    int x = 100;
    int *p = &x; // P aponta para X
    int **pp = &p; // pp é um ponteiro para ponteiro, ou seja, ele guarda o endereço do ponteiro p

    printf("%d\n", **pp); // **pp acessa o valor final: **pp acessa o ponteiro pp, **pp acessa o valor que p aponta(que é x, ou 100)
    return 0;
}
