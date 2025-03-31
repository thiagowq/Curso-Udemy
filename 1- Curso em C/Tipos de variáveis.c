#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

void main(){

    //Definindo variáveis
    int a;
    float b;
    char c;
    bool d;

    //Passando valores
    a = 5;
    b = 2.3;
    c = 'a';
    d = true; //true = 1, false = 0

    //Escrevendo na tela
    printf("\n O valor de a - %d", a);
    printf("\n O valor de b - %.2f", b);
    printf("\n O valor de c - %c", c);
    printf("\n O valor de d - %d\n", d);

    //Lendo valores
    scanf("%d", &a);
    scanf("%f", &b);
    //quando for ler um "char" é necessário dar um espaço antes do %C
    scanf(" %c", &c);
    scanf("%d", &d);

    //Escrevendo na tela
    printf("\n O valor de a - %d", a);
    printf("\n O valor de b - %.2f", b);
    printf("\n O valor de c - %c\n", c);
    printf("\n O valor de d - %d\n", d);

    //Pausando
    system("pause");

}
