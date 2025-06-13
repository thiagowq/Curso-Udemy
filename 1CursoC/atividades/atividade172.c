#include <stdio.h>
#include <string.h>

struct data{
    int dia, mes, ano;
};

struct pessoa{
    char nome[20];
    struct data nascimento;
};

typedef struct pessoa pessoa;

int maisVelho(struct data d1, struct data d2) {
    if (d1.ano != d2.ano)
        return d1.ano < d2.ano;
    if (d1.mes != d2.mes)
        return d1.mes < d2.mes;
    return d1.dia < d2.dia;
}

int maisNovo(struct data d1, struct data d2) {
    if (d1.ano != d2.ano)
        return d1.ano > d2.ano;
    if (d1.mes != d2.mes)
        return d1.mes > d2.mes;
    return d1.dia > d2.dia;
}

int main(){

    pessoa pessoas[6];

    int indiceMaisVelho = 0, indiceMaisNovo = 0;

    for (int i = 0; i < 6; i++){
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf(" %[^\n]", pessoas[i].nome);

        printf("Digite a sua data de nascimento (dd mm aa): ");
        scanf("%d %d %d", &pessoas[i].nascimento.dia, &pessoas[i].nascimento.mes, &pessoas[i].nascimento.ano);

        if (i == 0){
            indiceMaisVelho = indiceMaisNovo = 0;
        }else{
            if (maisVelho(pessoas[i].nascimento, pessoas[indiceMaisVelho].nascimento)){
                indiceMaisVelho = i;
            }
            if (maisNovo(pessoas[i].nascimento, pessoas[indiceMaisNovo].nascimento)){
                indiceMaisNovo = i;
            }            
    }
}

    printf("\nPESSOA MAIS VELHA: %s\n", pessoas[indiceMaisVelho].nome);
    printf("PESSOA MAIS NOVA: %s\n", pessoas[indiceMaisNovo].nome);

    return 0;
}