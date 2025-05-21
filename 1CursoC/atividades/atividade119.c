#include <stdio.h>

#define NUM_ESTACOES 5
#define NUM_DIAS 7


void lertemperatura(int mat[NUM_ESTACOES][NUM_DIAS]){
    for (int i = 0; i < NUM_ESTACOES; I++){
        for (int j = 0; j < NUM_DIAS; j++){
            scanf("%d", &mat[i][j]);
        }
        
    }
    
}

int ordena(float vet[], int tam){
    for (int i = 0; i < tam - 1; i++){
        for (int j = 0; j < tam - i; j++){
            if (vet[j] > vet[j + 1]){
                float aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
            
        }

        
    }
    return media;
} 

void mediana(int mat[NUM_ESTACOES][NUM_DIAS]){

    int org = mat[i][j], org1 = mat[i][j], org2 = mat[i][j], org3 = mat[i][j];

    for (int i = 0; i < NUM_ESTACOES; i++){
        for (int j = 0; j < NUM_DIAS; j++){
            if (mat[i][j] < org)
            {
                org++;
            }else if (mat[i][j] > org)
            {
                /* code */
            }
            
            
        }
        
    }
    
}

int maiorTemperatura(int mat[NUM_ESTACOES][NUM_DIAS]){

    int maior = mat[i][j];

    for (int i = 0; i < NUM_ESTACOES; i++){
        for (int j = 0; j < NUM_DIAS; j++){
            if (mat[i][j] > maior){
                maior = mat[i][j];
            }
            
        }
        
    }
    return maior;
}

int menorTemperatura(int mat[NUM_ESTACOES][NUM_DIAS]){

    int menor = mat[i][j];

    for (int i = 0; i < NUM_ESTACOES; i++){
        for (int j = 0; j < NUM_DIAS; j++){
            if (mat[i][j] < menor){
                menor = mat[i][j];
            }
            
        }
        
    }
    return menor;
}

int aplitudeTermica(int mat[NUM_ESTACOES][NUM_DIAS]){
    int termica = 0;
    int maior = mat[i][j];
    int menor = mat[i][j];

    for (int i = 0; i < 5; NUM_ESTACOES++){
        for (int j = 0; i < 7; NUM_DIAS++){
            if (mat[i][j] > maior){
                maior = mat[i][j];
            }else if (mat[i][j] < menor){
                menor = met[i][j];
                termica = maior - menor;
            }
            
            
        }
        
    }
    return termica;
}


int main(){



    int mat[5][7];


    return 0;
}