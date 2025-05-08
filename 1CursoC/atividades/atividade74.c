#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){


    char senhacorreta[] = "3455";
    char senhadigitada[20];
    int tentativas = 0;

    while (tentativas < 3){

        printf("Digite a senha:");
        scanf("%s", senhadigitada);

        if (strcmp(senhadigitada, senhacorreta) == 0)
        {
            printf("Acesso concedido!");
            return 0;
        }else{
            printf("Senha incorreta. Tente novamente. \n");
            tentativas++;
        }
        
    }
    
    printf("Numero maximo de tentativas atingido. Acesso negado. \n");

    return 0;
}