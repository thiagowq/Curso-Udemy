#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

float raio, res;

printf("Digite o valor do Raio para saber o valor da esfera:");
scanf("\n%f", &raio);

res = (4*M_PI)*(raio*raio) /3;

printf("\n o valor da esfera eh %f", res);

}
