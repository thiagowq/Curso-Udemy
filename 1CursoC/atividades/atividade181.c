#include <stdio.h>

void vetor (int num[8], int guardaValor){
    int contador = 0;
    for (int i = 0; i < 8; i++){
        printf("Digite os numeros: ");
        scanf("%d", &num[i]);
    }
    
    printf("Digite o numero desejado para verificar se está no vetor: ");
    scanf("%d", &guardaValor);
    
    for (int i = 0; i < 8; i++){
        if (num[i] == guardaValor){
            contador++;
        }
    }

    printf("o %d aparece %d vezes", guardaValor, contador);
    
}

int main(){

    int num[8], guardaValor;

    vetor(num, guardaValor);

    return 0;
}