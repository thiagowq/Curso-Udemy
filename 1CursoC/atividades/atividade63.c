#include <stdio.h>
#include <stdlib.h>

void display (int var, int *ptr);
void update (int *p);

int main(){

// Ponteiros:
//*ptr : o apontado por, conteudo do endereço da vairavel que ptr aponta
// ptr : o endereço da variavel
// &ptr : o endereço do ponteiro

    int var = 15;
    int *ptr; //para declararmos um ponteiro utilizamos * antes do nome da variável

    ptr = &var;

    display(var,ptr);

    update(&var);

    display(var,ptr);

    return 0;

}

void display(int var, int *ptr){

    printf("\n\n");
    printf("conteudo de var = %d\n", var);
    printf("endereco de var = %p\n", &var);
    printf("conteudo apontado por ptr = %d\n", *ptr);
    printf("endereco apontado por ptr = %p\n", ptr);
    printf("endereco do ptr           = %p\n", &ptr);

}
void update (int *p){

*p = *p + 1;

}

