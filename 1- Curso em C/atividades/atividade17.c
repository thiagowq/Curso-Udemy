#include <stdio.h>
#include <stdlib.h>

void main(){

float pes, polegadas, jardas, milhas;

printf("Digite a medida em pes");
scanf("%f", &pes);

polegadas = pes * 12;
jardas = pes / 3;
milhas = jardas / 1760;

printf("medida em polegadas: %f \n em jardas: %f \n e em milhas: %f \n", polegadas, jardas, milhas);

system("pause");

}
