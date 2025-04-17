#include <stdio.h>
#include <stdlib.h>

void main(){

float peso_saco, racao_gato1, racao_gato2, total_final;

scanf("%f", &peso_saco);
scanf("%f", &racao_gato1);
scanf("%f", &racao_gato2);

racao_gato1 = racao_gato1 /1000;
racao_gato2 = racao_gato2 /1000;
total_final = peso_saco - 5* (racao_gato1 + racao_gato2);

printf("restará %0.2f apos 5 dias", total_final);

system("pause");

}
