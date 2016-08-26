#include <stdio.h>
#include <math.h>

void calc_esfera(float, float *, float *);

int main()
{
    float raio, area, volume;

    printf("Informe o raio da esfera: ");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);

    printf("Area da esfera: %.2f\nVolume da esfera: %.2f\n", area, volume);
    return 0;
}

void calc_esfera(float r, float * area, float * volume)
{
    *area = 4 * M_PI * pow(r, 2);
    *volume = 4 / 3.0 * M_PI * pow(r, 3);
}