#include <stdio.h>
#include <string.h>

int main(){

   char string[100];
   char letra;
   int cont = 0;
   
   printf("Digite uma palavra:");
   scanf("%s", string);
   fflush(stdin);

   printf("Digite uma letra:");
   scanf(" %c", &letra);
   fflush(stdin);
   
   for (int i = 0; string[i] != '\0'; i++){
        if (string[i] == letra){
            cont++;
        }
   }

   printf("a letra %c aparece %d vezes\n",letra, cont);

    return 0;
}