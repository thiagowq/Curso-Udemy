#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

float graus, res;


printf("Digite a temperatura em Graus Celsius:");
scanf("\n%f", &graus);

res = (graus *9/5) + 32;

printf("\n A temperatura convertida eh %f", res);

}
