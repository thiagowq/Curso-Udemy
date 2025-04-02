#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


void main(){

setlocale(LC_ALL,"Portuguese");

int tempo_segundo, horas, minutos, segundos;

printf("Digite o numeros de horas em minutos:");
scanf("%d", &tempo_segundo);

horas = tempo_segundo /3600;
minutos = (tempo_segundo % 3600) /60;
segundos = tempo_segundo %60;

printf("\n %d horas %d minutos %d segundos", horas, minutos, segundos);

}
