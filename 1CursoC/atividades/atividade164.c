#include <stdio.h>
#include <math.h>
#include <string.h>
#define TAM 50

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){

    tipo_pessoa pes;

    pes.idade = 0;
    pes.peso = 0.0;
    strcpy(pes.nome, "Teste");

    printf("Inicio:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %0.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    pes.idade = 10;
    pes.peso = 99.99;
    strcpy(pes.nome, "Texto");

    printf("\nAlterando os campos via codigo:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %0.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    printf("\nInsira um numero inteiro:\n");
    scanf("%d", &pes.idade);
    printf("Insira um numero real: \n");
    scanf("%f", &pes.peso);
    printf("Insira uma palavra: \n");
    scanf("%s", &pes.nome);

    printf("\nAlterando com dados do usuario:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %0.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);
    
    return 0;
}
