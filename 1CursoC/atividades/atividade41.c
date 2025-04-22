#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

//Declarando Variáveis
int nota1, nota2, nota3, media;

//Perguntando ao usuário
printf("Digite a sua nota em Português:");
scanf("%d", &nota1);

printf("\nDigite a sua nota em Matemática:");
scanf("%d", &nota2);

printf("\nDigite a sua nota me História:");
scanf("%d", &nota3);

media = (nota1 + nota2 + nota3) / 3;

if (media >= 7)
{
    printf("Aprovado");
} else if (media >= 5){
    printf("Recuperação");
} else{
    printf("Reprovado");
}

return 0;
}