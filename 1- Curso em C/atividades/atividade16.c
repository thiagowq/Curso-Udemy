#include <stdio.h>
#include <stdlib.h>

void main(){

float salario, perc, aumento, novosal;

printf("Digite o valor do seu salario: ");
scanf("%f", &salario);

printf("Digite a porcentagem de aumento: ");
scanf("%f", &perc);

aumento = salario * perc/100;

printf("o aumento foi de %0.2f: ", aumento);

novosal = salario + aumento;

printf("o seu novo salario e de %0.2f:", novosal);


system("pause");

}
