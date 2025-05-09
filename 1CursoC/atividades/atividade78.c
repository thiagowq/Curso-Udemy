#include <stdio.h>
#include <stdlib.h>

//Ponteiros

//Função soma
//Declarando ponteiros do tipo inteiro
void soma (int *a, int *b){
    //multiplicando os valores de cada ponteiro
    *a = (*a) * 2;
    *b = (*b) * 2;
}

//Função principal
int main(){

    int a, b;

    //Pedindo para o usuário digitar um valor
    printf("Digite o primeiro valor: ");
    //Lendo e armazenando o valor digitado
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    //chamando a função soma onde está a multiplicação dos dois valores digitados
    soma(&a, &b);

    //Printando os valores digitados já duplicados
    printf("Valor de A: %d \n", a);
    printf("Valor de B: %d ", b);

    return 0;
}