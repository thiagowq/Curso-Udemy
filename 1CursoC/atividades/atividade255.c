#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Jogo de adivinhação de números: O programa gera um número aleatório
 (entre 1 e 100, por exemplo) e o usuário tenta adivinhar. 
 O programa dá dicas se o palpite é muito alto ou muito baixo.*/

int main(){

    // Inicializa a semente do gerador de números aleatórios
    srand(time(NULL));

    int numero_aleatorio = rand() % 11 ;
    int num;

    if (numero_aleatorio >= 5){
        printf("Dica: Numero maior que 5\n");
    }else if(numero_aleatorio < 5){
        printf("Dica: Numero menor que 5\n");
    }
    
    printf("Tente adivinhar o numero aleatório que a maquina criou (entre 0 e 10): ");
    scanf("%d", &num);

    printf("\n");

    if (numero_aleatorio == num){
        printf("Correto!\n\nNumero Digitado: %d\nNumero Maquina: %d\n", num, numero_aleatorio);
    }else if(numero_aleatorio != num){
        printf("Errado!\n\nNumero Digitado: %d\nNumero Maquina: %d\n", num, numero_aleatorio);
    }

    printf("\n");

    return 0;
}
