#include <stdio.h>
#include <string.h>

int main(){

    char frase[51];         // Máximo de 50 caracteres
    char letras[27];        // Armazena letras diferentes (máx. 26 + '\0')
    int qtd = 0;
    int diferente;
    int iguai = 0;

    printf("Digite uma frase de até 100 caracteres: ");
    scanf(" %[^\n]", frase);

    for (int i = 0; frase[i] != '\0'; i++){
        if (frase[i] == ' ')continue; // Ignora espaços
        
        diferente = 1; // Assume que a letra é nova
        
        // Verifica se a letra já está registrada
        for (int j = 0; j < qtd; j++){
            if (frase[i] ==  letras[j]){
                diferente = 0;
                break;
            }    
        }

        if (diferente){
            letras[qtd] = frase[i]; // Armazena letra nova
            qtd++;
        }
    }

    printf("%d\n", qtd);

    return 0;
} 