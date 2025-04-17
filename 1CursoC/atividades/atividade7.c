#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main(){

setlocale(LC_ALL,"Portuguese");

int n1, n2, n3, res;

printf("Digite o primeiro número:");
scanf("\n%d", &n1);

printf("Digite o segundo número:");
scanf("\n%d", &n2);

printf("Digite o terceiro número:");
scanf("\n%d", &n3);

res = n1 * n2 * n3;

printf("\n%d", res);

}
