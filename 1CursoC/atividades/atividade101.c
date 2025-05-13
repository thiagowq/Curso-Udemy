#include <stdio.h>
#include <stdio.h>

int main(){

    int senha = 1234, senhaDigitada;

    for (int i = 1; i <= 3; i++)
    {
        printf("Digite a senha de 4 digitos:");
        scanf("%d", &senhaDigitada);

        if (senha != senhaDigitada)
        {
           printf("Senha incorreta!\n");
        }
        else if (senha == senhaDigitada)
        {
            printf("Senha correta!");
            break;
        }
    }
    
    return 0;
}