#include <stdio.h>
#include <string.h>

int main(){
    //DECLARAÇÂO DE VARIAVEIS
    char nomeArquivo[30] = "entrada.txt";
    char palavra[20];
    int contador = 0;
    char palavraLida[20];
    FILE *arq;


    //LER O NOME DO ARQUIVO E ABRIR O ARQUIVO
    printf("Digite o nome do arquivo:");
    scanf("%s", nomeArquivo);

    arq = fopen(nomeArquivo, "r");

    if(!arq){
        return 1;
    }

    //LER A PALAVRA DESEJADA
    printf("Digite a palavra desejada:");
    scanf("%s", palavra);

    //PERCORRER O ARQUIVO
    while (!feof(arq)){//ENQUANTO NÂO FO FINAL DO ARQUIVO FICA NO LOOP
        fscanf(arq, "%s", palavraLida);
        if(strcmp(palavra, palavraLida) == 0) {
            contador++;
        }
    }

    //FECHAR O ARQUIVO
    fclose(arq);

    //IMPRIMIR O VALOR DO CONTADOR
    printf("A palavra %s aparece %d vezes no arquivo", palavra, contador);

    return 0;
}