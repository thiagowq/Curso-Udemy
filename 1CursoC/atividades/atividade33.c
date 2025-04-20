#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

int N;
float soma = 0.0;

 // Solicita o número de alunos
printf("Digite o número de alunos: ");
scanf("%d", &N);

float notas[N]; // Criação de um array paraarmazenar as notas

// Recebe as notas dos alunos
for (int i = 0; i < N; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i]; // Soma as notas
}

// Calcula e exibe a média geral
float media = soma / N;
printf("A média geral da turma é: %.2f\n", media);

    return 0;
}

