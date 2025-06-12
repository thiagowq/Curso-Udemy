#include <stdio.h>
#include <string.h>

struct aluno{
    int numeroMatricula;
    char nome[20];
    float nota1, nota2, nota3;
};

typedef struct aluno aluno;

int main(){

    aluno aluno[5];

    int indiceMaior = 0;
    float maiorMedia = 0;

    for (int i = 0; i < 5; i++){
        printf("Digite seu nome:\n");
        scanf(" %20[^\n]", aluno[i].nome);

        printf("Digite o numero de matricula:\n");
        scanf("%d", &aluno[i].numeroMatricula);

        printf("Digite sua nota na prova 1:\n");
        scanf("%f", &aluno[i].nota1);
    
        printf("Digite sua nota na prova 2:\n");
        scanf("%f", &aluno[i].nota2);
    
        printf("Digite sua nota na prova 3:\n");
        scanf("%f", &aluno[i].nota3);
        
        float media = aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3 / 3;

        if (media > maiorMedia){
            maiorMedia = media;
            indiceMaior = i;
        }
        
    }

    printf("\nAluno com maior media:\n");
    printf("Nome: %s\n", aluno[indiceMaior].nome);
    printf("Matricula: %d\n", aluno[indiceMaior].numeroMatricula);
    printf("Notas: %.2f, %.2f, %.2f\n", aluno[indiceMaior].nota1, aluno[indiceMaior].nota2, aluno[indiceMaior].nota3);
    printf("Media: %.2f\n", maiorMedia):

    return 0;
}
