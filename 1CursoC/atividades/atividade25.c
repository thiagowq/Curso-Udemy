#include <stdio.h>

int main() {

    //Fibonacci até N termos 

    int n, i, a = 0, b = 1, c;

    printf("Quantos termos da sequência de Fibonacci você quer ver? ");
    scanf("%d", &n);

    printf("Sequência de Fibonacci:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}
