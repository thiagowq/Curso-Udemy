#include <stdio.h>

int main(){

    int x = 5, y = 15;
    int *p, *q;

    p = x;
    q = &y;

    *q = *q + 1;
    *p = *p + 1;

    printf("x = %d, y = %d", x, y);

    return 0;
}