#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){

    setlocale (LC_ALL,"Portuguese");

    //Responsável por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    //Variável que recebe o resto da divisão do número por 3 (aleatório entre 0 e 3)
    int aleatorio = rand() % 3;

    //Variável que recebe o resto da divisão do número por 5 (aleatório
    int aleatorioSegundo = (rand() % 5) + 1;


    //Impprime o valor
    printf("%d", aleatorio);

    aleatorioSegundo = (rand() % 5) + 1;

     printf("%d", aleatorioSegundo);

    system("pause");
}
