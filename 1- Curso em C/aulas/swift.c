#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"Portuguese");

    //Definindo vari�veis
    int a = 2;
    char b = 'x';

    //C�digo de exemplo com IF
    if(a == 1){
        printf("\n Op��o escolhida: 1");
    }else if(a == 2){
        printf("\n Op��o escolhida: 2");
    }else if(a == 3){
        printf("\n Op��o escolhida: 3");
    }else{
        printf("\n Op��o inv�lida");
    }

    // O Mesmo c�digo de cima usando switch
    switch(a){
        case 1:
            printf("\n Op��o escolhida: 1");
            break;
        case 2:
            printf("\n Op��o escolhida: 2");
            break;
        case 3:
            printf("\n Op��o escolhida: 3");
            break;
        default:
            printf("\n Op��o inv�lida");
            break;

}

    switch(b){
        case'x':
            printf("\n A letra � x");
            break;
        default:
            printf("\n Op��o inv�lida");
            break;
}





    //Pausa o programa ap�s executar
    system("pause");

}
