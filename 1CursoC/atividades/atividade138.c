#include <stdio.h>

int main(){

    struct horario{
        int hora;
        int minuto;
        int segundo;
    };

    struct horario agora, *depois;
    depois = &agora;

    /*isso é igual ao de baixo;
    (*depois).hora = 20;
    (*depois).minuto = 20;
    (*depois).segundo = 20;*/

    depois->hora = 20;
    depois->minuto = 80;
    depois->segundo = 50;

    int somatorio = 100;

    struct horario antes;
    
    antes.hora = somatorio + depois->segundo;
    antes.minuto = agora.hora + depois->minuto;
    antes.segundo = depois->minuto + depois->segundo;

    printf("%d: %d: %d", antes.minuto, antes.minuto, antes.segundo);    

    return 0;
}