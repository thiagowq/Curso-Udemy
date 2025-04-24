#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

//Declarando Variáveis
int tempo, horas, minutos, segundos;

//Perguntando ao usuário
printf("Digite o tempo em segundos:");
scanf("%d", &tempo);

horas = tempo / 3600;
tempo = tempo % 3600;
minutos = tempo / 60;
segundos = tempo % 60;

//Exibe o resultado
printf("%d hora(s), %d minuto(s) e %d segundo(s)\n ", horas, minutos, segundos);

return 0;
}