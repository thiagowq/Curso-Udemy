#include <stdio.h>
#include <stdlib.h>

int main(){

    float numeros;
    int intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0;

    for (int i = 1; i < 1000; i++)
    {
        scanf("%f", &numeros);
    
        if (numeros < 0 || numeros < 0.1)
        {
            break;
        }else if (numeros > 0 && numeros <= 25 )
        {
            intervalo1++;

        }else if (numeros >= 26 && numeros <= 50)
        {
            intervalo2++;

        }else if (numeros >= 51 && numeros <= 75)
        {
            intervalo3++;

        }else if (numeros >= 76 && numeros <= 100)
        {
            intervalo4++;
        }
    }
    
    printf("%d \n",intervalo1);
    printf("%d \n",intervalo2);
    printf("%d \n",intervalo3);
    printf("%d \n",intervalo4);


    return 0;
}