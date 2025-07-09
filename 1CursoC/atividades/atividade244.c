#include <stdio.h>
#include <string.h>

int main(){

    char frase[100];
    char fraseNova[100];
    int i = 0;
    int j = 0;

    printf("Digite uma frase de ate 100 caracteres ");
    scanf(" %[^\n]", frase);

    while (1){
        if (frase[i] != ' ' && frase[i] != '\0'){
            fraseNova[j] = frase[i];
            j++;
        }else{
            fraseNova[j] = '\0'; //Finaliza a palavra;

            //Inverte e imprime a palavra
            for (int k = j - 1; k >= 0 ; k--){
                printf("%c", fraseNova[k]);
            }
            
            if (frase[i] == ' '){
                printf(" "); //Imprime o espaço
            }else if(frase[i] == '\0'){
                break; //Fim da frase
            }
            j = 0; //Reinicia a proxima palavra
        }
        
        i++;
    }

    printf("\n");

    return 0;
}