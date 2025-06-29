#include <stdio.h>
#include <string.h>


struct pessoa{
    char nome[30];
    int idade;
};

typedef struct pessoa pessoa;

void cadastrar(pessoa p[]){
    for (int i = 0; i < 3; i++){
        printf("Digite os dado da pessoa %d\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", p[i].nome) ;

        printf("idade: ");
        scanf("%d", &p[i].idade);
    }
}

int main(){

    pessoa lista[3];
    cadastrar(lista);

    printf("----------------Dados cadastrados--------------\n");

    for (int i = 0; i < 3; i++){
        printf("Nome: %s\n", lista[i].nome);
        printf("Idade: %d\n", lista[i].idade);
    }

    return 0;
}
