#include <stdio.h>
#include <String.h>

struct Aluno{
    char nome[30];
    float nota1;
    float nota2;
    float nota3;
    float nota4;
};

typedef struct Aluno aluno;

void cadastro(aluno vet[5], int *qtd){

    for (int i = 0; i < 5; i++){
        printf("Digite o nome do %d aluno: ", i + 1);
        scanf(" %[^\n]", vet[i].nome);

        printf("Digite a nota 1: ");
        scanf("%f", &vet[i].nota1);

        printf("Digite a nota 2: ");
        scanf("%f", &vet[i].nota2);
        
        printf("Digite a nota 3: ");
        scanf("%f", &vet[i].nota3);
        
        printf("Digite a nota 4: ");
        scanf("%f", &vet[i].nota4);
        
        (*qtd)++;
    }
}

void calculaMedia(aluno vet[5], int qtd){
    float media = 0;

    for (int i = 0; i < qtd; i++){
        media = (vet[i].nota1 + vet[i].nota2 + vet[i].nota3 + vet[i].nota4) / 4;

        printf("Nome: %s\n", vet[i].nome);
        printf("Média: %.2f\n", media);
        
        if (media >= 7){
            printf("Classificacao: Aprovado\n");
        }else if(media >= 5 && media < 7){
            printf("Classificacao: Recuperacao\n");
        }else{
            printf("Classificacao: Reprovado\n");
        }  
        
        printf("-------------------------------------\n");
    }
}


int main(){
    
    aluno alunos[5];
    int qtd = 0;

    cadastro(alunos, &qtd);

    calculaMedia(alunos, qtd);

    return 0;
}