#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main(){

int valor;
char estado;

scanf("%d", &valor);
scanf("$%d", &estado);


switch(valor){

 case 'M':  valor * 70/100;
     printf("Minas Gerais %d", valor);
     break;
 case 'S': valor * 120/100;
    printf("São Paulo");
    break;
 case 'R': valor * 150/100;
    printf("Rio de Janeiro");
    break;
 case 'T': valor * 80/100;
    printf("Mato grosso do Sul");
    break;

}







system("pause");

return 0;

}
