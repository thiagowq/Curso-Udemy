#include <stdio.h>
#include <stdlib.h>

void main(){

    //Definindo variáveis
    int a = 1, b = 10;


    //Contando ate 10
    while(a <= 10){

        //Imprimindo 'a' na tela
        printf("\n%d", a);

        //Incremento
        a = a + 1;

    }

    //Contagem regressiva
    while(b >= 1){
        //Imprimindo 'a' na tela
        printf("\n%d", b);

       //Incremento
        b = b - 1;
}

    system("pause");
}
