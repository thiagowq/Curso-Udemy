#include <stdio.h>
#include <string.h>

struct aluno{
    char nome[30];
    int idade;
    char curso[20];
    int periodo;
    int anoIngresso;
};

typedef struct aluno tipoAluno;

void imprimeAluno(tipoAluno vetAluno[]){
    for (int i = 0; i < 3; ++i) {
        printf("%s\t%d\t%s\t%d\t%d\n", vetAluno[i].nome, vetAluno[i].idade, vetAluno[i].curso, vetAluno[i].periodo, vetAluno[i].anoIngresso);
    }   
}

int main() {
    
    tipoAluno alunos[3];
    float media = 0; 
    int cursoA = 0;
    int cursoB = 0;
    int totalPeriodizados = 0;
    int periodoCalculado = 0;
    int maiorIdade;
    int maiorAno;
    int indiceMaiorIdade = 0;
    int indiceAnodeIngresso = 0;

    for (int i = 0; i < 3 ; ++i) {
        printf("Digite o nome do aluno:\n");
        scanf("%s", alunos[i].nome);
        printf("Digite a idade do aluno:\n");
        scanf("%d", &alunos[i].idade);
        printf("Digite o curso do aluno:\n");
        scanf("%s", alunos[i].curso);
        printf("Digite o periodo:\n");
        scanf("%d", &alunos[i].periodo);
        printf("Digite o ano de ingresso:\n");
        scanf("%d", &alunos[i].anoIngresso);

        media = media + alunos[i].idade;

        if(strcmp(alunos[i].curso, "cursoA") == 0){
            cursoA++;
        }else{
            cursoB++;
        }

        periodoCalculado = (2026 - alunos[i].anoIngresso) * 2;
        if(periodoCalculado == alunos[i].periodo){
            totalPeriodizados++;
        }

        if (i == 0){
            maiorIdade = alunos[i].idade;
            maiorAno = alunos[i].anoIngresso;
            indiceMaiorIdade = i;
            indiceAnodeIngresso = i;
        }

        if(alunos[i].idade > maiorIdade){
            maiorIdade = alunos[i].idade;
            indiceMaiorIdade = i;
        }

        if(alunos[i].anoIngresso < maiorAno){
            maiorAno = alunos[i].anoIngresso;
            indiceAnodeIngresso = i;
        }

    }

    media = media/3;

    printf("A media de idades dos alunos é: %0.2f\n", media);



    if(cursoA > cursoB){
        printf("O curso A tem mais alunos na amostra\n");
    }else{
        printf("O curso B tem mais alunos na amostra\n");
    }

    printf("Na amostra há %d periodizados\n", totalPeriodizados);

    printf(" O aluno %s é o mais velho da amostra, com %d anos\n", alunos[indiceMaiorIdade].nome, alunos[indiceMaiorIdade].idade);

    printf("O aluno mais antigo da amostra é o %s do curso %s\n", alunos[indiceAnodeIngresso].nome, alunos[indiceAnodeIngresso].curso);

    imprimeAluno (alunos);

    return 0;
 }
