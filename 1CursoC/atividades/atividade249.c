#include <stdio.h>

void altera(int *ptr) {
    *ptr = *ptr + 5;
}

int main() {
    int x = 10;
    altera(&x);
    printf("%d\n", x);
    return 0;
}
