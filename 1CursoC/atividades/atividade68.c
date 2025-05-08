#include <stdio.h>
#include <math.h>


int main() {

    int n1;

    while (1)
    {
        printf("Digite um número inteiro positivo:");
        scanf("%d", &n1);

        if (0 > n1)
        {
            break;
        }
        
        int raiz = sqrt(n1);

        if( raiz * raiz == n1){
            printf("%d e quadrado perfeito\n", n1);
        }else{
            printf("%d nao e quadrado perfeito\n", n1);
        }
        
        
    }





    return 0;
}
