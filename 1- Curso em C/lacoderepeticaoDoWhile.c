#include <stdio.h>
#include <stdlib.h>

void main(){

    //Definindo vari�veis
    int a = 1, b = 10;


    //Primeiro confere a condi��o, depois repete o bloco
    while(a <= 10){

        //Imprimindo 'a' na tela
        printf("\n%d", a);

        //Incremento
        a = a + 1;

    }

    //Alterando o valor de 'a'
    a - 1;

    //Primeiro executa uma vez, depois confere a condi��o
    do{

        //Imprimindo 'a' na tela
        printf("\n%d", a);

        //Incremento
        a = a + 1;

    }while(a <= 10);



    system("pause");
}
