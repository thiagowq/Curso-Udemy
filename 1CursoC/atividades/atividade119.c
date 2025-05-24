#include <stdio.h>

#define NUM_ESTACOES 5
#define NUM_DIAS 7

void lerTemperatura(float mat[NUM_ESTACOES][NUM_DIAS]) {
    for (int i = 0; i < NUM_ESTACOES; i++) {
        for (int j = 0; j < NUM_DIAS; j++) {
            scanf("%f", &mat[i][j]);
        }
    }
}

void ordena(float vet[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (vet[j] > vet[j + 1]) {
                float aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
    }
}

float media(float vet[], int tam) {
    float soma = 0;
    for (int i = 0; i < tam; i++) {
        soma += vet[i];
    }
    return soma / tam;
}

float mediana(float vet[], int tam) {
    ordena(vet, tam);
    return vet[tam / 2];
}

float maior(float vet[], int tam) {
    float m = vet[0];
    for (int i = 1; i < tam; i++) {
        if (vet[i] > m)
            m = vet[i];
    }
    return m;
}

float menor(float vet[], int tam) {
    float m = vet[0];
    for (int i = 1; i < tam; i++) {
        if (vet[i] < m)
            m = vet[i];
    }
    return m;
}

float amplitude(float vet[], int tam) {
    return maior(vet, tam) - menor(vet, tam);
}

void preencherResumo(float temp[NUM_ESTACOES][NUM_DIAS], float resumo[NUM_ESTACOES][5]) {
    for (int i = 0; i < NUM_ESTACOES; i++) {
        float copia[NUM_DIAS];
        for (int j = 0; j < NUM_DIAS; j++) {
            copia[j] = temp[i][j];
        }

        resumo[i][0] = media(copia, NUM_DIAS);
        resumo[i][1] = mediana(copia, NUM_DIAS);
        resumo[i][2] = maior(copia, NUM_DIAS);
        resumo[i][3] = menor(copia, NUM_DIAS);
        resumo[i][4] = amplitude(copia, NUM_DIAS);
    }
}

int main() {
    float temperaturas[NUM_ESTACOES][NUM_DIAS];
    float resumo[NUM_ESTACOES][5];
    int opcao;

    lerTemperatura(temperaturas);
    preencherResumo(temperaturas, resumo);

    while (1) {
        scanf("%d", &opcao);
        if (opcao == 6) break;

        switch (opcao) {
            case 1:
                for (int i = 0; i < NUM_ESTACOES; i++) {
                    for (int j = 0; j < NUM_DIAS; j++) {
                        printf("%0.2f\t", temperaturas[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                for (int i = 0; i < NUM_ESTACOES; i++) {
                    for (int j = 0; j < 5; j++) {
                        printf("%0.2f\t", resumo[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3: {
                int estacao;
                scanf("%d", &estacao);
                for (int j = 0; j < 5; j++) {
                    printf("%0.2f\t", resumo[estacao][j]);
                }
                printf("\n");
                break;
            }

            case 4:
                for (int i = 0; i < NUM_ESTACOES; i++) {
                    printf("%d -- %0.2f\n", i, resumo[i][1]);
                }
                break;

            case 5: {
                int maiorEst = 0;
                for (int i = 1; i < NUM_ESTACOES; i++) {
                    if (resumo[i][4] > resumo[maiorEst][4])
                        maiorEst = i;
                }
                printf("%d -- %0.2f\n", maiorEst, resumo[maiorEst][4]);
                break;
            }
        }
    }

    return 0;
}
