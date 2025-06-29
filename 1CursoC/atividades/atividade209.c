#include <stdio.h>
#include <string.h>

struct Aluno{
    char nome[30];
    char curso[30];
    int matricula;
};

typedef struct Aluno aluno;

void cadastroAluno(aluno vet[], int tam){
    for (int i = 0; i < tam; i++){
        printf("Digite a matricula do aluno %d (0 para parar) :", i + 1);
        scanf("%d", &vet[i].matricula);
        
        if (vet[i].matricula == 0){
            break;
        }
        
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", vet[i].nome);

        printf("Digite o curso do aluno %d: ", i + 1);
        scanf(" %[^\n]", vet[i].curso);
    }
}

void buscarAluno(aluno vet[], int tam, char buscaA[]){
    int encontrou = 0;
    for (int i = 0; i < tam; i++){
        if (vet[i].matricula == 0){
            break;
        }        
    
        if (strcmp(buscaA, vet[i].nome) == 0){
            printf("Nome: %s\n", vet[i].nome);
            printf("Curso: %s\n", vet[i].curso);
            printf("Matricula: %d\n", vet[i].matricula);
            encontrou = 1;
            break;
        }
    }
    
    if(!encontrou){
        printf("Não encontramos esse nome! \n"); 
    }
}


int main(){

    aluno aluno[100];
    char buscaA[30];

    cadastroAluno(aluno, 100);
    
    printf("Digite o nome do aluno que deseja buscar: ");
    scanf(" %[^\n]", buscaA);

    buscarAluno(aluno, 100, buscaA);

    return 0;
}