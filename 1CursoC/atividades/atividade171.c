#include <stdio.h>

struct Hora {
    int hora;
    int minuto;
    int segundo;
};

typedef struct Hora Hora;

int compararHoras(Hora h1, Hora h2) {
    if (h1.hora != h2.hora)
        return h1.hora > h2.hora;
    else if (h1.minuto != h2.minuto)
        return h1.minuto > h2.minuto;
    else
        return h1.segundo > h2.segundo;
}

int main() {
    Hora horarios[5], maiorHora;
    
    for (int i = 0; i < 5; i++) {
        printf("Digite a hora %d (hh mm ss): ", i + 1);
        scanf("%d %d %d", &horarios[i].hora, &horarios[i].minuto, &horarios[i].segundo);
    }

    maiorHora = horarios[0];

    for (int i = 1; i < 5; i++) {
        if (compararHoras(horarios[i], maiorHora)) {
            maiorHora = horarios[i];
        }
    }

    printf("Maior hora digitada: %02d:%02d:%02d\n", maiorHora.hora, maiorHora.minuto, maiorHora.segundo);

    return 0;
}