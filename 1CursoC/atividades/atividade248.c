#include <stdio.h>

int main(){

    int v[5] = {1, 2, 3, 4, 5};
    int *p = v;

    printf("%d\n", *(p + 3));

    return 0;
}