#include <stdio.h>

int main(){

    int a = 5, b = 10;
    int *ptr1, *ptr2;

    ptr1 = &a;
    ptr2 = &b;

    printf("%d %d %d %d \n", a, b, *ptr1, *ptr2);


    
}