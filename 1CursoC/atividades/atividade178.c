#include <stdio.h>

struct dataValida {
    int dia, mes, ano;
};

typedef struct dataValida dataValida;

int converterParaDias(dataValida data) {
    return data.ano * 365 + data.mes * 30 + data.dia;
}

int absoluto(int x) {
    return (x < 0) ? -x : x;
}

int main() {
    dataValida datas[2];

    for (int i = 0; i < 2; i++) {
        printf("Digite a data %d (dd mm aaaa): ", i + 1);
        scanf("%d %d %d", &datas[i].dia, &datas[i].mes, &datas[i].ano);
    }

    int dias1 = converterParaDias(datas[0]);
    int dias2 = converterParaDias(datas[1]);

    int diferenca = absoluto(dias2 - dias1);

    printf("Numero aproximado de dias entre as datas: %d\n", diferenca);

    return 0;
}