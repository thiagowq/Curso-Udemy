#include <stdio.h>
int infoPaciente (int ID[], int idade[], float peso[]){
    int i;
    for (i = 0; i < 100; i++){
        printf("Digite o ID do paciente:");
        scanf("%d", &ID[i]);

        if (ID[i] == 0){
            break;
        }
        
        printf("Digite a idade do paciente:\n");
        scanf("%d", &idade[i]);

        printf("Digite o peso do paciente:\n");
        scanf("%f", &peso[i]);
    }
    return i;
}

void retornaID (int ID[], int idade[], int n){

    if (n == 0){
        printf("Nenhum paciente foi cadastrado.\n");
        return;
    }

    int idadeMaior = idade[0];
    int IDMaior = ID[0];

    for (int i = 0; i < n; i++)
    {
        if (idade[i] > idadeMaior ){
            idadeMaior = idade[i];
            IDMaior = ID[i];
        }
    }
    
    printf("O ID do paciente mais velho é %d e a idade é %d\n", IDMaior, idadeMaior);
} 

void pesoAcima( int ID[], int idade[], float peso[], int n){
    
    float soma = 0, media;
    for (int i = 0; i < n; i++) {
        soma += peso[i];
    }
    media = soma / n;

    printf("Pacientes com peso acima da média (%.2f):\n", media);
    for (int i = 0; i < n; i++) {
        if (peso[i] > media) {
            printf("ID: %d, Idade: %d, Peso: %.2f\n", ID[i], idade[i], peso[i]);
        }
    }
}


void pesoAbaixo(int idade[], int ID[], float peso[], int n){
    printf("Peso os pacientes com menos de 40 anos:\n");
    for (int i = 0; i < n; i++){
        if (idade[i] < 40){
            printf("ID: %d\nPeso:%0.2f\n", ID[i], peso[i]);
        }    
    }
}

int main(){

    int ID[100], idade[100];
    float peso[100];

    int n = infoPaciente(ID, idade, peso);
    retornaID(ID, idade, n);
    pesoAcima(ID, idade, peso, n);
    pesoAbaixo(idade, ID, peso, n);

    return 0;
}