#include <stdio.h>

int main() {

    /*Questão 5: Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade, sexo (M/F) e salário. Faça um algoritmo que informe:
    a) a média de salário do grupo;
    b) maior e menor idade do grupo;
    c) quantidade de mulheres com salário até R$100,00.
    Encerre a entrada de dados quando for digitada uma idade negativa. (Use o comando enquanto-faça) */

    
    int idade, maiorIdade = 0, menorIdade = 999, mulheresSalarioBaixo = 0;
    int contador = 0;
    char sexo;
    float salario, somaSalarios = 0.0;
        
    do {
        printf("\nDigite a idade (negativa para encerrar): ");
        scanf("%d", &idade);

        if (idade < 0) {
            break;  // Encerra o loop se a idade for negativa
        }

        // Atualiza maior e menor idade
        if (idade > maiorIdade) {
            maiorIdade = idade;
        }
        if (idade < menorIdade) {
            menorIdade = idade;
        }

        // Leitura do sexo
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo); // espaço antes do %c ignora o enter anterior

        // Leitura do salário
        printf("Salário: R$");
        scanf("%f", &salario);

        // Soma os salários
        somaSalarios += salario;
        contador++; // conta as pessoas válidas

        // Conta mulheres com salário até R$100,00
        if (sexo == 'F' || sexo == 'f') {
            if (salario <= 100.0) {
                mulheresSalarioBaixo++;
            }
        }

    }while (1);

    if (contador > 0){
     float mediaSalario = somaSalarios / contador;

        printf("\n--- RESULTADOS ---\n");
        printf("Média de salário do grupo: R$%.2f\n", mediaSalario);
        printf("Maior idade do grupo: %d anos\n", maiorIdade);
        printf("Menor idade do grupo: %d anos\n", menorIdade);
        printf("Número de mulheres com salário até R$100,00: %d\n", mulheresSalarioBaixo);

    }else{
        printf("Nenhum dado válido foi inserido");
    }

    return 0;
}
