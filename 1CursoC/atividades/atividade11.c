#include <stdio.h>
#include <math.h>

int main() {
    char sexo;
    double peso, altura, peso_ideal, imc, novo_imc, excesso;

    scanf(" %c", &sexo);
    scanf("%lf", &peso);
    scanf("%lf", &altura);

    if (sexo == 'M') {
        peso_ideal = (72.7 * altura) - 58;
    } else if (sexo == 'F') {
        peso_ideal = (62.1 * altura) - 44.7;
    } else {
        return 1;
    }

    imc = peso / (altura * altura);

    printf("%.2lf\n", peso_ideal);
    printf("%.2lf\n", imc);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Peso normal\n");
    } else if (imc < 30) {
        printf("Acima do peso\n");
    } else {
        printf("Obeso\n");
    }

    if (peso > peso_ideal) {
        excesso = peso - peso_ideal;
        novo_imc = peso_ideal / (altura * altura);
        printf("%.2lf\n", excesso);
        printf("%.2lf\n", novo_imc);
    }

    return 0;
}
