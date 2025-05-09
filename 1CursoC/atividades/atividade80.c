#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void calc_esfera(float R, float *area, float *volume){

    if (R <= 0)
    {
        printf("O raio deve ser um valor positivo");

        return;
    }
    
    *area = 4 * M_PI * R * R;
    *volume = (4.0 / 3.0) * M_PI * R * R * R;

}

int main(){

    float R;
    float area, volume;

    scanf("%f", &R);

    calc_esfera(R, &area, &volume);

    if (R > 0)
    {
        printf("raio: %0.2f\n", R);
        printf("area: %0.2f\n", area);
        printf("volume: %0.2f", volume);
    }


}