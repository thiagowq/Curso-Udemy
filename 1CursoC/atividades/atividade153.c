#include <stdio.h>
#include <string.h>

int armazenaDados(char nomeVendedor[][50], int idade[], float totalVendido[]){
    int i;
    for (i = 0; i < 100; i++){
        printf("Digite o nome do vendedor (ou 0 para parar):\n ");
        scanf(" %49[^\n]", nomeVendedor[i]);
        
        if (strcmp(nomeVendedor[i], "0") == 0){
            break;
        }
        
        printf("Digite a idade: \n");
        scanf("%d", &idade[i]);

        printf("Digite o total vendido: \n");
        scanf("%f", &totalVendido);
    }
    return i;
}

void codigoMaisV (char nomeVendedor[], int idade[], float totalVendido[]){

    if (strcmp(nomeVendedor[i], "0") == 0){
        break;
    }

    int idadeMaisV = 0;
    char nomeV = 0;

    for (int i = 0; i < count; i++)
    {
        if (idade[i] > idadeMaisV){
            idadeMaisV = idade[i];
            nomeV = idadeMaisV;
        }
    }
    
    




    
}

int main(){

    char nomeVendedor[100][50], idade[100];
    float totalVendido[100];
    
    int n = armazenaDados(nomeVendedor, idade, totalVendido);


    return 0;
}