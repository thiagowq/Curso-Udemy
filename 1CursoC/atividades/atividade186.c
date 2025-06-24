#include <stdio.h>

enum Meses {
    JANEIRO = 1, FEVEREIRO, MARCO, ABRIL, MAIO, JUNHO,
    JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO, DEZEMBRO
};

int main() {
    char *nomesMeses[] = {
        "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };
    
    int diasMeses[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int num;
    
    printf("Digite um numero entre 1 e 12: \n");
    scanf("%d", &num);
    
    if (num >= 1 && num <= 12) {
        printf("O mes eh %s e tem %d dias.\n", nomesMeses[num - 1], diasMeses[num - 1]);
    } else {
        printf("Numero invalido.\n");
    }

    return 0;
}