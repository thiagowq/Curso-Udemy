#include <stdio.h>
#include <string.h>

int main() {

    //DECLARAÇÂO DE VARIÀVEIS
    char nomeArquivo[30]  = "cadastro.txt";
    char nome[20];
    int telefone;
    FILE *arq;

    //LÊ O ARQUIVO
    arq = fopen("cadastro.txt", "w");

    //SE O ARQUIVO NÂO FOR LIDO
    if(!arq){
        return 1;
    }
    
    //PEDINDO PARA O USUÀRIO DIGITAR O VALOR DO TELEFONE E DEPOIS COMPARANDO NA ESTRUTURA DE REPETIÇÂO
    printf("Digite o valor do telefone");
    scanf("%d", &telefone);

    //ENQUANTO TELEFONE NÂO FOR IGUAL A 0 O LOOP CONTINUA
    while (telefone != 0) {
        printf("Digite o nome: ");
        scanf("%s", nome);
        //GRAVAR NO ARQUIVO
        fprintf(arq, "%s %d \n", nome, telefone);

        printf("Digite o valor do telefone: ");
        scanf("%d", &telefone);

    }

    //FECHANDO O ARQUIVO
    fclose(arq);

    return 0;
}