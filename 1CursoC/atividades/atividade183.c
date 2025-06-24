#include <stdio.h>

void cadastroAlunos(int nota[5]){
    for (int i = 0; i < 5; i++){
        scanf("%d", &nota[i]);
    }
}

void dadosAlunos(int nota[5]){
    for (int i = 0; i < 5; i++){
        printf("%d\n", nota[i]);
    }
}

int main(){

    int nota[5];

    cadastroAlunos(nota);
    dadosAlunos(nota);
    return 0;
}