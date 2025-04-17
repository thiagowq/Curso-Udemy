#include <stdio.h>
#include <stdlib.h>

int main(){

    // Tabuada de um número

int num1;

printf("Digite um número inteiro para exibir a tabuada:");
scanf("%d", &num1);

for (int i = 1; i <= 10; i++)
{
    printf("%d x %d = %d\n", num1, i, num1 * i);
}

return 0;
}
