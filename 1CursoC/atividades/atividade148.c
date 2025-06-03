#include <stdio.h>
#include <string.h>

/* Faça um programa em C que receba a temperatura média de cada mês do ano e armazene-as em um vetor. Elabore uma função que retorne a maior e a menor temperatura do ano, juntamente com o mês em que elas ocorreram. O mês deverá ser mostrado por extenso (janeiro, fevereiro, ...). A função deverá se chamar verificaTemperatura. esenvolva também uma função chamada imprimeMes para imprimir as informações solicitadas (printf("%0.2f -- "); . A leitura dos valores deve ser feita na função main. Caso haja temperaturas iguais em dois ou mais meses, considerar o primeiro valor encontrado na resposta. */

char *meses[12] = {
    "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
};

void recTemp(float temp[12]){
    for(int i = 0; i < 12 ; i++){
        scanf("%f", &temp[i]);
    }
}

void verificaTemperatura(float temp[], int *indiceMin, int *indiceMax){
    
    *indiceMin = 0;
    *indiceMax = 0;
    
    for (int i = 1; i < 12; i++)
    {
        if (temp[i] < temp[*indiceMin])
        {
            *indiceMin = i;
        }
        if (temp[i] > temp[*indiceMax])
        {
            *indiceMax = i;
        }
    }
}

void imprimeMes(float valor, int indice){
    printf("%.2f -- %s\n", valor, meses[indice]);
    
}

int main(){
    
    float temp[12];
    int indiceMin, indiceMax;

    recTemp(temp);
    verificaTemperatura(temp, &indiceMin, &indiceMax);
    imprimeMes(temp[indiceMax], indiceMax);
    imprimeMes(temp[indiceMin], indiceMin);
    
    return 0;
}