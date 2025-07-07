#include <stdio.h>

void cadastro(int mat[3][3]){

    int linhaMaiorSoma = 0;
    int maiorSoma = 0;

    for (int i = 0; i < 3; i++){
        int soma = 0;
        for (int j = 0; j < 3; j++){
            scanf("%d", &mat[i][j]);
            soma += mat[i][j];
        }

        if (soma > maiorSoma){
            maiorSoma = soma;
            linhaMaiorSoma = i;
        }
    }

    printf("\nA maior soma de elementos e %d e esta na linha %d:\n", maiorSoma, linhaMaiorSoma);

    for (int j = 0; j < 3; j++){
        printf("%d ", mat[linhaMaiorSoma][j]);
    }
    printf("\n");
}

int main(){

    int mat[3][3];

    cadastro(mat);

    return 0;
}