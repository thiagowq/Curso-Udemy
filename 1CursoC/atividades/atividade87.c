#include <stdio.h>

int main() {
    int idade, maiorIdade = 0, menorIdade = 150;
    char sexo;
    float salario, somaSalario = 0;
    int totalPessoas = 0, mulheresSalarioBaixo = 0;

    while (1) {
        printf("Digite a idade (valor negativo para encerrar): ");
        scanf("%d", &idade);

        if (idade < 0) {
            break;
        }

        // Sexo
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);  // espaço antes do %c para limpar o buffer

        // Salário
        printf("Digite o salário: ");
        scanf("%f", &salario);

        // Acumula salário e conta pessoas
        somaSalario += salario;
        totalPessoas++;

        // Verifica maior e menor idade
        if (idade > maiorIdade) {
            maiorIdade = idade;
        }
        if (idade < menorIdade) {
            menorIdade = idade;
        }

        // Conta mulheres com salário até R$ 100,00
        if (sexo == 'F' || sexo == 'f') {
            if (salario <= 100.0) {
                mulheresSalarioBaixo++;
            }
        }
    }

    if (totalPessoas > 0) {
        printf("\nmedia salarial: %.2f\n", somaSalario / totalPessoas);
        printf("maior idade: %d\n", maiorIdade);
        printf("menor idade: %d\n", menorIdade);
        printf("mulheres com salario ate 100: %d\n", mulheresSalarioBaixo);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}
