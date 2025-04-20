#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

int num;

printf("Digite um numero");
scanf("%d", &num);

printf("Tabuada do numero %d: \n", num);

for (int i = 1; i <= 10; i++)
{
    printf("%d x %d = %d\n", num, i, num * i);
}

return 0;

}
