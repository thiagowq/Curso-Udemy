#include <stdio.h>
#include <math.h>
#include <string.h>
#define TAM 3

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){

    tipo_pessoa lista[TAM];
    int i;

    for (i = 0; i < TAM; i++){
        printf("Insira os dados (%d) :\n", i+1);
        puts("Nome");
        scanf("%50[^\n]s", &lista[i].nome);

        puts("Idade:\n");
        scanf("%d", &lista[i].idade);
        fflush(stdin);

        puts("Peso:\n");
        scanf("%f", &lista[i].peso);
        fflush(stdin);
    }
    
    system("cls");
    
    puts("Seus dados: \n");
    for (i = 0; i < TAM; i++){
        printf("----- Pessoa %d -----\n", i+1);
        printf("\tNome: %s\n", lista[i].nome);
        printf("\tIdade: %d\n", lista[i].idade);
        printf("\tPeso: %0.2f\n", lista[i].peso);
    }

    printf("-----------------------------------------\n");
    
    return 0;
}
