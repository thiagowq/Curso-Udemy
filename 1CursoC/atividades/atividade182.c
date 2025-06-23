#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Aluno{
    char nome[20];
    float n1, n2, n3, n4;
    float media;
};

typedef struct Aluno Aluno;

int cadastrarAlunos(Aluno alunos[]){
    int qtdAlunos;
    int cont = 0;
    
    printf("Digite quantos alunos vão ser cadastrados:");
    scanf("%d", &qtdAlunos);

    for (int i = 0; i < qtdAlunos; i++){
        printf("Digite o nome do aluno:");
        scanf(" %[^\n]", alunos[i].nome);
    
        printf("Digite a nota 1: ");
        scanf("%f", &alunos[i].n1);

        printf("Digite a nota 2: ");
        scanf("%f", &alunos[i].n2);

        printf("Digite a nota 3: ");
        scanf("%f", &alunos[i].n3);

        printf("Digite a nota 4: ");
        scanf("%f", &alunos[i].n4);

        cont++;
    }
    printf("Alunos Cadastrados: %d\n", cont);

    return qtdAlunos;
}

float calcularMedia(Aluno aluno){
    return (aluno.n1 + aluno.n2 + aluno.n3 + aluno.n4) / 4;
}

void ecnotrarMelhorAluno(Aluno alunos[], int n){
    float maiorMedia = alunos[0].media;
    int indiceMaior = 0;
    
    for (size_t i = 0; i < n; i++){
        if (alunos[i].media > maiorMedia){
            maiorMedia = alunos[i].media;
            indiceMaior = i;
        }    
    }
    
    printf("\nAluno com a maior média:\n");
    printf("Nome: %s | Média: %.2f\n", alunos[indiceMaior].nome, alunos[indiceMaior].media);
     
}

int main(){

    Aluno alunos[50];

    int total = cadastrarAlunos(alunos);

    printf("\nLista de alunos cadastrados:\n");
    for (int i = 0; i < total; i++) {
        printf("Nome: %s | Média: %.2f\n",
               alunos[i].nome, alunos[i].media);
    }

    encontrarMelhorAluno(alunos);

    return 0;
}