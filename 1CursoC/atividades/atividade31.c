#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

int num1, res = 0;

printf("Digite um número");
scanf("%d", &num1);

for (int i = 1; i <= num1; i++)
{
    res += i;
}

printf("A soma dos números de 1 até %d é : %d\n", num1, res);

return 0;

}
