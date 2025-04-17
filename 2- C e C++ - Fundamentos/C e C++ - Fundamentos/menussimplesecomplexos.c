#include <stdio.h>
#include <stdlib.h>

void main(){

//Definindo variaveis
int opcao;

//Confere e valida a opcao
while(opcao < 1 || opcao > 3){

printf("escolha uma opcao");
printf("\n1-Opcao 1");
printf("\n2-Opcao 2");
printf("\n3-Opcao 3\n");

//Lendo a opcao
scanf("%d", &opcao);

//resultado de acordo com a opcao escolhida
switch(opcao){
    case 1:
        printf("\n opcao 1 foi escolhida");
        break;
    case 2:
        printf("\n opcao 2 foi escolhida");
        break;
    case 3:
        printf("\n opcao 3 foi escolhida");
        break;
    default:
        printf("opcao invalida");
        break;
}


system("pause");
}
}

