#include <stdio.h>
#include <math.h>
void calc_esfera(float R, float *area, float *volume){

    *area = 4 * M_PI * R * R;
    *volume = (4.0/3.0) * M_PI * pow(R, 3);

}

int main(){

    float R, area, volume;

    printf("Digite um numero inteiro positivo: ");
    scanf("%f", &R);

    if (R <= 0)
    {
        printf("O raio deve ser um valor positivo!");
    }
    
    calc_esfera(R, &area, &volume);

    printf("raio: %0.2f\narea: %0.2f\nvolume: %0.2f\n", R, area, volume);

    return 0;
}