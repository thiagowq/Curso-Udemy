#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

int n1, n2, n3;
float resultado;

printf("Digite o Primeiro valor:");
scanf("%d", &n1);

printf("Digite o Segundo valor:");
scanf("%d", &n2);

printf("Digite o Teceiro valor:");
scanf("%d", &n3);

resultado = (n1 + n2 + n3) /3.0;

printf("%f", resultado);

system("pause");
}
