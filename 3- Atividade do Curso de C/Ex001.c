#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Permite usar acentos e em portugu�s
    setlocale(LC_ALL,"");

    int a = 5;
    float b = 0.5;
    float c = 0.05;
    float d = 0.005;

    printf("\n Qual o valor em Metros de %d", a);

    printf("\n O valor em Metros de %d � %d", a, a);

    printf("\n O valor em Dec�metro de %d � %.1f", a, b);

    printf("\n O valor em Cent�metro de %d � %.2f", a, c);

    printf("\n O valor em Mil�mtro de %d � %.3f", a, d);


    //Pausa o programa quando � executado
    system("pause");

}
