#include <stdio.h>
#include <math.h>

double hipotenusa (double, double);

int main ()
{
    double catetosx, catetosy;

    printf("Digite o valor dos catetos: ");
    scanf("%lf %lf", &catetosx, &catetosy);
    printf("O valor da hipotenusa eh : %.2lf\n\n",hipotenusa(catetosx, catetosy));

    return 0;
}

double hipotenusa (double x, double y)
{
    double total = 0;

    total = sqrt ( pow(x, 2) + pow(y, 2));

    return total;
}
