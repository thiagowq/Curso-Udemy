#include <stdio.h>

int main(){

    struct horario{
        int *pHora;
        int *pMinuto;
        int *pSegundo;
    };
    
    struct horario hoje;

    int hora = 200;
    int minuto = 300;
    int segundo = 400;
    
    //acessando o membro ponteiro de uma estrutura e fazendo ele apontar em um determinado edereço de memória
    hoje.pHora = &hora;
    hoje.pMinuto = &minuto;
    hoje.pSegundo = &segundo;

    //Como acessar o valor do ponteiro
    printf("Hora - %d\n", *hoje.pHora);
    printf("Minuto - %d\n", *hoje.pMinuto);
    printf("Segundo - %d\n", *hoje.pSegundo);

    // com * acessa o valor e sem aterisco acessa o endereço
    *hoje.pSegundo = 1000;

    printf("Segundo - %d\n", *hoje.pSegundo);



    return 0;
}