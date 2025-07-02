#include <stdio.h>
#include <string.h>

struct Funcionario{
    char nome[40];
    float salario;
};

typedef struct Funcionario funcionario;

void cadastraFunc(funcionario vet[]){
    for (int i = 0; i < 5; i++){
        printf("Digite o nome do Funcionario %d: ", i + 1);
        scanf(" %[^\n]", vet[i].nome);

        printf("Digite o salario do Funcionario %d: ", i + 1);
        scanf("%f", &vet[i].salario);
    }   
}

void ordenaPorNome(funcionario vet[]){
    funcionario temp;
    for (int i = 0; i < 4; i++){
        for (int j = i + 1; j < 5; j++){
            if (strcmp(vet[i].nome, vet[j].nome) > 0){
                temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }    
       }    
    }    
}

void exibeFunc(funcionario vet[]){
    printf("\nFuncionarios em ordem alfabetica:\n");
    for (int i = 0; i < 5; i++){
        printf("%s\n", vet[i].nome);
    }
}

int main(){
    
    funcionario funcionario[5];

    cadastraFunc(funcionario);
    ordenaPorNome(funcionario);
    exibeFunc(funcionario);
    
    return 0;
}