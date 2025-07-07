#include <stdio.h>
#include <string.h>

int main(){

    char string[20];
    int count = 0;
    char sub;

    printf("Digite uma palavra: ");
    scanf("%19s", string);

    for (int i = 0; string[i] != '\0'; i++){
        
        char c = string[i];

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            count++;
        }
    }

    printf("Entre com um caractere para substituir as vogais: ");
    scanf(" %c", &sub);

    for (int i = 0; i < string[i] != '\0'; i++){
        char c = string[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            string[i] == sub;
        }
        
    }
    
    printf("Nova string: %s\n", string);
    printf("Número de vogais encontradas: %d\n", count);
    
    return 0;
}