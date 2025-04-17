#include <stdio.h>
#include <math.h>

int main() {

    int idade;

    scanf("%d", &idade);

    if(idade <= 7)
    {
        printf("Infantil A");
    }
    else{

        if(idade <=10 )
        {
            printf("Infantil B");
        }
        if(idade <= 13)
        {
            printf("Juvenil A");
        }
        if(idade <= 17)
        {
            printf("Juvenil B");
        }
        else{
            printf("Sênior");
        }
    }

    return 0;
}
