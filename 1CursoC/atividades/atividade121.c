#include <stdio.h>
#include <stdlib.h>

//modularização: dividindo um problema em varias partes e chamando a função na main
void preencheMatriz(int mat[3][4]){
    //controlando a matriz de 12 posições (ocupando 120 bytes na memoria) e duas dimensões (linhas e colunas) nos for's
    for (int i = 0; i < 3 ; ++i){
        for (int j = 0; j < 4 ; ++j){
            //armazenando os valores digitados pelo usuário
            scanf("%d", &mat[i][j]);
        }
    }
}

void imprimeMatriz(int mat[3][4]){
   // Como a matriz é um array de 2 dimensões, o percorrimento é feito com 2 estruturas de repetição FOR
   //percorre linhas
    for (int i = 0; i < 3 ; ++i){
        //percorre colunas
        for (int j = 0; j < 4 ; ++j){
            //imprimindo os valores digitados pelo usuário
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int somaMatriz(int mat[3][4]){
    //declarando e inicializando a variavel soma
    int soma = 0;
    for (int i = 0; i < 3 ; ++i){
        for (int j = 0; j < 4 ; ++j){
            //calculando a soma dos valores digitados pelo usuário
            soma = soma + mat[i][j];
        }
    }
    //retornando a variavel soma "o resultado" 
    return soma;
}

void diagonalMatriz(int mat[3][4]) { 
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 4; ++j){
            //imprimindo a diagonal dos valores digitados
            if (i == j) {
                printf("%d", mat[i][j]);
            }
        }
        //pulando uma linha a cada valor "printado" na tela
        printf("\n");
    
    }
}

int posMaior(int mat[3][4]){
    int maior = mat[0][0];
    for (int i = 0; i < 3 ; ++i) {
        for (int j = 0; j < 4 ; ++j) {
            if(mat[i][j] > maior){
                maior = mat[i][j];
            }
        }
    }
    return maior;
}

void alteraColuna(int mat[3][4]){
    for (int i = 0; i < 3 ; ++i) {
        mat[i][0] = mat[i][0] * mat[i][0];
    }
}

int somaColunas(int mat[3][4]){
    int somaTotal = 0;
    for (int j = 0; j < 4 ; ++j) {
        for (int i = 0; i < 3 ; ++i) {
            somaTotal += mat[i][j];
        }
    }
    return somaTotal;
}

int main() {

    int mat[3][4];

    preencheMatriz(mat);
    printf("Matriz:\n");
    imprimeMatriz(mat);

    printf("Soma da matriz: %d\n", somaMatriz(mat));

    printf("Diagonal principal: ");
    diagonalMatriz(mat);

    printf("Maior elemento: %d\n", posMaior(mat));

    alteraColuna(mat);
    printf("Matriz após alteração da primeira coluna:\n");
    imprimeMatriz(mat);

    printf("Soma de todas as colunas: %d\n", somaColunas(mat));

    return 0;
}