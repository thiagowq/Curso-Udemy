#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Permite usar acentos e em português
    setlocale(LC_ALL,"");

    int a = 5;
    float b = 0.5;
    float c = 0.05;
    float d = 0.005;

    printf("\n Qual o valor em Metros de %d", a);

    printf("\n O valor em Metros de %d é %d", a, a);

    printf("\n O valor em Decímetro de %d é %.1f", a, b);

    printf("\n O valor em Centímetro de %d é %.2f", a, c);

    printf("\n O valor em Milímtro de %d é %.3f", a, d);


    //Pausa o programa quando é executado
    system("pause");

}
