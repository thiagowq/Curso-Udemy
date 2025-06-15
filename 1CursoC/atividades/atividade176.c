#include <stdio.h>
#include <string.h>

#define TAM 21

void imprimirAoContrario(char str[]) {
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int contarCaractere(char str[], char c) {
    int cont = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) cont++;
    }
    return cont;
}

void substituirPrimeiraOcorrencia(char str[], char c1, char c2) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c1) {
            str[i] = c2;
            break; // Para no primeiro caractere encontrado
        }
    }
}

char verificarSubstring(char s1[], char s2[]) {
    if (strstr(s1, s2) != NULL) {
        return 'S';
    } else {
        return 'N';
    }
}

int main() {
    char s1[TAM], s2[TAM];
    int opcao;
    
    fgets(s1, TAM, stdin);
    s1[strcspn(s1, "\n")] = '\0'; // remove o '\n' do final
    
    do {
        scanf("%d", &opcao);
        getchar(); // consome o '\n' após o número

        switch(opcao) {
            case 1:
                printf("%lu\n", strlen(s1));
                break;
            case 2:
                fgets(s2, TAM, stdin);
                s2[strcspn(s2, "\n")] = '\0';
                strcat(s1, s2);
                printf("%s\n", s1);
                break;
            case 3:
                imprimirAoContrario(s1);
                break;
            case 4: {
                char c;
                scanf(" %c", &c);
                printf("%d\n", contarCaractere(s1, c));
                break;
            }
            case 5: {
                char c1, c2;
                scanf(" %c %c", &c1, &c2);
                substituirPrimeiraOcorrencia(s1, c1, c2);
                printf("%s\n", s1);
                break;
            }
            case 6:
                fgets(s2, TAM, stdin);
                s2[strcspn(s2, "\n")] = '\0';
                printf("%c\n", verificarSubstring(s1, s2));
                break;
            case 7:
                fgets(s1, TAM, stdin);
                s1[strcspn(s1, "\n")] = '\0';
                break;
        }
    } while (opcao != 8);

    return 0;
}