#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(){
    setlocale(LC_ALL,"Portuguese");

    char s1[N] = {"Logica de"};
    char s2[N] = {" Programação!"};

    printf("Antes do strcpy:\n");
    printf("str1: %s\n", s1);
    printf("str2: %s\n", s2);

    //S1 recebe o valor de S2 também, obtendo assim o S1 + S2 
    strcat(s1, s2);

    printf("Depois do strcat:\n");
    puts(s1);

    return 0;
}