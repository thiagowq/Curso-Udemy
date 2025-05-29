#include <stdio.h>

int main(){

    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    double soma = *pX + *pY;

    int *resultado;
    resultado = &x;
    resultado = 6422272;

    printf("Endereco x = %d - Valor x = %d\n", pX, *pX);
    printf("Endereco y = %d - Valor y = %0.2f\n", pY, *pY);
    printf("Endereco z = %d - Valor z = %c\n", pZ, *pZ);

    printf("Valor x = %0.2f\n", soma);
    
    printf("Valor x = %d\n", resultado);
    printf("Valor x = %d\n", *resultado);

    return 0;
}