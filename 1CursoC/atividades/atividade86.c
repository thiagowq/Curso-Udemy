#include <stdio.h>
#include <stdlib.h>

int main (){

    float num, s = 0.0;

    printf("Digite um numero inteiro positivo:");
    scanf("%f", &num);

    for (float i = 1; i <= num; i++)
    {
        float termo = 1.0 / i;
        s += termo;

    if (i == 1){
        printf("%0.2f\n", termo);
    }else if (i == 2)
    {
        printf("%0.2f\n", termo);
    }else if (i == 3)
    {
        printf("%0.2f\n", termo);
    }else{
        printf("%0.2f\n", termo, i);
    }
    
}

    printf("%0.2f\n", s);
    
    return 0;
}