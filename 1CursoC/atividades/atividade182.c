#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    float n1, n2, n3, n4;
    float media;
};

typedef struct Aluno Aluno;

int cadastrarAlunos(Aluno alunos[]) {
    int qtdAlunos;
    
    scanf("%d", &qtdAlunos);

    for (int i = 0; i < qtdAlunos; i++) {
        scanf(" %[^\n]", alunos[i].nome);
        scanf("%f %f %f %f", &alunos[i].n1, &alunos[i].n2, &alunos[i].n3, &alunos[i].n4);
        alunos[i].media = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3 + alunos[i].n4) / 4;
    }

    return qtdAlunos;
}

void relatorio(Aluno alunos[], int totalAlunos) {
    float somaN1 = 0, somaN2 = 0, somaN3 = 0, somaN4 = 0;
    float maiorNota1 = -1, maiorNota2 = -1, maiorNota3 = -1, maiorNota4 = -1;
    float menorNota1 = 11, menorNota2 = 11, menorNota3 = 11, menorNota4 = 11;
    int indMaior1 = -1, indMaior2 = -1, indMaior3 = -1, indMaior4 = -1;
    int indMenor1 = -1, indMenor2 = -1, indMenor3 = -1, indMenor4 = -1;

    // Encontrar maiores, menores e somar as notas
    for (int i = 0; i < totalAlunos; i++) {
        somaN1 += alunos[i].n1;
        somaN2 += alunos[i].n2;
        somaN3 += alunos[i].n3;
        somaN4 += alunos[i].n4;

        if (alunos[i].n1 > maiorNota1) {
            maiorNota1 = alunos[i].n1;
            indMaior1 = i;
        }
        if (alunos[i].n2 > maiorNota2) {
            maiorNota2 = alunos[i].n2;
            indMaior2 = i;
        }
        if (alunos[i].n3 > maiorNota3) {
            maiorNota3 = alunos[i].n3;
            indMaior3 = i;
        }
        if (alunos[i].n4 > maiorNota4) {
            maiorNota4 = alunos[i].n4;
            indMaior4 = i;
        }

        if (alunos[i].n1 < menorNota1) {
            menorNota1 = alunos[i].n1;
            indMenor1 = i;
        }
        if (alunos[i].n2 < menorNota2) {
            menorNota2 = alunos[i].n2;
            indMenor2 = i;
        }
        if (alunos[i].n3 < menorNota3) {
            menorNota3 = alunos[i].n3;
            indMenor3 = i;
        }
        if (alunos[i].n4 < menorNota4) {
            menorNota4 = alunos[i].n4;
            indMenor4 = i;
        }
    }

    printf("\tResultados Nota 1:\n");
    printf("Media: %.2f\n", somaN1 / totalAlunos);
    printf("Aluno com maior Nota: %s\n", alunos[indMaior1].nome);
    printf("Aluno com menor Nota: %s\n\n", alunos[indMenor1].nome);
    printf("-----------------------------------------\n");

    printf("\tResultados Nota 2:\n");
    printf("Media: %.2f\n", somaN2 / totalAlunos);
    printf("Aluno com maior Nota: %s\n", alunos[indMaior2].nome);
    printf("Aluno com menor Nota: %s\n\n", alunos[indMenor2].nome);
    printf("-----------------------------------------\n");

    printf("\tResultados Nota 3:\n");
    printf("Media: %.2f\n", somaN3 / totalAlunos);
    printf("Aluno com maior Nota: %s\n", alunos[indMaior3].nome);
    printf("Aluno com menor Nota: %s\n\n", alunos[indMenor3].nome);
    printf("-----------------------------------------\n");

    printf("\tResultados Nota 4:\n");
    printf("Media: %.2f\n", somaN4 / totalAlunos);
    printf("Aluno com maior Nota: %s\n", alunos[indMaior4].nome);
    printf("Aluno com menor Nota: %s\n\n", alunos[indMenor4].nome);
    printf("-----------------------------------------\n");
}

void encontrarMelhorAluno(Aluno alunos[], int totalAlunos) {
    float maiorMedia = alunos[0].media;
    int indice = 0;

    for (int i = 1; i < totalAlunos; i++) {
        if (alunos[i].media > maiorMedia) {
            maiorMedia = alunos[i].media;
            indice = i;
        }
    }

    printf("Nome: %s -- Media: %0.2f\n\n", alunos[indice].nome, maiorMedia);
}

int main() {
    Aluno alunos[50];
    int totalAlunos = cadastrarAlunos(alunos);

    encontrarMelhorAluno(alunos, totalAlunos);
    relatorio(alunos, totalAlunos);

    return 0;
}