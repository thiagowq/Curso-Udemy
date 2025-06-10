#include <stdio.h>

int main(){

    int s = 3455;
    int n;

    for (int i = 0; i < 3; i++){
        printf("Digite a senha:\n");
        scanf("%d", &n);

        if (n == s){
            printf("Senha correta!\n");
            return 0;
        }else{
            printf("Tente novamente!\n");
        }
        
    }
    
    printf("Acabou as tentativas, tente novamente amanhã!\n");

    return 0;
}