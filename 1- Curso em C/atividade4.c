#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
float raio, res;

printf("Digite o valor do Raio:");
scanf("\n%f", &raio);

res = 2*M_PI*raio;

printf("\n%f", res);
}
