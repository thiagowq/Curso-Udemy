#include <stdio.h>
#include <stdlib.h>

//Funcão principal do programa
void main(){

    //Definindo variáveis
    int a = 5, opcao = 3;
    float b = 2.5;
    char c = 'x';

    //Condicional Simples
    if(a == 5){
        printf("\n A variavel a =5");
    }
    if(b == 2.5){
        printf("\n A variavel b =2.5");
    }
    if(c == 'x'){
        printf("\n A variavel c = Letra x");
    }

    //Numero par ou impar
    if(a % 2 == 1){
        printf("\n A viariavel a eh impar");
    }else{
        printf ("\n A viriavel a eh par");
    }

    //Condicional Composta
    if(opcao == 1){
        printf("\n A opcao eh = 1");
    }else if(opcao == 2){
        printf("\n A opcao = 2 ");
    }else{
        printf("\n A opcao nao eh igual a 1 e nem igual a 2");
    }

    //Pausa o programa após executar
    system("pause");


}
