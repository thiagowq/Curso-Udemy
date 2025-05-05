#include <stdio.h>

int main() {
    int idade, maior_idade = 0, menor_idade = 150, count = 0;
    char sexo;
    float salario, soma_salarios = 0;
    int mulheres_salario_ate_100 = 0;

    while (1) {
        scanf("%d", &idade);
        if (idade < 0) break;

        scanf(" %c", &sexo); 
        scanf("%f", &salario);

        soma_salarios += salario;
        count++;

        if (idade > maior_idade) maior_idade = idade;
        if (idade < menor_idade) menor_idade = idade;

        if (sexo == 'F' || sexo == 'f') {
            if (salario <= 100) mulheres_salario_ate_100++;
        }
    }

    if (count > 0) {
        printf("media salarial: %.2f\n", soma_salarios / count);
        printf("maior idade: %d\n", maior_idade);
        printf("menor idade: %d\n", menor_idade);
        printf("mulheres com salario ate 100: %d\n", mulheres_salario_ate_100);
    }

    return 0;
}
