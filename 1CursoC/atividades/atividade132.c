#include <stdio.h>

void preencheMatriz(int mat[4][3]){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &mat[i][j]);
        }   
    }
}

void imprimeMatriz(int mat[4][3]){
    printf("Matriz: \n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

void somaMatriz(int mat[4][3]){
    int soma = 0;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            soma += mat[i][j];
        }
    }
    printf("Soma de todos os elementos: %d\n", soma);
}

void diagonalMatriz(int mat[4][3]){
    int diagonal = 0;
    for (int i = 0; i < 3; i++){
        printf("%d ", mat[i][i]);
        diagonal += mat[i][i];
    }
    printf("\nSoma da diagonal: %d\n", diagonal);
}

void posMaior(int mat[4][3]){
    int maior = 0;
    int linha;
    int coluna1;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            if (mat[i][j] > maior){
                maior = mat[i][j];
                linha = i;
                coluna1 = j;
            }   
        }   
    }    
    printf("Maior: %d\nLinha: %d\nColuna: %d\n", maior, linha, coluna1);
}

void alteraColuna(int mat[4][3], int coluna, int valor){
    if (coluna < 0 || coluna >= 3) {
        printf("Coluna inválida!\n");
        return;
    }
    for (int i = 0; i < 4; i++) {
        mat[i][coluna] *= valor;
    }
}

void somaColunas(int mat[4][3], int resultado[3]){
    for (int j = 0; j < 3; j++){
        resultado[j] = 0;
        for (int i = 0; i < 4; i++)
        {
            resultado[j] += mat[i][j];
        }
    }
}

int main(){

    int mat[4][3];
    int coluna, valor, resultado[3];

    preencheMatriz(mat);

    imprimeMatriz(mat);

    somaMatriz(mat);

    diagonalMatriz(mat);

    posMaior(mat);

    printf("\nDigite o número da coluna a alterar (0 a 2): ");
    scanf("%d", &coluna);
    printf("Digite o valor multiplicador: ");
    scanf("%d", &valor);

    alteraColuna(mat, coluna, valor);

    somaColunas(mat, resultado);

    printf("\nSoma de cada coluna: ");

    for (int j = 0; j < 3; j++) {
        printf("%d ", resultado[j]);
    }
    printf("\n");

    return 0;
}