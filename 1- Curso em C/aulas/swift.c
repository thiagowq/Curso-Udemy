#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"Portuguese");

    //Definindo variáveis
    int a = 2;
    char b = 'x';

    //Código de exemplo com IF
    if(a == 1){
        printf("\n Opção escolhida: 1");
    }else if(a == 2){
        printf("\n Opção escolhida: 2");
    }else if(a == 3){
        printf("\n Opção escolhida: 3");
    }else{
        printf("\n Opção inválida");
    }

    // O Mesmo código de cima usando switch
    switch(a){
        case 1:
            printf("\n Opção escolhida: 1");
            break;
        case 2:
            printf("\n Opção escolhida: 2");
            break;
        case 3:
            printf("\n Opção escolhida: 3");
            break;
        default:
            printf("\n Opção inválida");
            break;

}

    switch(b){
        case'x':
            printf("\n A letra é x");
            break;
        default:
            printf("\n Opção inválida");
            break;
}





    //Pausa o programa após executar
    system("pause");

}
