#include <stdio.h>
#include <string.h>
#define N 50

/*Este programa le duas strings e imprime:
    o tamanho das duas strings;
    a primeira em letras minusculas;
    a segunda em letras maiusculas;
    as duas strings em ordem alfabetica crescente;
    a segunda concatenada com a primeira.*/

int main(){

    char str1[N];
    char str2[N];
    char aux[N];

    gets(str1);
    gets(str2);
    
    printf("Tamanhos: %d e %d, respectivamente.", strlen(str1), strlen(str2));
    strcpy(aux, str1);
    printf("Primeira string em minusculas: %s\n", strlwr(aux));
    strcpy(aux, str2);
    printf("Segunda string em maiusculas: %s\n", strupr(aux));

    if (strcasecmp(str1, str2) < 0){
        printf("%s ||| %s\n", str1, str2);
    }else{
        printf("%s ||| %s\n", str2, str1);
    }

    printf("Concatenacao: %s\n", strcat(str1, str2));
    
    return 0;
}
