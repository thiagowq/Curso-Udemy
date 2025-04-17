#include <stdio.h>
#include <stdlib.h>

void main(){

float p_fab, perc_d, perc_i, vlr_d, vlr_i, p_final;

printf("Digite o preço de fábrica: ");
scanf("%f", &p_fab);

printf(" \n Digite o percentual de lucro: ");
scanf("%f", &perc_d);

printf(" \n Digite o percentual de impostos: ");
scanf("%f", &perc_i);


vlr_d = p_fab * perc_d / 100;

vlr_i = p_fab * perc_i / 100;

p_final = p_fab + vlr_d + vlr_i;

printf(" \n o lucro do distribuidor é de: %0.2f ", vlr_d);
printf(" \n o valor correspondente aos impostos é de %0.2f", vlr_i);
printf(" \n preço final do veiculo: %0.2f", p_final);

system("pause");

}
