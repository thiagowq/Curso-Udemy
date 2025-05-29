#include <stdio.h>

int main(){

    int x = 10;
    int *ptr;
    ptr = &x;

    int y = 20;
    *ptr = y;

    printf("%d, %d", x, y);

    return 0;
}