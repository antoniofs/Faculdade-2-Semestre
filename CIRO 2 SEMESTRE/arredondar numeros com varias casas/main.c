#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double arredondar (double, int);

int main()
{
    double numero;
    int casas;

    printf("Digite o valor real: ");
    scanf("%lf", &numero);
    printf("Digite o numero de casas que você quer: ");
    scanf("%i", &casas);
    printf("o valor com %i casa é esse: %lf", casas, arredondar(numero, casas));

    return 0;
}

double arredondar(double n, int c)
{
    double total;

    total = floor(n * pow(10,c) + 0.5) / pow(10,c);


    return total;
}
