#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){

    setlocale (LC_ALL,"Portuguese");

    //Respons�vel por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    //Vari�vel que recebe o resto da divis�o do n�mero por 3 (aleat�rio entre 0 e 3)
    int aleatorio = rand() % 3;

    //Vari�vel que recebe o resto da divis�o do n�mero por 5 (aleat�rio
    int aleatorioSegundo = (rand() % 5) + 1;


    //Impprime o valor
    printf("%d", aleatorio);

    aleatorioSegundo = (rand() % 5) + 1;

     printf("%d", aleatorioSegundo);

    system("pause");
}
