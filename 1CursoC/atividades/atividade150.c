#include <stdio.h>

int dadosAlunos(int matricula[], int idade[], float notaFinal[]){
    
    int i;
    for (int i = 0; i < 100; i++){
        printf("Digite o numero de matricula: \n");
        scanf("%d", &matricula[i]);

        if (matricula[i] == 0){
            break;
        }
    

        printf("Digite a idade: \n");
        scanf("%d", &idade[i]);

        printf("Digite a sua nota Final: \n");
        scanf("%f", &notaFinal[i]);

    }
    return i;
}


void imprimeNumMat(int matricula[], float notaFinal[]){

    float maiorNota = -1.0;
    int matriculaMaiorNota = -1;

    for (int i = 0; i < 100; i++) {
        if (matricula[i] == 0) {
            break;
        }

        if (notaFinal[i] > maiorNota) {
            maiorNota = notaFinal[i];
            matriculaMaiorNota = matricula[i];
        }
    }

    if (matriculaMaiorNota != -1) {
        printf("A matricula do aluno com a maior nota (%.2f) é: %d\n", maiorNota, matriculaMaiorNota);
    } else {
        printf("Nenhum aluno cadastrado.\n");
    }
}

void notaAcimaMedia (int matricula[], int idade[], float notaFinal[], int count){

    float soma = 0;

    for (int i = 0; i < count; i++){
        soma += notaFinal[i];
    }

    float media = soma / count;
    printf("\nAluno com notas acima da média (%0.2f):\n", media);

    for (int i = 0; i < count; i++){
        if (notaFinal[i] > media){
            printf("Matrícula: %d | Idade: %d | Nota: %.2f\n", matricula[i], idade[i], notaFinal[i]);
        }
    }
}

void notasAlunoMenos18 (float notaFinal[], int idade[], int count){
    printf("\nNotas dos alunos com menos de 18 anos:\n");
    for (int i = 0; i < count; i++){
         
        if (idade[i] < 18){
            printf("Nota: %.2f\n", notaFinal[i]);
        }
    }
}

int main(){

    int matricula[100];
    int idade[100];
    float notaFinal[100];

    int count = dadosAlunos(matricula, idade, notaFinal);

    imprimeNumMat(matricula, notaFinal);
    notaAcimaMedia(matricula, idade, notaFinal, count);
    notasAlunoMenos18(notaFinal, idade, count);

    return 0;   
}