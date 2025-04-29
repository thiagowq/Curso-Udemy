#include <stdio.h>
#include <stdlib.h>

int main() {

    int num;

    printf("Digite algum numero para saber o dia da semana ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Segunda-feira");
        break;
    case 2:
        printf("Terça-feira");
        break;
    case 3:
        printf("Quarta-feira");
        break;
    case 4:
        printf("Quinta-feira");
        break;
    case 5:
        printf("Sexta-feira");
        break;
    case 6:
        printf("Sabado");
        break;
    case 7:
        printf("Domingo");
        break;
    default:
        printf("Dia inválido");    
        break;
    }
    return 0;
}
