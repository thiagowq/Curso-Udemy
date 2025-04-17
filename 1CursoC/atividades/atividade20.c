#include <stdio.h>
#include <stdlib.h>

void main(){

float vlr_sal, qtd_kw, vlr_kw, vlr_reais, desc, valor_desc;

printf("Digite o valor do seu salario: \n");
scanf("%f", &vlr_sal);

printf("Digite a quantidade de quilowatts consumida: \n");
scanf("%f", &qtd_kw);

vlr_kw = vlr_sal / 5;
vlr_reais = vlr_kw * qtd_kw;
desc = vlr_reais * 15 /100;
valor_desc = vlr_reais - desc;

printf("\n o valor de cada quilowatt é de: %0.2f", vlr_kw);
printf("\n o valor a ser pago por essa residência e: %0.2f", vlr_reais);
printf("\n o valor a ser pago com desconto de 15% e: %0.2f", valor_desc);


system("pause");

}
