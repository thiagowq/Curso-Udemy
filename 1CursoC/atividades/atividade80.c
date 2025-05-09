#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void calc_esfera(float R, float *area, float *volume){

    if (R <= 0)
    {
        printf("O raio deve ser um valor positivo \n 0 é o raio");

        return;
    }
    
    *area = 4 * M_PI * R * R;
    *volume = (4.0 / 3.0) * M_PI * R * R * R;

}

int main(){

    float R;
    float area, volume;

    printf("Digite o valor do raio: ");
    scanf("%f", &R);

    calc_esfera(R, &area, &volume);

    if (R > 0)
    {
        printf("Raio: %0.2f\n", R);
        printf("Area: %0.2f\n", area);
        printf("Volume: %0.2f", volume);
    }


}