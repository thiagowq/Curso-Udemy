#include <stdio.h>

//Quais números esse código irá printar?

int main() {
    int a = 4, b = 7, c = 2;
    int *p = &a;
    int *q = &b;
    int *r = &c;

    *p = *q - *r;
    r = p;
    *q = *r + *q;

    printf("%d %d %d\n", a, b, c);
    return 0;
}