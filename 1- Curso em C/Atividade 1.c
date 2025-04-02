#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

int n1, n2, n3;
float resultado;

printf("Digite o Primeiro valor:");
scanf("\n%d", &n1);

printf("Digite o Segundo valor:");
scanf("\n%d", &n2);

printf("Digite o Teceiro valor:");
scanf("\n%d", &n3);

resultado = (n1 + n2 + n3) /3.0;

printf("\n%f", resultado);

system("pause");
}
