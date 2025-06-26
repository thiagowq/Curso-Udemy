#include <stdio.h>

void curso(int logica[], int lingProg[]){
    for (int i = 0; i < 15; i++){
        printf("Digite a matricula dos alunos de logica:");
        scanf("%d", &logica[i]);
    }
    
    for (int i = 0; i < 10; i++){
        printf("Digite a matricula dos alunos de Fundamentos de prog: ");
        scanf("%d", &lingProg[i]);
    }

    int encontrou = 0;

    for (int i = 0; i < 15; i++){
        for (int j = 0; i < 10; j++){
            if (logica[i] == lingProg[j]){
                printf("Matricula: %d\n", logica[i]);
                encontrou = 1;
            }
        }
    }
    if (!encontrou) {
        printf("Nenhum aluno cursa as duas disciplinas.\n");
    }

}


int main(){

    int logica[15];
    int lingProg[10];

    curso(logica, lingProg);

    return 0;
}