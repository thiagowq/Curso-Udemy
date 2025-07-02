#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    FILE *file;
    file = fopen("C:\\Users\\Usuário\\Desktop\\Projetos\\Curso_Udemy\\1CursoC\\atividades\\numero.txt.txt", "r");

    if (file == NULL){
        printf("Arquivo não pode ser aberto\n");
        return 0;
    }
    
    int x, y, z;

    fscanf(file, "%d %d %d", &x, &y, &z);
    printf("%d %d %d", x, y, z);

    fclose(file);

    return 0;
}