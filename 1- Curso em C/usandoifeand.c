#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função principal do programa
void main(){

    //Permite usar acentos e em portugu�s
    setlocale(LC_ALL,"");

    //Definindo Variáveis
    int a = 20;

    //Conectivo Lógico E (AND) , Se uma COMPARAÇÃO for FALSA não entra no bloco
    if( a > 5 && a < 15){
        printf("\n A variável 'a' está entre 5 e 15");
   }

    //Conectivo Lógico OU (OR) , Se uma COMPARAÇÃO for VERDADEIRA já entra no bloco
    if( a > 5 || a < 15){
        printf("\n A variável 'a' é maior que 5 ou 15");
   }

    //Misturando Conectivos
    if(( a > 5 && a < 15) || a == 20 ){
        printf("\n A variável 'a' está entre 5 e 15 ou ela vale 20");
   }


    // Pausa o programa após executar
    system("pause")
}



