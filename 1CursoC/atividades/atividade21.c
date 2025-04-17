#include <stdio.h>
#include <stdlib.h>

int main(){

//Escreva um programa que receba um número inteiro do usuário e diga se ele é par ou ímpar.


int num1;

printf("Digite um número para exibir se é par ou ímpar");
scanf("%d", &num1);


if (num1 % 2 == 0){
    printf("O número e par");
}
else{
    printf("O número é impar");
}

return 0;
}
