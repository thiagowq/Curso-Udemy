#include <stdio.h>
#include <string.h>

struct dados{
        char nome[20];
        int idade;
        char endereco[30];
};

typedef struct dados tipoDados;

void imprimeDados(tipoDados vetDados[]){
    for (int i = 0; i < 1; i++){
        printf("%s, %d, %s\n", vetDados[i].nome, vetDados[i].idade, vetDados[i].endereco);
    }
    
}

int main(){

    tipoDados armazenaDados[1];

    printf("Digite o nome:\n");
    fgets(armazenaDados[0].nome, 20, stdin);
    armazenaDados[0].nome[strcspn(armazenaDados[0].nome, "\n")] = '\0';

    printf("Digite a idade:\n");
    scanf("%d", &armazenaDados[0].idade);
    getchar();

    printf("Digite o endereço:\n");
    fgets(armazenaDados[0].endereco, 30, stdin);
    armazenaDados[0].endereco[strcspn(armazenaDados[0].endereco, "\n")] = '\0';

    imprimeDados(armazenaDados);

    return 0;
}