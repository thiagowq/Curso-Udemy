#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;

    scanf("%d", &num);

    for (int i = 1; i <= 10; i++){
        printf("%d X %d = %d\n", num, i, num * i);
    }
    return 0;
}