#include <stdio.h>

/*Uma empresa deseja armazenar e analisar os dados de seus funcionários. Cada funcionário possui as seguintes informações:

Código (valor inteiro positivo)
Idade (valor inteiro)
Salário (valor real)
 O número máximo de funcionários é 100, mas pode haver menos. O código 0 deve ser utilizado como condição de parada durante a entrada de dados (ou seja, o cadastro termina quando um código 0 for informado).

 Implemente um programa em C que contenha:

 Uma função para ler os dados dos funcionários, armazenando as informações em uma matriz e que retorne o total de funcionários lidos. A leitura dos dados deve parar quando o usuário digitar o código 0 ou atingir o limite de 100 funcionários. A função deverá se chamar carregaFuncionarios.
 Uma função que retorne o código do funcionário mais velho. A função deverá se chamar funcMaisVelho.
 Uma função que imprima o código e a idade dos funcionários que recebem salário acima da média da empresa. A função deverá se chamar salMaiorMedia.
 Uma função que crie um vetor contendo apenas os salários dos funcionários com menos de 30 anos, e retorne esse vetor juntamente com a quantidade de elementos válidos (tamanho do vetor). Essa função deverá se chamar salarioJovens.
 A função main deverá chamar todas as funções criadas e deverá obedecer ao seguinte fluxo:

 Carregar os dados dos funcionários
Imprimir o código do funcionário mais velho (printf(“%d\n”, ...));
Imprimir o código e a idade dos funcionários que recebem salário acima da média da empresa (printf(“%d\t%d\n”, ...));
Imprimir os salários dos funcionários com menos de 30 anos (printf(“%d\n”, ...))*/

void carregaFuncionarios(int cod[], int idade[], float sal[], int *n) {
    int i = 0;
    while (1) {
        scanf("%d", &cod[i]);
        if (cod[i] == 0) break;
        scanf("%d", &idade[i]);
        scanf("%f", &sal[i]);
        i++;
    }
    *n = i;
}

void funcMaisVelho(int cod[], int idade[], int n) {
    int maisVelho = 0;
    for (int i = 1; i < n; i++) {
        if (idade[i] > idade[maisVelho])
            maisVelho = i;
    }
    printf("%d\n", cod[maisVelho]);
}

void salMaiorMedia(int cod[], int idade[], float sal[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += sal[i];
    }
    float media = soma / n;

    for (int i = 0; i < n; i++) {
        if (sal[i] > media) {
            printf("%d\t%d\n", cod[i], idade[i]);
        }
    }
}

void salarioJovens(int idade[], float sal[], int n) {
    for (int i = 0; i < n; i++) {
        if (idade[i] < 30) {
            printf("%.0f\n", sal[i]);
        }
    }
}

int main() {
    int cod[100], idade[100], n;
    float sal[100];

    carregaFuncionarios(cod, idade, sal, &n);
    funcMaisVelho(cod, idade, n);
    salMaiorMedia(cod, idade, sal, n);
    salarioJovens(idade, sal, n);

    return 0;
}
